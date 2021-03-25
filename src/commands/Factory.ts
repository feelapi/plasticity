import { Editor } from './../Editor.ts'
import { PointPicker } from './../PointPicker.ts'
import * as THREE from "three";

export abstract class GeometryFactory {
    editor: Editor;

    constructor(editor: Editor) {
        this.editor = editor;
    }
}

export class SphereFactory extends GeometryFactory {
    center: THREE.Vector3;
    radius: number;
    mesh: THREE.Mesh;

    constructor(editor: Editor) {
        super(editor);
        const geometry = new THREE.SphereGeometry(0, 8, 6, 0, Math.PI * 2, 0, Math.PI);
        const material = new THREE.MeshMatcapMaterial();
        // material.color = new THREE.Color(0x454545);

        // const image = url.resolve(window.location.origin, "/static/matcap-porcelain-white.jpg");

        // const matcapTexture = new THREE.TextureLoader().load(image);
        // console.log(matcapTexture);
        // material.matcap = matcapTexture;
        this.mesh = new THREE.Mesh(geometry, material);
        this.editor.addObject(this.mesh);
    }

    update() {
        const geometry = new THREE.SphereGeometry(this.radius, 8, 6, 0, Math.PI * 2, 0, Math.PI);
        this.mesh.geometry.dispose();
        this.mesh.geometry = geometry;
        this.mesh.position.copy(this.center);
    }

    commit() {
        this.editor.select(this.mesh);
    }

    cancel() {
        this.editor.scene.remove(this.mesh);
    }
}