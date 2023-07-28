// This is a generated file, modify: generate/templates/c3d.d.ts

declare module "*c3d.node" {
    declare type SimpleName = number;

    declare interface AttributeContainer {
        GetStyle(): number;
        SetStyle(s: number): void;
    }

    declare class RefItem {
        private _useNominal: undefined;

        GetUseCount(): number;

        async GetUseCount_async(): Promise < number >
        ;
        AddRef(): void;

        async AddRef_async(): Promise < void >
        ;
        Id(): bigint;
    }

    declare class Function {
        private _useNominal: undefined;

        Id(): bigint;
    }

    declare class CubicFunction extends Function {

        constructor(value1: number, value2: number);

        InsertValue(t: number, newValue: number): boolean;

        async InsertValue_async(t: number, newValue: number): Promise < boolean >
        ;
        Id(): bigint;
    }

    declare class SpaceItem extends RefItem {


        IsA(): SpaceType;

        async IsA_async(): Promise < SpaceType >
        ;
        Type(): SpaceType;

        async Type_async(): Promise < SpaceType >
        ;
        Family(): SpaceType;

        async Family_async(): Promise < SpaceType >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        Transform(mat: Matrix3D, iReg ? : RegTransform): void;

        async Transform_async(mat: Matrix3D, iReg ? : RegTransform): Promise < void >
        ;
        Move(v: Vector3D, iReg ? : RegTransform): void;

        async Move_async(v: Vector3D, iReg ? : RegTransform): Promise < void >
        ;
        Rotate(axis: Axis3D, angle: number, iReg ? : RegTransform): void;

        async Rotate_async(axis: Axis3D, angle: number, iReg ? : RegTransform): Promise < void >
        ;
        Refresh(): void;

        async Refresh_async(): Promise < void >
        ;
        Duplicate(iReg ? : RegDuplicate): SpaceItem;

        async Duplicate_async(iReg ? : RegDuplicate): Promise < SpaceItem >
        ;
        AddYourGabaritTo(cube: Cube): void;

        async AddYourGabaritTo_async(cube: Cube): Promise < void >
        ;
        Id(): bigint;
    }

    declare class ControlData3D {
        private _useNominal: undefined;

        Count(): number;

        async Count_async(): Promise < number >
        ;
        GetPoint(i: number, ): CartPoint3D;

        async GetPoint_async(i: number, ): Promise < CartPoint3D >
        ;
        SetPoint(i: number, p: CartPoint3D): boolean;

        async SetPoint_async(i: number, p: CartPoint3D): Promise < boolean >
        ;
        TotalCount(): number;

        async TotalCount_async(): Promise < number >
        ;
        ShareCount(): number;

        async ShareCount_async(): Promise < number >
        ;
        ResetIndex(): void;

        async ResetIndex_async(): Promise < void >
        ;
        Id(): bigint;
    }

    declare class Creator extends RefItem {


        IsA(): CreatorType;

        async IsA_async(): Promise < CreatorType >
        ;
        Type(): CreatorType;

        async Type_async(): Promise < CreatorType >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        GetBasisPoints(): ControlData3D;

        async GetBasisPoints_async(): Promise < ControlData3D >
        ;
        SetBasisPoints(cd: ControlData3D): void;

        async SetBasisPoints_async(cd: ControlData3D): Promise < void >
        ;
        GetBasisItems(): SpaceItem[];

        async GetBasisItems_async(): Promise < SpaceItem[] >
        ;
        GetCreatorsCount(ct: CreatorType): number;

        async GetCreatorsCount_async(ct: CreatorType): Promise < number >
        ;
        GetYourNameMaker(): SNameMaker;

        async GetYourNameMaker_async(): Promise < SNameMaker >
        ;
        GetStatus(): ProcessState;

        async GetStatus_async(): Promise < ProcessState >
        ;
        SetStatus(l: ProcessState): void;

        async SetStatus_async(l: ProcessState): Promise < void >
        ;
        CreateShell(shell: FaceShell, sameShell: CopyMode, ): {
            success: boolean,
            items: SpaceItem[],
        };

        async CreateShell_async(shell: FaceShell, sameShell: CopyMode, ): Promise < {
                success: boolean,
                items: SpaceItem[],
            } >
        ;
        GetMainName(): SimpleName;

        async GetMainName_async(): Promise < SimpleName >
        ;
        Id(): bigint;
    }

    declare class Transactions {
        private _useNominal: undefined;

        GetCreatorsCount(): number;

        async GetCreatorsCount_async(): Promise < number >
        ;
        GetCreator(ind: number): Creator | null;

        async GetCreator_async(ind: number): Promise < Creator >
        ;
        SetCreator(ind: number): Creator | null;

        async SetCreator_async(ind: number): Promise < Creator >
        ;
        DetachCreator(ind: number): Creator | null;

        async DetachCreator_async(ind: number): Promise < Creator >
        ;
        AddCreator(creator: Creator, addSame ? : boolean): boolean;

        async AddCreator_async(creator: Creator, addSame ? : boolean): Promise < boolean >
        ;
        GetCreators(): Creator[];

        async GetCreators_async(): Promise < Creator[] >
        ;
        DeleteCreator(ind: number): boolean;

        async DeleteCreator_async(ind: number): Promise < boolean >
        ;
        GetActiveCreatorsCount(): number;

        async GetActiveCreatorsCount_async(): Promise < number >
        ;
        Id(): bigint;
    }

    declare class Model extends RefItem implements AttributeContainer {

        constructor();

        AddItem(item: Item, n ? : SimpleName): Item | null;

        async AddItem_async(item: Item, n ? : SimpleName): Promise < Item >
        ;
        ItemsCount(): number;

        async ItemsCount_async(): Promise < number >
        ;
        GetItems(): Item[];

        async GetItems_async(): Promise < Item[] >
        ;
        DetachItem(item: Item, resetName ? : boolean): boolean;

        async DetachItem_async(item: Item, resetName ? : boolean): Promise < boolean >
        ;
        DeleteItem(item: Item, resetName ? : boolean): void;

        async DeleteItem_async(item: Item, resetName ? : boolean): Promise < void >
        ;
        GetItemByName(n: SimpleName, ): {
            item: Item,
            path: Path,
            from: Matrix3D,
        };

        async GetItemByName_async(n: SimpleName, ): Promise < {
                item: Item,
                path: Path,
                from: Matrix3D,
            } >
        ;
        NearestMesh(sType: SpaceType, tType: TopologyType, pType: PlaneType, axis: Axis3D, maxDistance: number, gridPriority: boolean, ): {
            success: boolean,
            find: Item,
            findName: SimpleName,
            element: RefItem,
            elementName: SimpleName,
            path: Path,
            from: Matrix3D,
        };

        async NearestMesh_async(sType: SpaceType, tType: TopologyType, pType: PlaneType, axis: Axis3D, maxDistance: number, gridPriority: boolean, ): Promise < {
                success: boolean,
                find: Item,
                findName: SimpleName,
                element: RefItem,
                elementName: SimpleName,
                path: Path,
                from: Matrix3D,
            } >
        ;
        SetStyle(s: int): void;

        async SetStyle_async(s: int): Promise < void >
        ;
        GetStyle(): int;

        async GetStyle_async(): Promise < int >
        ;
        SetColor(c: uint32): void;

        async SetColor_async(c: uint32): Promise < void >
        ;
        GetColor(): uint32;

        async GetColor_async(): Promise < uint32 >
        ;
        AttributesConvert(other: Grid): void;

        async AttributesConvert_async(other: Grid): Promise < void >
        ;
        GetCreatorsCount(): number;

        async GetCreatorsCount_async(): Promise < number >
        ;
        GetCreator(ind: number): Creator | null;

        async GetCreator_async(ind: number): Promise < Creator >
        ;
        SetCreator(ind: number): Creator | null;

        async SetCreator_async(ind: number): Promise < Creator >
        ;
        DetachCreator(ind: number): Creator | null;

        async DetachCreator_async(ind: number): Promise < Creator >
        ;
        AddCreator(creator: Creator, addSame ? : boolean): boolean;

        async AddCreator_async(creator: Creator, addSame ? : boolean): Promise < boolean >
        ;
        GetCreators(): Creator[];

        async GetCreators_async(): Promise < Creator[] >
        ;
        DeleteCreator(ind: number): boolean;

        async DeleteCreator_async(ind: number): Promise < boolean >
        ;
        GetActiveCreatorsCount(): number;

        async GetActiveCreatorsCount_async(): Promise < number >
        ;
        Id(): bigint;
    }

    declare class Item extends SpaceItem implements AttributeContainer {


        CreateMesh(stepData: StepData, note: FormNote, iReg ? : RegDuplicate): Item | null;

        async CreateMesh_async(stepData: StepData, note: FormNote, iReg ? : RegDuplicate): Promise < Item >
        ;
        CalculateMesh(stepData: StepData, note: FormNote, ): Mesh;

        async CalculateMesh_async(stepData: StepData, note: FormNote, ): Promise < Mesh >
        ;
        GetItemName(): SimpleName;

        async GetItemName_async(): Promise < SimpleName >
        ;
        SetItemName(name: SimpleName): void;

        async SetItemName_async(name: SimpleName): Promise < void >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        RebuildItem(sameShell: CopyMode, progInd ? : ProgressIndicator): SpaceItem[];

        async RebuildItem_async(sameShell: CopyMode, progInd ? : ProgressIndicator): Promise < SpaceItem[] >
        ;
        GetItemByPath(path: Path, ind: number, from: Matrix3D, currInd ? : number): Item | null;

        async GetItemByPath_async(path: Path, ind: number, from: Matrix3D, currInd ? : number): Promise < Item >
        ;
        SetStyle(s: int): void;

        async SetStyle_async(s: int): Promise < void >
        ;
        GetStyle(): int;

        async GetStyle_async(): Promise < int >
        ;
        SetColor(c: uint32): void;

        async SetColor_async(c: uint32): Promise < void >
        ;
        GetColor(): uint32;

        async GetColor_async(): Promise < uint32 >
        ;
        AttributesConvert(other: Grid): void;

        async AttributesConvert_async(other: Grid): Promise < void >
        ;
        GetCreatorsCount(): number;

        async GetCreatorsCount_async(): Promise < number >
        ;
        GetCreator(ind: number): Creator | null;

        async GetCreator_async(ind: number): Promise < Creator >
        ;
        SetCreator(ind: number): Creator | null;

        async SetCreator_async(ind: number): Promise < Creator >
        ;
        DetachCreator(ind: number): Creator | null;

        async DetachCreator_async(ind: number): Promise < Creator >
        ;
        AddCreator(creator: Creator, addSame ? : boolean): boolean;

        async AddCreator_async(creator: Creator, addSame ? : boolean): Promise < boolean >
        ;
        GetCreators(): Creator[];

        async GetCreators_async(): Promise < Creator[] >
        ;
        DeleteCreator(ind: number): boolean;

        async DeleteCreator_async(ind: number): Promise < boolean >
        ;
        GetActiveCreatorsCount(): number;

        async GetActiveCreatorsCount_async(): Promise < number >
        ;
        Id(): bigint;
    }

    declare class TopItem extends RefItem {


        Id(): bigint;
    }

    declare class Path {
        private _useNominal: undefined;

        Count(): number;

        async Count_async(): Promise < number >
        ;
        Id(): bigint;
    }

    declare class Rect {
        private _useNominal: undefined;

        GetTop(): number;

        async GetTop_async(): Promise < number >
        ;
        GetBottom(): number;

        async GetBottom_async(): Promise < number >
        ;
        GetLeft(): number;

        async GetLeft_async(): Promise < number >
        ;
        GetRight(): number;

        async GetRight_async(): Promise < number >
        ;
        Id(): bigint;
    }

    declare class Cube {
        private _useNominal: undefined;
        constructor();
        constructor(p0: CartPoint3D, p1: CartPoint3D, normalize ? : boolean);

        CalculateMatrix(pIndex: number, point: CartPoint3D, fixedPoint: CartPoint3D, useFixed: boolean, isotropy: boolean, ): {
            _result: boolean,
            matrix: Matrix3D,
        };

        async CalculateMatrix_async(pIndex: number, point: CartPoint3D, fixedPoint: CartPoint3D, useFixed: boolean, isotropy: boolean, ): Promise < {
                _result: boolean,
                matrix: Matrix3D,
            } >
        ;
        ProjectionRect(place: Placement3D, ): Rect;

        async ProjectionRect_async(place: Placement3D, ): Promise < Rect >
        ;
        Intersect(other: Cube, eps ? : number): boolean;

        async Intersect_async(other: Cube, eps ? : number): Promise < boolean >
        ;
        pmin: CartPoint3D;
        pmax: CartPoint3D;
        Id(): bigint;
    }

    declare class BooleanFlags {
        private _useNominal: undefined;
        constructor();

        InitBoolean(_closed: boolean, _allowNonIntersecting ? : boolean): void;

        async InitBoolean_async(_closed: boolean, _allowNonIntersecting ? : boolean): Promise < void >
        ;
        InitCutting(_closed: boolean, _allowNonIntersecting ? : boolean): void;

        async InitCutting_async(_closed: boolean, _allowNonIntersecting ? : boolean): Promise < void >
        ;
        SetMergingFaces(s: boolean): void;

        async SetMergingFaces_async(s: boolean): Promise < void >
        ;
        SetMergingEdges(s: boolean): void;

        async SetMergingEdges_async(s: boolean): Promise < void >
        ;
        Id(): bigint;
    }

    declare class SurfaceOffsetCurveParams {
        private _useNominal: undefined;
        constructor(f: Face, a: Axis3D, d: number, nm: SNameMaker);

        Id(): bigint;
    }

    declare class Surface extends SpaceItem {


        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        GetSurface(): Surface;

        async GetSurface_async(): Promise < Surface >
        ;
        GetUEpsilon(): number;

        async GetUEpsilon_async(): Promise < number >
        ;
        GetVEpsilon(): number;

        async GetVEpsilon_async(): Promise < number >
        ;
        GetUMid(): number;

        async GetUMid_async(): Promise < number >
        ;
        GetVMid(): number;

        async GetVMid_async(): Promise < number >
        ;
        GetUMin(): number;

        async GetUMin_async(): Promise < number >
        ;
        GetUMax(): number;

        async GetUMax_async(): Promise < number >
        ;
        GetVMin(): number;

        async GetVMin_async(): Promise < number >
        ;
        GetVMax(): number;

        async GetVMax_async(): Promise < number >
        ;
        GetUParamToUnit(): number;

        async GetUParamToUnit_async(): Promise < number >
        ;
        GetVParamToUnit(): number;

        async GetVParamToUnit_async(): Promise < number >
        ;
        GetRadius(): number;

        async GetRadius_async(): Promise < number >
        ;
        PointOn(uv: CartPoint, ): CartPoint3D;

        async PointOn_async(uv: CartPoint, ): Promise < CartPoint3D >
        ;
        Normal(u: number, v: number, ): Vector3D;

        async Normal_async(u: number, v: number, ): Promise < Vector3D >
        ;
        GetPlacement(exact ? : boolean): Placement3D;

        async GetPlacement_async(exact ? : boolean): Promise < Placement3D >
        ;
        NearDirectPointProjection(pnt: CartPoint3D, vect: Vector3D, ext: boolean, uvRange ? : Rect2D, onlyPositiveDirection ? : boolean): {
            u: number,
            v: number,
        };

        async NearDirectPointProjection_async(pnt: CartPoint3D, vect: Vector3D, ext: boolean, uvRange ? : Rect2D, onlyPositiveDirection ? : boolean): Promise < {
                u: number,
                v: number,
            } >
        ;
        Id(): bigint;
    }

    declare class Solid extends Item {

        constructor(shell: FaceShell, creator: Creator);
        constructor(shell: FaceShell, solid: Solid, creator ? : Creator);

        GetEdges(): CurveEdge[];

        async GetEdges_async(): Promise < CurveEdge[] >
        ;
        GetFaces(): Face[];

        async GetFaces_async(): Promise < Face[] >
        ;
        FindFaceByName(name: Name): Face | null;

        async FindFaceByName_async(name: Name): Promise < Face >
        ;
        FindFaceByHash(h: SimpleName): Face | null;

        async FindFaceByHash_async(h: SimpleName): Promise < Face >
        ;
        GetFace(index: number): Face | null;

        async GetFace_async(index: number): Promise < Face >
        ;
        GetEdge(index: number): CurveEdge | null;

        async GetEdge_async(index: number): Promise < CurveEdge >
        ;
        FindEdgeByName(name: Name): CurveEdge | null;

        async FindEdgeByName_async(name: Name): Promise < CurveEdge >
        ;
        GetShell(): FaceShell | null;

        async GetShell_async(): Promise < FaceShell >
        ;
        GetFaceIndex(face: Face): number;

        async GetFaceIndex_async(face: Face): Promise < number >
        ;
        GetEdgeIndex(edge: CurveEdge): number;

        async GetEdgeIndex_async(edge: CurveEdge): Promise < number >
        ;
        GetBasisPoints(): ControlData3D;

        async GetBasisPoints_async(): Promise < ControlData3D >
        ;
        SetBasisPoints(cd: ControlData3D): void;

        async SetBasisPoints_async(cd: ControlData3D): Promise < void >
        ;
        GetItems(): TopologyItem[];

        async GetItems_async(): Promise < TopologyItem[] >
        ;
        IsClosed(): boolean;

        async IsClosed_async(): Promise < boolean >
        ;
        GetCube(): Cube;

        async GetCube_async(): Promise < Cube >
        ;
        SetOwnChangedThrough(type: ChangedType): void;

        async SetOwnChangedThrough_async(type: ChangedType): Promise < void >
        ;
        MakeRight(): void;

        async MakeRight_async(): Promise < void >
        ;
        IsRight(): boolean;

        async IsRight_async(): Promise < boolean >
        ;
        SolidClassification(solid: Solid, epsilon ? : number): ItemLocation;

        async SolidClassification_async(solid: Solid, epsilon ? : number): Promise < ItemLocation >
        ;
        Id(): bigint;
    }

    declare class Assembly extends Item {


        GetItems(): Item[];

        async GetItems_async(): Promise < Item[] >
        ;
        Id(): bigint;
    }

    declare class RegTransform {
        private _useNominal: undefined;

        Id(): bigint;
    }

    declare class PlaneItem extends RefItem {


        IsA(): PlaneType;

        async IsA_async(): Promise < PlaneType >
        ;
        Type(): PlaneType;

        async Type_async(): Promise < PlaneType >
        ;
        Family(): PlaneType;

        async Family_async(): Promise < PlaneType >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        Move(to: Vector, iReg ? : RegTransform, ): Surface;

        async Move_async(to: Vector, iReg ? : RegTransform, ): Promise < Surface >
        ;
        Transform(matr: Matrix, iReg ? : RegTransform, newSurface ? : Surface): void;

        async Transform_async(matr: Matrix, iReg ? : RegTransform, newSurface ? : Surface): Promise < void >
        ;
        Duplicate(dup ? : RegDuplicate): PlaneItem;

        async Duplicate_async(dup ? : RegDuplicate): Promise < PlaneItem >
        ;
        AddYourGabaritTo(rect: Rect): void;

        async AddYourGabaritTo_async(rect: Rect): Promise < void >
        ;
        Id(): bigint;
    }

    declare class Curve extends PlaneItem {


        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        Inverse(iReg ? : RegTransform): void;

        async Inverse_async(iReg ? : RegTransform): Promise < void >
        ;
        Trimmed(t1: number, t2: number, sense: int): Curve | null;

        async Trimmed_async(t1: number, t2: number, sense: int): Promise < Curve >
        ;
        IsStraight(ignoreParams ? : boolean): boolean;

        async IsStraight_async(ignoreParams ? : boolean): Promise < boolean >
        ;
        IsClosed(): boolean;

        async IsClosed_async(): Promise < boolean >
        ;
        IsBounded(): boolean;

        async IsBounded_async(): Promise < boolean >
        ;
        GetTMax(): number;

        async GetTMax_async(): Promise < number >
        ;
        GetTMin(): number;

        async GetTMin_async(): Promise < number >
        ;
        GetPeriod(): number;

        async GetPeriod_async(): Promise < number >
        ;
        GetWeightCentre(): CartPoint;

        async GetWeightCentre_async(): Promise < CartPoint >
        ;
        GetLimitPoint(number: ptrdiff_t, ): CartPoint;

        async GetLimitPoint_async(number: ptrdiff_t, ): Promise < CartPoint >
        ;
        PointOn(t: number, ): CartPoint;

        async PointOn_async(t: number, ): Promise < CartPoint >
        ;
        _PointOn(t: number, ): CartPoint;

        async _PointOn_async(t: number, ): Promise < CartPoint >
        ;
        Explore(t: number, ext: boolean, ): {
            pnt: CartPoint,
            fir: Vector,
            sec: Vector,
            thir: Vector,
        };

        async Explore_async(t: number, ext: boolean, ): Promise < {
                pnt: CartPoint,
                fir: Vector,
                sec: Vector,
                thir: Vector,
            } >
        ;
        FirstDer(t: number, ): Vector;

        async FirstDer_async(t: number, ): Promise < Vector >
        ;
        _FirstDer(t: number, ): Vector;

        async _FirstDer_async(t: number, ): Promise < Vector >
        ;
        SecondDer(t: number, ): Vector;

        async SecondDer_async(t: number, ): Promise < Vector >
        ;
        _SecondDer(t: number, ): Vector;

        async _SecondDer_async(t: number, ): Promise < Vector >
        ;
        Tangent(t: number, ): Vector;

        async Tangent_async(t: number, ): Promise < Vector >
        ;
        _Tangent(t: number, ): Vector;

        async _Tangent_async(t: number, ): Promise < Vector >
        ;
        Normal(t: number, ): Vector;

        async Normal_async(t: number, ): Promise < Vector >
        ;
        _Normal(t: number, ): Vector;

        async _Normal_async(t: number, ): Promise < Vector >
        ;
        PointRelative(pnt: CartPoint, eps: number): ItemLocation;

        async PointRelative_async(pnt: CartPoint, eps: number): Promise < ItemLocation >
        ;
        PointLocation(pnt: CartPoint, eps: number): Location;

        async PointLocation_async(pnt: CartPoint, eps: number): Promise < Location >
        ;
        Id(): bigint;
    }

    declare class PolyCurve extends Curve {


        GetPointsCount(): number;

        async GetPointsCount_async(): Promise < number >
        ;
        GetPoint(index: ptrdiff_t, ): CartPoint;

        async GetPoint_async(index: ptrdiff_t, ): Promise < CartPoint >
        ;
        AddPoint(pnt: CartPoint): void;

        async AddPoint_async(pnt: CartPoint): Promise < void >
        ;
        Id(): bigint;
    }

    declare class Hermit extends PolyCurve {


        Id(): bigint;
    }

    declare class CubicSpline extends PolyCurve {


        Id(): bigint;
    }

    declare class Polyline extends PolyCurve {


        Id(): bigint;
    }

    declare class Contour extends Curve {

        constructor(curves: Curve[], sameCurves: boolean);

        InitClosed(c: boolean): void;

        async InitClosed_async(c: boolean): Promise < void >
        ;
        CheckClosed(closedEps: number): void;

        async CheckClosed_async(closedEps: number): Promise < void >
        ;
        GetArea(sag ? : number): number;

        async GetArea_async(sag ? : number): Promise < number >
        ;
        GetSegmentsCount(): number;

        async GetSegmentsCount_async(): Promise < number >
        ;
        GetSegment(i: number): Curve | null;

        async GetSegment_async(i: number): Promise < Curve >
        ;
        AddCurveWithRuledCheck(newCur: Curve, absEps: number, toEndOnly ? : boolean, checkSame ? : boolean, version ? : number): boolean;

        async AddCurveWithRuledCheck_async(newCur: Curve, absEps: number, toEndOnly ? : boolean, checkSame ? : boolean, version ? : number): Promise < boolean >
        ;
        GetCornerParams(): number[];

        async GetCornerParams_async(): Promise < number[] >
        ;
        Id(): bigint;
    }

    declare class ContourWithBreaks extends Contour {


        Id(): bigint;
    }

    declare class PlanarCheckParams {
        private _useNominal: undefined;
        constructor(accuracy: number);

        Id(): bigint;
    }

    declare class Rect1D {
        private _useNominal: undefined;

        Id(): bigint;
    }

    declare class Curve3D extends SpaceItem {


        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        GetPlaneCurve(saveParams: boolean, params ? : PlanarCheckParams): {
            curve2d: Curve,
            placement: Placement3D,
        };

        async GetPlaneCurve_async(saveParams: boolean, params ? : PlanarCheckParams): Promise < {
                curve2d: Curve,
                placement: Placement3D,
            } >
        ;
        IsPlanar(accuracy ? : number): boolean;

        async IsPlanar_async(accuracy ? : number): Promise < boolean >
        ;
        IsClosed(): boolean;

        async IsClosed_async(): Promise < boolean >
        ;
        IsTouch(): boolean;

        async IsTouch_async(): Promise < boolean >
        ;
        GetTMax(): number;

        async GetTMax_async(): Promise < number >
        ;
        GetTMin(): number;

        async GetTMin_async(): Promise < number >
        ;
        GetPeriod(): number;

        async GetPeriod_async(): Promise < number >
        ;
        IsPeriodic(): boolean;

        async IsPeriodic_async(): Promise < boolean >
        ;
        IsStraight(ignoreParams ? : boolean): boolean;

        async IsStraight_async(ignoreParams ? : boolean): Promise < boolean >
        ;
        Trimmed(t1: number, t2: number, sense: int): Curve3D | null;

        async Trimmed_async(t1: number, t2: number, sense: int): Promise < Curve3D >
        ;
        Normal(t: number, ): Vector3D;

        async Normal_async(t: number, ): Promise < Vector3D >
        ;
        Tangent(t: number, ): Vector3D;

        async Tangent_async(t: number, ): Promise < Vector3D >
        ;
        BNormal(t: number, ): Vector3D;

        async BNormal_async(t: number, ): Promise < Vector3D >
        ;
        GetCentre(): CartPoint3D;

        async GetCentre_async(): Promise < CartPoint3D >
        ;
        GetLimitPoint(number: ptrdiff_t, ): CartPoint3D;

        async GetLimitPoint_async(number: ptrdiff_t, ): Promise < CartPoint3D >
        ;
        PointOn(t: number, ): CartPoint3D;

        async PointOn_async(t: number, ): Promise < CartPoint3D >
        ;
        _PointOn(t: number, ): CartPoint3D;

        async _PointOn_async(t: number, ): Promise < CartPoint3D >
        ;
        NearPointProjection(pnt: CartPoint3D, ext: boolean, tRange ? : Rect1D | null): {
            success: boolean,
            t: number,
        };

        async NearPointProjection_async(pnt: CartPoint3D, ext: boolean, tRange ? : Rect1D | null): Promise < {
                success: boolean,
                t: number,
            } >
        ;
        GetSurfaceCurve(version ? : number): {
            curve2d: Curve,
            surface: Surface,
        };

        async GetSurfaceCurve_async(version ? : number): Promise < {
                curve2d: Curve,
                surface: Surface,
            } >
        ;
        GetWeightCentre(): CartPoint3D;

        async GetWeightCentre_async(): Promise < CartPoint3D >
        ;
        GetBasisCurve(): Curve3D;

        async GetBasisCurve_async(): Promise < Curve3D >
        ;
        GetBasisPoints(): ControlData3D;

        async GetBasisPoints_async(): Promise < ControlData3D >
        ;
        SetBasisPoints(cd: ControlData3D): void;

        async SetBasisPoints_async(cd: ControlData3D): Promise < void >
        ;
        Inverse(): void;

        async Inverse_async(): Promise < void >
        ;
        GetProjection(place: Placement3D, version ? : number): Curve | null;

        async GetProjection_async(place: Placement3D, version ? : number): Promise < Curve >
        ;
        GetCircleAxis(): {
            success: boolean,
            axis: Axis3D,
        };

        async GetCircleAxis_async(): Promise < {
                success: boolean,
                axis: Axis3D,
            } >
        ;
        Id(): bigint;
    }

    declare class Rect2D {
        private _useNominal: undefined;

        Id(): bigint;
    }

    declare class TrimmedCurve3D extends Curve3D {


        Id(): bigint;
    }

    declare class TrimmedCurve extends Curve {


        Id(): bigint;
    }

    declare class ReparamCurve3D extends Curve3D {


        Id(): bigint;
    }

    declare class ReparamCurve extends Curve {


        Id(): bigint;
    }

    declare class BridgeCurve3D extends Curve3D {


        Id(): bigint;
    }

    declare class OffsetCurve3D extends Curve3D {


        Id(): bigint;
    }

    declare class OffsetCurve extends Curve {


        Id(): bigint;
    }

    declare class SurfaceCurve extends Curve3D {


        Id(): bigint;
    }

    declare class Spiral extends Curve3D {


        Id(): bigint;
    }

    declare class ConeSpiral extends Spiral {


        Id(): bigint;
    }

    declare class CurveSpiral extends Spiral {


        Id(): bigint;
    }

    declare class PlaneCurve extends Curve3D {

        constructor(placement: Placement3D, init: Curve, same: boolean);

        GetPlacement(): Placement3D;

        async GetPlacement_async(): Promise < Placement3D >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        Id(): bigint;
    }

    declare class Contour3D extends Curve3D {

        constructor();

        AddCurveWithRuledCheck(curve: Curve3D, absEps ? : number, toEndOnly ? : boolean, checkSame ? : boolean, version ? : number): void;

        async AddCurveWithRuledCheck_async(curve: Curve3D, absEps ? : number, toEndOnly ? : boolean, checkSame ? : boolean, version ? : number): Promise < void >
        ;
        GetSegmentsCount(): number;

        async GetSegmentsCount_async(): Promise < number >
        ;
        GetSegments(): Curve3D[];

        async GetSegments_async(): Promise < Curve3D[] >
        ;
        FindCorner(index: number, ): CartPoint3D;

        async FindCorner_async(index: number, ): Promise < CartPoint3D >
        ;
        GetCornerAngle(index: number, angleEps ? : number): {
            origin: CartPoint3D,
            axis: Vector3D,
            tau: Vector3D,
            angle: number,
        };

        async GetCornerAngle_async(index: number, angleEps ? : number): Promise < {
                origin: CartPoint3D,
                axis: Vector3D,
                tau: Vector3D,
                angle: number,
            } >
        ;
        Init(points: CartPoint3D[]): boolean;

        async Init_async(points: CartPoint3D[]): Promise < boolean >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        DeleteSegment(index: number): void;

        async DeleteSegment_async(index: number): Promise < void >
        ;
        Id(): bigint;
    }

    declare class Plane extends Surface {

        constructor(c0: CartPoint3D, c1: CartPoint3D, c2: CartPoint3D);
        constructor(placement: Placement3D, distance: number);

        Id(): bigint;
    }

    declare class CartPoint {
        private _useNominal: undefined;
        constructor(xx: number, yy: number);

        x: number;
        y: number;
        Id(): bigint;
    }

    declare class CartPoint3D {
        private _useNominal: undefined;
        constructor(xx: number, yy: number, zz: number);

        Move(to: Vector3D): CartPoint3D;

        async Move_async(to: Vector3D): Promise < CartPoint3D >
        ;
        x: number;
        y: number;
        z: number;
        Id(): bigint;
    }

    declare class ElementarySurface extends Surface {


        Id(): bigint;
    }

    declare class TorusSurface extends ElementarySurface {


        GetMajorRadius(): number;

        async GetMajorRadius_async(): Promise < number >
        ;
        GetMinorRadius(): number;

        async GetMinorRadius_async(): Promise < number >
        ;
        Id(): bigint;
    }

    declare class FaceShell extends TopItem {

        constructor();

        GetBoundaryEdges(): CurveEdge[];

        async GetBoundaryEdges_async(): Promise < CurveEdge[] >
        ;
        GetFaces(): Face[];

        async GetFaces_async(): Promise < Face[] >
        ;
        FindFacesIndexByEdges(init: EdgeFunction[], ): {
            functions: Function[],
            slideways: Curve3D[],
            indexes: EdgeFacesIndexes[],
        };

        async FindFacesIndexByEdges_async(init: EdgeFunction[], ): Promise < {
                functions: Function[],
                slideways: Curve3D[],
                indexes: EdgeFacesIndexes[],
            } >
        ;
        FindEdgesByFacesIndex(indexes: EdgeFacesIndexes[], initFunctions: Function[], initSlideways: Curve3D[]): {
            functions: Function[],
            slideways: Curve3D[],
            initCurves: CurveEdge[],
        };

        async FindEdgesByFacesIndex_async(indexes: EdgeFacesIndexes[], initFunctions: Function[], initSlideways: Curve3D[]): Promise < {
                functions: Function[],
                slideways: Curve3D[],
                initCurves: CurveEdge[],
            } >
        ;
        Copy(sameShell: CopyMode, history ? : ShellHistory, iReg ? : RegDuplicate): FaceShell | null;

        async Copy_async(sameShell: CopyMode, history ? : ShellHistory, iReg ? : RegDuplicate): Promise < FaceShell >
        ;
        GetEdge(index: number): CurveEdge | null;

        async GetEdge_async(index: number): Promise < CurveEdge >
        ;
        SetOwnChangedThrough(n: ChangedType): void;

        async SetOwnChangedThrough_async(n: ChangedType): Promise < void >
        ;
        Id(): bigint;
    }

    declare class EdgeFacesIndexes {
        private _useNominal: undefined;
        constructor();

        edgeIndex: number;
        facePIndex: number;
        faceMIndex: number;
        itemName: SimpleName;
        Id(): bigint;
    }

    declare class ShellHistory {
        private _useNominal: undefined;
        constructor();

        InitOrigins(origin: Face[]): void;

        async InitOrigins_async(origin: Face[]): Promise < void >
        ;
        SetOrigins(shell: FaceShell): void;

        async SetOrigins_async(shell: FaceShell): Promise < void >
        ;
        SetOriginFaces(): Face[];

        async SetOriginFaces_async(): Promise < Face[] >
        ;
        SetCopyFaces(): Face[];

        async SetCopyFaces_async(): Promise < Face[] >
        ;
        Id(): bigint;
    }

    declare class ElementarySolid extends Creator {


        Id(): bigint;
    }

    declare class SphereSurface extends ElementarySurface {

        constructor(centre: CartPoint3D, r: number);

        Id(): bigint;
    }

    declare class Instance extends Item {


        GetItem(): Item | null;

        async GetItem_async(): Promise < Item >
        ;
        Id(): bigint;
    }

    declare class SpaceInstance extends Item {

        constructor(surf: Surface);
        constructor(curve: Curve3D);

        GetSpaceItem(): SpaceItem | null;

        async GetSpaceItem_async(): Promise < SpaceItem >
        ;
        GetBasisPoints(): ControlData3D;

        async GetBasisPoints_async(): Promise < ControlData3D >
        ;
        SetBasisPoints(cd: ControlData3D): void;

        async SetBasisPoints_async(cd: ControlData3D): Promise < void >
        ;
        Id(): bigint;
    }

    declare class PlaneInstance extends Item {

        constructor(item: PlaneItem, placement: Placement3D);

        GetPlacement(): Placement3D;

        async GetPlacement_async(): Promise < Placement3D >
        ;
        PlaneItemsCount(): number;

        async PlaneItemsCount_async(): Promise < number >
        ;
        GetPlaneItem(ind ? : number): PlaneItem | null;

        async GetPlaneItem_async(ind ? : number): Promise < PlaneItem >
        ;
        Id(): bigint;
    }

    declare class Region extends PlaneItem {


        DetachContours(): Contour[];

        async DetachContours_async(): Promise < Contour[] >
        ;
        GetContoursCount(): number;

        async GetContoursCount_async(): Promise < number >
        ;
        SetContour(k: number): Contour | null;

        async SetContour_async(k: number): Promise < Contour >
        ;
        GetContour(k: number): Contour | null;

        async GetContour_async(k: number): Promise < Contour >
        ;
        GetOutContour(): Contour | null;

        async GetOutContour_async(): Promise < Contour >
        ;
        SetCorrect(): boolean;

        async SetCorrect_async(): Promise < boolean >
        ;
        Id(): bigint;
    }

    declare class Direction {
        private _useNominal: undefined;
        constructor(a: number);

        Id(): bigint;
    }

    declare class Line extends Curve {

        constructor(p1: CartPoint, p2: CartPoint);

        Id(): bigint;
    }

    declare class LineSegment extends Curve {

        constructor(p1: CartPoint, p2: CartPoint);

        GetPoint1(): CartPoint;

        async GetPoint1_async(): Promise < CartPoint >
        ;
        GetPoint2(): CartPoint;

        async GetPoint2_async(): Promise < CartPoint >
        ;
        Id(): bigint;
    }

    declare class Line3D extends Curve3D {

        constructor(p1: CartPoint3D, p2: CartPoint3D);

        Id(): bigint;
    }

    declare class Vector {
        private _useNominal: undefined;
        constructor(xx: number, yy: number);

        x: number;
        y: number;
        Id(): bigint;
    }

    declare class Vector3D {
        private _useNominal: undefined;
        constructor(a: number, b: number, c: number);
        constructor(p1: CartPoint3D, p2: CartPoint3D);

        Colinear(other: Vector3D, eps ? : number): boolean;

        async Colinear_async(other: Vector3D, eps ? : number): Promise < boolean >
        ;
        Invert(): Vector3D;

        async Invert_async(): Promise < Vector3D >
        ;
        x: number;
        y: number;
        z: number;
        Id(): bigint;
    }

    declare class Axis3D {
        private _useNominal: undefined;
        constructor(axis: Axis3D);
        constructor(v: Vector3D);
        constructor(pnt0: CartPoint3D, dir: Vector3D);

        Rotate(axis: Axis3D, angle: number): void;

        async Rotate_async(axis: Axis3D, angle: number): Promise < void >
        ;
        Move(to: Vector3D): void;

        async Move_async(to: Vector3D): Promise < void >
        ;
        GetOrigin(): CartPoint3D;

        async GetOrigin_async(): Promise < CartPoint3D >
        ;
        GetAxisZ(): Vector3D;

        async GetAxisZ_async(): Promise < Vector3D >
        ;
        Id(): bigint;
    }

    declare class Placement {
        private _useNominal: undefined;
        constructor(o: CartPoint, x: Vector, y: Vector);

        Id(): bigint;
    }

    declare class Placement3D {
        private _useNominal: undefined;
        constructor();
        constructor(org: CartPoint3D, axisZ: Vector3D, axisX: Vector3D, l ? : boolean);
        constructor(org: CartPoint3D, axisZ: Vector3D, l ? : boolean);
        constructor(place: Placement3D);

        InitYZ(p: CartPoint3D, axisY: Vector3D, axisZ: Vector3D): Placement3D;

        async InitYZ_async(p: CartPoint3D, axisY: Vector3D, axisZ: Vector3D): Promise < Placement3D >
        ;
        Move(to: Vector3D): Placement3D;

        async Move_async(to: Vector3D): Promise < Placement3D >
        ;
        Rotate(axis: Axis3D, angle: number): Placement3D;

        async Rotate_async(axis: Axis3D, angle: number): Promise < Placement3D >
        ;
        Scale(sx: number, sy: number, sz: number): Placement3D;

        async Scale_async(sx: number, sy: number, sz: number): Promise < Placement3D >
        ;
        SetAxisX(a: Vector3D): void;

        async SetAxisX_async(a: Vector3D): Promise < void >
        ;
        SetAxisY(a: Vector3D): void;

        async SetAxisY_async(a: Vector3D): Promise < void >
        ;
        SetAxisZ(a: Vector3D): void;

        async SetAxisZ_async(a: Vector3D): Promise < void >
        ;
        GetOrigin(): CartPoint3D;

        async GetOrigin_async(): Promise < CartPoint3D >
        ;
        SetOrigin(o: CartPoint3D): void;

        async SetOrigin_async(o: CartPoint3D): Promise < void >
        ;
        GetAxisZ(): Vector3D;

        async GetAxisZ_async(): Promise < Vector3D >
        ;
        GetAxisY(): Vector3D;

        async GetAxisY_async(): Promise < Vector3D >
        ;
        GetAxisX(): Vector3D;

        async GetAxisX_async(): Promise < Vector3D >
        ;
        Normalize(): void;

        async Normalize_async(): Promise < void >
        ;
        Reset(): void;

        async Reset_async(): Promise < void >
        ;
        Invert(): void;

        async Invert_async(): Promise < void >
        ;
        GetXEpsilon(): number;

        async GetXEpsilon_async(): Promise < number >
        ;
        GetYEpsilon(): number;

        async GetYEpsilon_async(): Promise < number >
        ;
        PointProjection(p: CartPoint3D, ): {
            x: number,
            y: number,
        };

        async PointProjection_async(p: CartPoint3D, ): Promise < {
                x: number,
                y: number,
            } >
        ;
        PointRelative(pnt: CartPoint3D, eps ? : number): ItemLocation;

        async PointRelative_async(pnt: CartPoint3D, eps ? : number): Promise < ItemLocation >
        ;
        GetMatrixToPlace(p: Placement3D, eps ? : number): Matrix;

        async GetMatrixToPlace_async(p: Placement3D, eps ? : number): Promise < Matrix >
        ;
        GetVectorFrom(x1: number, y1: number, z1: number, type ? : LocalSystemType3D): Vector3D;

        async GetVectorFrom_async(x1: number, y1: number, z1: number, type ? : LocalSystemType3D): Promise < Vector3D >
        ;
        GetPointFrom(x1: number, y1: number, z1: number, type ? : LocalSystemType3D): CartPoint3D;

        async GetPointFrom_async(x1: number, y1: number, z1: number, type ? : LocalSystemType3D): Promise < CartPoint3D >
        ;
        GetPointInto(p: CartPoint3D, type ? : LocalSystemType3D): void;

        async GetPointInto_async(p: CartPoint3D, type ? : LocalSystemType3D): Promise < void >
        ;
        Id(): bigint;
    }

    declare class FormNote {
        private _useNominal: undefined;
        constructor(wire: boolean, grid: boolean, seam: boolean, exact: boolean, quad: boolean);

        Wire(): boolean;

        async Wire_async(): Promise < boolean >
        ;
        Grid(): boolean;

        async Grid_async(): Promise < boolean >
        ;
        Seam(): boolean;

        async Seam_async(): Promise < boolean >
        ;
        Quad(): boolean;

        async Quad_async(): Promise < boolean >
        ;
        Fair(): boolean;

        async Fair_async(): Promise < boolean >
        ;
        Id(): bigint;
    }

    declare class FloatAxis3D {
        private _useNominal: undefined;
        constructor(initAxis: Axis3D);
        constructor(initOrigin: CartPoint3D, initAxisZ: Vector3D);

        Id(): bigint;
    }

    declare class FloatPoint3D {
        private _useNominal: undefined;

        x: float;
        y: float;
        z: float;
        Id(): bigint;
    }

    declare class Mesh extends Item {

        constructor(doExact: boolean);

        GetBuffers(): MeshBuffer[];

        async GetBuffers_async(): Promise < MeshBuffer[] >
        ;
        GetApexes(): Float32Array[];

        async GetApexes_async(): Promise < Float32Array[] >
        ;
        GetEdges(outlinesOnly ? : boolean, ): EdgeBuffer[];

        async GetEdges_async(outlinesOnly ? : boolean, ): Promise < EdgeBuffer[] >
        ;
        GetMeshType(): SpaceType;

        async GetMeshType_async(): Promise < SpaceType >
        ;
        ConvertAllToTriangles(): void;

        async ConvertAllToTriangles_async(): Promise < void >
        ;
        IsClosed(): boolean;

        async IsClosed_async(): Promise < boolean >
        ;
        AddGrid(): Grid | null;

        async AddGrid_async(): Promise < Grid >
        ;
        AddExistingGrid(gr: Grid): void;

        async AddExistingGrid_async(gr: Grid): Promise < void >
        ;
        GetGrids(): Grid[];

        async GetGrids_async(): Promise < Grid[] >
        ;
        CreateGridSearchTrees(forcedNew ? : boolean): void;

        async CreateGridSearchTrees_async(forcedNew ? : boolean): Promise < void >
        ;
        LineIntersection(line: FloatAxis3D, ): {
            _result: boolean,
            crossPnt: FloatPoint3D,
            tRes: float,
        };

        async LineIntersection_async(line: FloatAxis3D, ): Promise < {
                _result: boolean,
                crossPnt: FloatPoint3D,
                tRes: float,
            } >
        ;
        NearestMesh(sType: SpaceType, tType: TopologyType, pType: PlaneType, axis: Axis3D, maxDistance: number, gridPriority: boolean, ): {
            success: boolean,
            t: number,
            dMin: number,
            find: Item,
            findName: SimpleName,
            element: RefItem,
            elementName: SimpleName,
            path: Path,
            from: Matrix3D,
        };

        async NearestMesh_async(sType: SpaceType, tType: TopologyType, pType: PlaneType, axis: Axis3D, maxDistance: number, gridPriority: boolean, ): Promise < {
                success: boolean,
                t: number,
                dMin: number,
                find: Item,
                findName: SimpleName,
                element: RefItem,
                elementName: SimpleName,
                path: Path,
                from: Matrix3D,
            } >
        ;
        Id(): bigint;
    }

    declare class RegDuplicate {
        private _useNominal: undefined;

        IsReg(srcItem: RefItem, ): {
            _result: boolean,
            cpyItem: RefItem,
        };

        async IsReg_async(srcItem: RefItem, ): Promise < {
                _result: boolean,
                cpyItem: RefItem,
            } >
        ;
        SetReg(srcItem: RefItem, cpyItem: RefItem): void;

        async SetReg_async(srcItem: RefItem, cpyItem: RefItem): Promise < void >
        ;
        Id(): bigint;
    }

    declare class AutoRegDuplicate {
        private _useNominal: undefined;

        Id(): bigint;
    }

    declare class NameMaker extends RefItem {


        IsChild(t: TopologyItem): boolean;

        async IsChild_async(t: TopologyItem): Promise < boolean >
        ;
        GetMainName(): SimpleName;

        async GetMainName_async(): Promise < SimpleName >
        ;
        Id(): bigint;
    }

    declare class SNameMaker extends NameMaker {

        constructor(_mainName: SimpleName, _sideAdd: ESides, _buttAdd: SimpleName);

        Add(ent: SimpleName): void;

        async Add_async(ent: SimpleName): Promise < void >
        ;
        Id(): bigint;
    }

    declare class StepData {
        private _useNominal: undefined;
        constructor(t: StepType, sag: number);
        constructor();

        SetSag(s: number): void;

        async SetSag_async(s: number): Promise < void >
        ;
        SetAngle(a: number): void;

        async SetAngle_async(a: number): Promise < void >
        ;
        SetLength(l: number): void;

        async SetLength_async(l: number): Promise < void >
        ;
        SetMaxCount(c: number): void;

        async SetMaxCount_async(c: number): Promise < void >
        ;
        GetSag(): number;

        async GetSag_async(): Promise < number >
        ;
        GetAngle(): number;

        async GetAngle_async(): Promise < number >
        ;
        GetLength(): number;

        async GetLength_async(): Promise < number >
        ;
        SetStepType(t: StepType, add ? : boolean): void;

        async SetStepType_async(t: StepType, add ? : boolean): Promise < void >
        ;
        Init(t: StepType, s: number, a: number, l: number, c ? : number): void;

        async Init_async(t: StepType, s: number, a: number, l: number, c ? : number): Promise < void >
        ;
        Id(): bigint;
    }

    declare class Name {
        private _useNominal: undefined;

        Hash(): SimpleName;

        async Hash_async(): Promise < SimpleName >
        ;
        GetFirstName(): SimpleName;

        async GetFirstName_async(): Promise < SimpleName >
        ;
        GetMainName(): SimpleName;

        async GetMainName_async(): Promise < SimpleName >
        ;
        Id(): bigint;
    }

    declare class Matrix {
        private _useNominal: undefined;
        constructor();
        constructor(place: Placement);

        Scale(s: number): void;

        async Scale_async(s: number): Promise < void >
        ;
        ScaleX(s: number): void;

        async ScaleX_async(s: number): Promise < void >
        ;
        ScaleY(s: number): void;

        async ScaleY_async(s: number): Promise < void >
        ;
        Id(): bigint;
    }

    declare class Homogeneous3D {
        private _useNominal: undefined;
        constructor(initX: number, initY: number, initZ: number, initW: number);

        Id(): bigint;
    }

    declare class Matrix3D {
        private _useNominal: undefined;
        constructor();

        Scale(sx: number, sy: number, sz: number): void;

        async Scale_async(sx: number, sy: number, sz: number): Promise < void >
        ;
        Rotate(axis: Axis3D, angle: number): Matrix3D;

        async Rotate_async(axis: Axis3D, angle: number): Promise < Matrix3D >
        ;
        Symmetry(origin: CartPoint3D, normal: Vector3D): void;

        async Symmetry_async(origin: CartPoint3D, normal: Vector3D): Promise < void >
        ;
        GetRow(i: number): Vector3D;

        async GetRow_async(i: number): Promise < Vector3D >
        ;
        GetColumn(i: number): Vector3D;

        async GetColumn_async(i: number): Promise < Vector3D >
        ;
        SetRow(i: number, h: Homogeneous3D): void;

        async SetRow_async(i: number, h: Homogeneous3D): Promise < void >
        ;
        SetColumn(i: number, h: Homogeneous3D): void;

        async SetColumn_async(i: number, h: Homogeneous3D): Promise < void >
        ;
        GetAxisX(): Vector3D;

        async GetAxisX_async(): Promise < Vector3D >
        ;
        GetAxisY(): Vector3D;

        async GetAxisY_async(): Promise < Vector3D >
        ;
        GetAxisZ(): Vector3D;

        async GetAxisZ_async(): Promise < Vector3D >
        ;
        GetOrigin(): Vector3D;

        async GetOrigin_async(): Promise < Vector3D >
        ;
        El(i: number, j: number): number;

        async El_async(i: number, j: number): Promise < number >
        ;
        GetOffset(): CartPoint3D;

        async GetOffset_async(): Promise < CartPoint3D >
        ;
        Div(from: Matrix3D): Matrix3D;

        async Div_async(from: Matrix3D): Promise < Matrix3D >
        ;
        Adj(): void;

        async Adj_async(): Promise < void >
        ;
        SetOffset(p: CartPoint3D): void;

        async SetOffset_async(p: CartPoint3D): Promise < void >
        ;
        Id(): bigint;
    }

    declare class TopologyItem extends TopItem implements AttributeContainer {


        IsA(): TopologyType;

        async IsA_async(): Promise < TopologyType >
        ;
        GetName(): Name;

        async GetName_async(): Promise < Name >
        ;
        GetMainName(): SimpleName;

        async GetMainName_async(): Promise < SimpleName >
        ;
        GetFirstName(): SimpleName;

        async GetFirstName_async(): Promise < SimpleName >
        ;
        GetNameHash(): SimpleName;

        async GetNameHash_async(): Promise < SimpleName >
        ;
        AddYourGabaritTo(cube: Cube): void;

        async AddYourGabaritTo_async(cube: Cube): Promise < void >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        CalculateMesh(stepData: StepData, note: FormNote, ): Mesh;

        async CalculateMesh_async(stepData: StepData, note: FormNote, ): Promise < Mesh >
        ;
        GetOwnChanged(): boolean;

        async GetOwnChanged_async(): Promise < boolean >
        ;
        SetStyle(s: int): void;

        async SetStyle_async(s: int): Promise < void >
        ;
        GetStyle(): int;

        async GetStyle_async(): Promise < int >
        ;
        SetColor(c: uint32): void;

        async SetColor_async(c: uint32): Promise < void >
        ;
        GetColor(): uint32;

        async GetColor_async(): Promise < uint32 >
        ;
        AttributesConvert(other: Grid): void;

        async AttributesConvert_async(other: Grid): Promise < void >
        ;
        Id(): bigint;
    }

    declare class Edge extends TopologyItem {


        Point(t: number, ): CartPoint3D;

        async Point_async(t: number, ): Promise < CartPoint3D >
        ;
        GetBegPoint(): CartPoint3D;

        async GetBegPoint_async(): Promise < CartPoint3D >
        ;
        GetEndPoint(): CartPoint3D;

        async GetEndPoint_async(): Promise < CartPoint3D >
        ;
        PointProjection(p: CartPoint3D): number;

        async PointProjection_async(p: CartPoint3D): Promise < number >
        ;
        Reverse(): void;

        async Reverse_async(): Promise < void >
        ;
        Tangent(t: number, ): Vector3D;

        async Tangent_async(t: number, ): Promise < Vector3D >
        ;
        GetBegTangent(): Vector3D;

        async GetBegTangent_async(): Promise < Vector3D >
        ;
        GetEndTangent(): Vector3D;

        async GetEndTangent_async(): Promise < Vector3D >
        ;
        Id(): bigint;
    }

    declare class SurfaceIntersectionCurve extends Curve3D {


        GetSurfaceOne(): Surface | null;

        async GetSurfaceOne_async(): Promise < Surface >
        ;
        GetSurfaceTwo(): Surface | null;

        async GetSurfaceTwo_async(): Promise < Surface >
        ;
        GetPCurveOne(): Curve | null;

        async GetPCurveOne_async(): Promise < Curve >
        ;
        GetPCurveTwo(): Curve | null;

        async GetPCurveTwo_async(): Promise < Curve >
        ;
        GetSCurveOne(): SurfaceCurve | null;

        async GetSCurveOne_async(): Promise < SurfaceCurve >
        ;
        GetSCurveTwo(): SurfaceCurve | null;

        async GetSCurveTwo_async(): Promise < SurfaceCurve >
        ;
        GetSpaceCurve(): Curve3D | null;

        async GetSpaceCurve_async(): Promise < Curve3D >
        ;
        GetCurveOneSurface(): Surface;

        async GetCurveOneSurface_async(): Promise < Surface >
        ;
        GetCurveTwoSurface(): Surface;

        async GetCurveTwoSurface_async(): Promise < Surface >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        Id(): bigint;
    }

    declare class CurveEdge extends Edge {


        EdgeNormal(t: number, ): Vector3D;

        async EdgeNormal_async(t: number, ): Promise < Vector3D >
        ;
        GetIntersectionCurve(): SurfaceIntersectionCurve;

        async GetIntersectionCurve_async(): Promise < SurfaceIntersectionCurve >
        ;
        GetFacePlus(): Face | null;

        async GetFacePlus_async(): Promise < Face >
        ;
        GetFaceMinus(): Face | null;

        async GetFaceMinus_async(): Promise < Face >
        ;
        IsSplit(strict ? : boolean): boolean;

        async IsSplit_async(strict ? : boolean): Promise < boolean >
        ;
        GetSpaceCurve(): Curve3D | null;

        async GetSpaceCurve_async(): Promise < Curve3D >
        ;
        MakeCurve(): Curve3D | null;

        async MakeCurve_async(): Promise < Curve3D >
        ;
        IsSmooth(): boolean;

        async IsSmooth_async(): Promise < boolean >
        ;
        IsSeam(): boolean;

        async IsSeam_async(): Promise < boolean >
        ;
        IsPole(): boolean;

        async IsPole_async(): Promise < boolean >
        ;
        FaceNormal(t: number, plus: boolean): Vector3D;

        async FaceNormal_async(t: number, plus: boolean): Promise < Vector3D >
        ;
        VertexNormal(begin: boolean, ): Vector3D;

        async VertexNormal_async(begin: boolean, ): Promise < Vector3D >
        ;
        GetProlongEdges(): {
            _result: boolean,
            edges: CurveEdge[],
        };

        async GetProlongEdges_async(): Promise < {
                _result: boolean,
                edges: CurveEdge[],
            } >
        ;
        FindOrientedEdge(orient: boolean, ): {
            success: boolean,
            face: Face,
            findLoop: Loop,
            index: number,
        };

        async FindOrientedEdge_async(orient: boolean, ): Promise < {
                success: boolean,
                face: Face,
                findLoop: Loop,
                index: number,
            } >
        ;
        FindOrientedEdgePlus(): {
            success: boolean,
            loopIndex: number,
            findLoop: Loop,
            index: number,
        };

        async FindOrientedEdgePlus_async(): Promise < {
                success: boolean,
                loopIndex: number,
                findLoop: Loop,
                index: number,
            } >
        ;
        FindOrientedEdgeMinus(): {
            success: boolean,
            loopIndex: number,
            findLoop: Loop,
            index: number,
        };

        async FindOrientedEdgeMinus_async(): Promise < {
                success: boolean,
                loopIndex: number,
                findLoop: Loop,
                index: number,
            } >
        ;
        Id(): bigint;
    }

    declare class ContourOnSurface extends Curve3D {

        constructor(surface: Surface, contour: Contour, same ? : boolean);
        constructor(surf: Surface, sense: int);

        GetContour(): Contour;

        async GetContour_async(): Promise < Contour >
        ;
        GetSurface(): Surface;

        async GetSurface_async(): Promise < Surface >
        ;
        GetSegment(index: number): Curve | null;

        async GetSegment_async(index: number): Promise < Curve >
        ;
        GetSegmentsCount(): number;

        async GetSegmentsCount_async(): Promise < number >
        ;
        Id(): bigint;
    }

    declare class ContourOnPlane extends ContourOnSurface {

        constructor(plane: Plane, contour: Contour, same: boolean);
        constructor(plane: Plane, sense: int);
        constructor(plane: Plane);

        GetPlacement(): Placement3D;

        async GetPlacement_async(): Promise < Placement3D >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        Id(): bigint;
    }

    declare class OrientedEdge {
        private _useNominal: undefined;

        GetCurveEdge(): CurveEdge;

        async GetCurveEdge_async(): Promise < CurveEdge >
        ;
        Id(): bigint;
    }

    declare class Loop extends TopItem {


        MakeContourOnSurface(surf: Surface, faceSense: boolean, doExact: boolean): ContourOnSurface;

        async MakeContourOnSurface_async(surf: Surface, faceSense: boolean, doExact: boolean): Promise < ContourOnSurface >
        ;
        GetEdgesCount(): ptrdiff_t;

        async GetEdgesCount_async(): Promise < ptrdiff_t >
        ;
        GetOrientedEdge(index: number): OrientedEdge | null;

        async GetOrientedEdge_async(index: number): Promise < OrientedEdge >
        ;
        GetEdges(findSame ? : boolean): CurveEdge[];

        async GetEdges_async(findSame ? : boolean): Promise < CurveEdge[] >
        ;
        Id(): bigint;
    }

    declare class Face extends TopologyItem {


        GetAnyPointOn(): {
            _result: boolean,
            point: CartPoint3D,
            normal: Vector3D,
        };

        async GetAnyPointOn_async(): Promise < {
                _result: boolean,
                point: CartPoint3D,
                normal: Vector3D,
            } >
        ;
        Normal(u: number, v: number, ): Vector3D;

        async Normal_async(u: number, v: number, ): Promise < Vector3D >
        ;
        Point(faceU: number, faceV: number, ): CartPoint3D;

        async Point_async(faceU: number, faceV: number, ): Promise < CartPoint3D >
        ;
        GetPlacement(): Placement3D;

        async GetPlacement_async(): Promise < Placement3D >
        ;
        GetPlanePlacement(): Placement3D;

        async GetPlanePlacement_async(): Promise < Placement3D >
        ;
        GetControlPlacement(): Placement3D;

        async GetControlPlacement_async(): Promise < Placement3D >
        ;
        GetSurfacePlacement(): Placement3D;

        async GetSurfacePlacement_async(): Promise < Placement3D >
        ;
        OrientPlacement(result: Placement3D): void;

        async OrientPlacement_async(result: Placement3D): Promise < void >
        ;
        NearPointProjection(point: CartPoint3D, ): {
            location: ItemLocation,
            u: number,
            v: number,
            normal: Vector3D,
            edgeLoc: [number, number],
            corner: ptrdiff_t,
        };

        async NearPointProjection_async(point: CartPoint3D, ): Promise < {
                location: ItemLocation,
                u: number,
                v: number,
                normal: Vector3D,
                edgeLoc: [number, number],
                corner: ptrdiff_t,
            } >
        ;
        GetFaceParam(surfaceU: number, surfaceV: number, ): {
            faceU: number,
            faceV: number,
        };

        async GetFaceParam_async(surfaceU: number, surfaceV: number, ): Promise < {
                faceU: number,
                faceV: number,
            } >
        ;
        GetSurfaceParam(faceU: number, faceV: number, ): {
            surfaceU: number,
            surfaceV: number,
        };

        async GetSurfaceParam_async(faceU: number, faceV: number, ): Promise < {
                surfaceU: number,
                surfaceV: number,
            } >
        ;
        GetOuterEdges(mapThreshold ? : number): CurveEdge[];

        async GetOuterEdges_async(mapThreshold ? : number): Promise < CurveEdge[] >
        ;
        GetEdges(mapThreshold ? : number): CurveEdge[];

        async GetEdges_async(mapThreshold ? : number): Promise < CurveEdge[] >
        ;
        IsSame(other: TopologyItem, accuracy: number): boolean;

        async IsSame_async(other: TopologyItem, accuracy: number): Promise < boolean >
        ;
        GetNeighborFaces(): Face[];

        async GetNeighborFaces_async(): Promise < Face[] >
        ;
        GetBoundaryEdges(): CurveEdge[];

        async GetBoundaryEdges_async(): Promise < CurveEdge[] >
        ;
        GetSurfaceCurvesData(): {
            surface: Surface,
            contours: Contour[],
        };

        async GetSurfaceCurvesData_async(): Promise < {
                surface: Surface,
                contours: Contour[],
            } >
        ;
        HasNeighborFace(): boolean;

        async HasNeighborFace_async(): Promise < boolean >
        ;
        GetLoopsCount(): number;

        async GetLoopsCount_async(): Promise < number >
        ;
        GetSurface(): Surface;

        async GetSurface_async(): Promise < Surface >
        ;
        GetLoop(index: number): Loop | null;

        async GetLoop_async(index: number): Promise < Loop >
        ;
        IsSameSense(): boolean;

        async IsSameSense_async(): Promise < boolean >
        ;
        DataDuplicate(dup ? : RegDuplicate): Face | null;

        async DataDuplicate_async(dup ? : RegDuplicate): Promise < Face >
        ;
        IsPlanar(): boolean;

        async IsPlanar_async(): Promise < boolean >
        ;
        GetCylinderAxis(): Axis3D;

        async GetCylinderAxis_async(): Promise < Axis3D >
        ;
        UpdateSurfaceBounds(curveBoundedOnly ? : boolean): boolean;

        async UpdateSurfaceBounds_async(curveBoundedOnly ? : boolean): Promise < boolean >
        ;
        IsOwnChangedItem(checkVertices ? : boolean): boolean;

        async IsOwnChangedItem_async(checkVertices ? : boolean): Promise < boolean >
        ;
        Id(): bigint;
    }

    declare class Vertex extends TopologyItem {


        Id(): bigint;
    }

    declare class ModifyValues {
        private _useNominal: undefined;
        constructor();

        way: ModifyingType;
        direction: Vector3D;
        Id(): bigint;
    }

    declare class TransformValues {
        private _useNominal: undefined;
        constructor();
        constructor(m: Matrix3D);
        constructor(m: Matrix3D, f: CartPoint3D, fix ? : boolean, iso ? : boolean);
        constructor(sX: number, sY: number, sZ: number, fP: CartPoint3D);

        Move(to: Vector3D): void;

        async Move_async(to: Vector3D): Promise < void >
        ;
        Rotate(axis: Axis3D, ang: number): void;

        async Rotate_async(axis: Axis3D, ang: number): Promise < void >
        ;
        GetMatrix(): Matrix3D;

        async GetMatrix_async(): Promise < Matrix3D >
        ;
        SetFixed(b: boolean): void;

        async SetFixed_async(b: boolean): Promise < void >
        ;
        SetFixedPoint(): CartPoint3D;

        async SetFixedPoint_async(): Promise < CartPoint3D >
        ;
        Id(): bigint;
    }

    declare class SmoothValues {
        private _useNominal: undefined;
        constructor();
        constructor(d1: number, d2: number, f: SmoothForm, c: number, pro: boolean, cor: CornerForm, autoS: boolean, keep: boolean, str: boolean, equ: boolean);

        distance1: number;
        distance2: number;
        conic: number;
        begLength: number;
        endLength: number;
        form: SmoothForm;
        smoothCorner: CornerForm;
        prolong: boolean;
        keepCant: ThreeStates;
        strict: boolean;
        equable: boolean;
        Id(): bigint;
    }

    declare class ShellCuttingParams {
        private _useNominal: undefined;
        constructor(place: Placement3D, contour: Contour, sameContour: boolean, dir: Vector3D, mergingFlags: MergingFlags, cutAsClosed: boolean, snMaker: SNameMaker);
        constructor(place: Placement3D, contour: Contour, sameContour: boolean, dir: Vector3D, part: int, mergingFlags: MergingFlags, cutAsClosed: boolean, snMaker: SNameMaker);
        constructor(surface: Surface, sameSurface: boolean, mergingFlags: MergingFlags, cutAsClosed: boolean, snMaker: SNameMaker);
        constructor(surface: Surface, sameSurface: boolean, part: int, mergingFlags: MergingFlags, cutAsClosed: boolean, snMaker: SNameMaker);

        SetSurfaceProlongType(pt: SurfaceProlongType): void;

        async SetSurfaceProlongType_async(pt: SurfaceProlongType): Promise < void >
        ;
        AddSurfaceProlongType(pt: SurfaceProlongType): void;

        async AddSurfaceProlongType_async(pt: SurfaceProlongType): Promise < void >
        ;
        Id(): bigint;
    }

    declare class EdgeFunction {
        private _useNominal: undefined;
        constructor(e: CurveEdge, f: Function);

        Edge(): CurveEdge | null;

        async Edge_async(): Promise < CurveEdge >
        ;
        Function(): Function | null;

        async Function_async(): Promise < Function >
        ;
        Id(): bigint;
    }

    declare class FunctionFactory {
        private _useNominal: undefined;
        constructor();

        CreateAnalyticalFunction(data: string, argument: string, tmin: number, tmax: number): Function | null;

        async CreateAnalyticalFunction_async(data: string, argument: string, tmin: number, tmax: number): Promise < Function >
        ;
        Id(): bigint;
    }

    declare class CharacterCurve extends Curve {


        Id(): bigint;
    }

    declare class CharacterCurve3D extends Curve3D {

        constructor(x: Function, y: Function, z: Function, cs: LocalSystemType3D, place: Placement3D, tmin: number, tmax: number);

        Id(): bigint;
    }

    declare class Arc3D extends Curve3D {

        constructor(p0: CartPoint3D, p1: CartPoint3D, p2: CartPoint3D, n: int, closed: boolean);
        constructor(pc: CartPoint3D, p1: CartPoint3D, p2: CartPoint3D, initSense ? : int);
        constructor(place: Placement3D, aa: number, bb: number, angle: number);
        constructor(pc: CartPoint3D, p1: CartPoint3D, p2: CartPoint3D, aZ: Vector3D, initSense: int);
        constructor(ellipse: Arc, place: Placement3D);

        SetLimitPoint(number: ptrdiff_t, pnt: CartPoint3D): void;

        async SetLimitPoint_async(number: ptrdiff_t, pnt: CartPoint3D): Promise < void >
        ;
        SetRadius(r: number): void;

        async SetRadius_async(r: number): Promise < void >
        ;
        SetRadiusA(r: number): void;

        async SetRadiusA_async(r: number): Promise < void >
        ;
        SetRadiusB(r: number): void;

        async SetRadiusB_async(r: number): Promise < void >
        ;
        GetRadius(): number;

        async GetRadius_async(): Promise < number >
        ;
        GetRadiusA(): number;

        async GetRadiusA_async(): Promise < number >
        ;
        GetRadiusB(): number;

        async GetRadiusB_async(): Promise < number >
        ;
        GetAngle(): number;

        async GetAngle_async(): Promise < number >
        ;
        SetAngle(ang: number): void;

        async SetAngle_async(ang: number): Promise < void >
        ;
        MakeTrimmed(t1: number, t2: number): boolean;

        async MakeTrimmed_async(t1: number, t2: number): Promise < boolean >
        ;
        GetTrim1(): number;

        async GetTrim1_async(): Promise < number >
        ;
        GetTrim2(): number;

        async GetTrim2_async(): Promise < number >
        ;
        Id(): bigint;
    }

    declare class Arc extends Curve {

        constructor(rad: number);

        Id(): bigint;
    }

    declare class PolyCurve3D extends Curve3D {


        GetPoints(): CartPoint3D[];

        async GetPoints_async(): Promise < CartPoint3D[] >
        ;
        ChangePoint(index: ptrdiff_t, pnt: CartPoint3D): void;

        async ChangePoint_async(index: ptrdiff_t, pnt: CartPoint3D): Promise < void >
        ;
        RemovePoint(index: ptrdiff_t): void;

        async RemovePoint_async(index: ptrdiff_t): Promise < void >
        ;
        Rebuild(): void;

        async Rebuild_async(): Promise < void >
        ;
        GetCount(): number;

        async GetCount_async(): Promise < number >
        ;
        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        Id(): bigint;
    }

    declare class Polyline3D extends PolyCurve3D {

        constructor(initList: CartPoint3D[], closed: boolean);
        constructor(polyline: Polyline, placement: Placement3D);

        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        Id(): bigint;
    }

    declare class Bezier3D extends PolyCurve3D {


        Id(): bigint;
    }

    declare class Bezier extends PolyCurve {


        Id(): bigint;
    }

    declare class CubicSpline3D extends PolyCurve3D {


        static Create(initFlat: CubicSpline, plane: Placement3D): CubicSpline3D | null;

        static async Create_async(initFlat: CubicSpline, plane: Placement3D): Promise < CubicSpline3D >
        ;
        Id(): bigint;
    }

    declare class Hermit3D extends PolyCurve3D {


        Id(): bigint;
    }

    declare class Nurbs3D extends PolyCurve3D {


        static Create(nurbs: Nurbs, place: Placement3D): Nurbs3D | null;

        static async Create_async(nurbs: Nurbs, place: Placement3D): Promise < Nurbs3D >
        ;
        Id(): bigint;
    }

    declare class Nurbs extends PolyCurve {


        Id(): bigint;
    }

    declare class LineSegment3D extends Curve3D {

        constructor(p1: CartPoint3D, p2: CartPoint3D);

        Cast < T extends PlaneItem | SpaceItem | MbCreator | TopologyItem > (t: number): T;
        Id(): bigint;
    }

    declare class PointFrame extends Item {

        constructor();

        AddVertex(point: CartPoint3D): void;

        async AddVertex_async(point: CartPoint3D): Promise < void >
        ;
        Id(): bigint;
    }

    declare class EdgeSequence {
        private _useNominal: undefined;

        closed: boolean;
        Id(): bigint;
    }

    declare class MergingFlags {
        private _useNominal: undefined;
        constructor();
        constructor(mergeFaces: boolean, mergeEdges: boolean);

        SetMergingFaces(s: boolean): void;

        async SetMergingFaces_async(s: boolean): Promise < void >
        ;
        SetMergingEdges(s: boolean): void;

        async SetMergingEdges_async(s: boolean): Promise < void >
        ;
        Id(): bigint;
    }

    declare class SweptValues {
        private _useNominal: undefined;
        constructor();

        CheckSelfInt(): boolean;

        async CheckSelfInt_async(): Promise < boolean >
        ;
        SetCheckSelfInt(c: boolean): void;

        async SetCheckSelfInt_async(c: boolean): Promise < void >
        ;
        thickness1: number;
        thickness2: number;
        shellClosed: boolean;
        Id(): bigint;
    }

    declare class LoftedValues extends SweptValues {

        constructor();

        closed: boolean;
        derFactor1: number;
        derFactor2: number;
        thickness1: number;
        thickness2: number;
        shellClosed: boolean;
        Id(): bigint;
    }

    declare class EvolutionValues extends SweptValues {

        constructor();

        SetParallel(): void;

        async SetParallel_async(): Promise < void >
        ;
        SetKeepingAngle(): void;

        async SetKeepingAngle_async(): Promise < void >
        ;
        SetOrthogonal(): void;

        async SetOrthogonal_async(): Promise < void >
        ;
        range: number;
        thickness1: number;
        thickness2: number;
        shellClosed: boolean;
        Id(): bigint;
    }

    declare class SweptSide {
        private _useNominal: undefined;

        way: MbSweptWay;
        rake: number;
        distance: number;
        scalarValue: number;
    }

    declare class SweptValuesAndSides extends SweptValues {


        side1: SweptSide;
        side2: SweptSide;
        thickness1: number;
        thickness2: number;
        shellClosed: boolean;
    }

    declare class RevolutionValues extends SweptValuesAndSides {

        constructor();

        shape: int;
        side1: SweptSide;
        side2: SweptSide;
        thickness1: number;
        thickness2: number;
        shellClosed: boolean;
        Id(): bigint;
    }

    declare class ExtrusionValues extends SweptValuesAndSides {

        constructor(scalarValue1: number, scalarValue2: number);

        side1: SweptSide;
        side2: SweptSide;
        thickness1: number;
        thickness2: number;
        shellClosed: boolean;
    }

    declare class SweptData {
        private _useNominal: undefined;
        constructor();
        constructor(place: Placement3D, contour: Contour);
        constructor(surface: Surface, contours: Contour[]);
        constructor(curve3d: Curve3D);
        constructor(contours3d: Contour3D[]);

        Id(): bigint;
    }

    declare class RegionBooleanParams {
        private _useNominal: undefined;
        constructor(type: RegionOperationType, selfTouch ? : boolean, mergeCrvs ? : boolean);

        Id(): bigint;
    }

    declare class SmoothSolid extends Creator {


        GetParameters(): SmoothValues;

        async GetParameters_async(): Promise < SmoothValues >
        ;
        SetParameters(params: SmoothValues): void;

        async SetParameters_async(params: SmoothValues): Promise < void >
        ;
        Id(): bigint;
    }

    declare class SimpleCreator extends Creator {


        Id(): bigint;
    }

    declare class CurveSweptSolid extends Creator {


        Id(): bigint;
    }

    declare class CurveExtrusionSolid extends CurveSweptSolid {


        Id(): bigint;
    }

    declare class CurveRevolutionSolid extends CurveSweptSolid {


        Id(): bigint;
    }

    declare class CurveEvolutionSolid extends CurveSweptSolid {


        Id(): bigint;
    }

    declare class CurveLoftedSolid extends CurveSweptSolid {


        Id(): bigint;
    }

    declare class BooleanSolid extends Creator {


        Id(): bigint;
    }

    declare class CuttingSolid extends Creator {


        Id(): bigint;
    }

    declare class SymmetrySolid extends Creator {


        Id(): bigint;
    }

    declare class HoleSolid extends CurveSweptSolid {


        Id(): bigint;
    }

    declare class ChamferSolid extends SmoothSolid {


        Id(): bigint;
    }

    declare class FilletSolid extends SmoothSolid {


        Id(): bigint;
    }

    declare class ShellSolid extends Creator {


        Id(): bigint;
    }

    declare class DraftSolid extends Creator {


        Id(): bigint;
    }

    declare class RibSolid extends Creator {


        Id(): bigint;
    }

    declare class SplitShell extends Creator {


        Id(): bigint;
    }

    declare class NurbsBlockSolid extends Creator {


        Id(): bigint;
    }

    declare class FaceModifiedSolid extends Creator {


        Id(): bigint;
    }

    declare class ModifiedNurbsItem extends Creator {


        Id(): bigint;
    }

    declare class TransformedSolid extends Creator {


        Id(): bigint;
    }

    declare class ThinShellCreator extends Creator {


        Id(): bigint;
    }

    declare class UnionSolid extends Creator {


        Id(): bigint;
    }

    declare class DetachSolid extends Creator {


        Id(): bigint;
    }

    declare class DuplicationSolid extends Creator {


        Id(): bigint;
    }

    declare class ReverseCreator extends Creator {


        Id(): bigint;
    }

    declare class TransformationMaker extends Creator {


        Id(): bigint;
    }

    declare class ExtensionShell extends Creator {


        Id(): bigint;
    }

    declare class Graph {
        private _useNominal: undefined;

        GetLoopsCount(): number;

        async GetLoopsCount_async(): Promise < number >
        ;
        GetUsedCurves(curveList: Curve[], ): Curve[];

        async GetUsedCurves_async(curveList: Curve[], ): Promise < Curve[] >
        ;
        Id(): bigint;
    }

    declare class CrossPoint {
        private _useNominal: undefined;
        constructor(pnt: CartPoint, pOn1: PointOnCurve, pOn2: PointOnCurve);

        p: CartPoint;
        on1: PointOnCurve;
        on2: PointOnCurve;
        form: IntersectionType;
    }

    declare class PointOnCurve {
        private _useNominal: undefined;
        constructor(t: number, curve: Curve);

        t: number;
        curve: Curve;
    }

    declare class WireFrame {
        private _useNominal: undefined;

        GetCurves(): Curve3D[];

        async GetCurves_async(): Promise < Curve3D[] >
        ;
        Id(): bigint;
    }

    declare class Primitive extends RefItem implements AttributeContainer {


        SetItem(g: RefItem): void;

        async SetItem_async(g: RefItem): Promise < void >
        ;
        SetPrimitiveName(n: SimpleName): void;

        async SetPrimitiveName_async(n: SimpleName): Promise < void >
        ;
        SetPrimitiveType(t: RefType): void;

        async SetPrimitiveType_async(t: RefType): Promise < void >
        ;
        SetStyle(s: int): void;

        async SetStyle_async(s: int): Promise < void >
        ;
        GetStyle(): int;

        async GetStyle_async(): Promise < int >
        ;
        SetColor(c: uint32): void;

        async SetColor_async(c: uint32): Promise < void >
        ;
        GetColor(): uint32;

        async GetColor_async(): Promise < uint32 >
        ;
        AttributesConvert(other: Grid): void;

        async AttributesConvert_async(other: Grid): Promise < void >
        ;
        Id(): bigint;
    }

    declare class Grid extends Primitive {


        SetStepData(stData: StepData): void;

        async SetStepData_async(stData: StepData): Promise < void >
        ;
        IsSearchTreeReady(): boolean;

        async IsSearchTreeReady_async(): Promise < boolean >
        ;
        CreateSearchTree(): boolean;

        async CreateSearchTree_async(): Promise < boolean >
        ;
        DeleteSearchTree(): void;

        async DeleteSearchTree_async(): Promise < void >
        ;
        GetCube(): Cube;

        async GetCube_async(): Promise < Cube >
        ;
        CreateGridTopology(keepExisting: boolean): void;

        async CreateGridTopology_async(keepExisting: boolean): Promise < void >
        ;
        IsGridTopologyReady(): boolean;

        async IsGridTopologyReady_async(): Promise < boolean >
        ;
        GetBuffers(): MeshBuffer;

        async GetBuffers_async(): Promise < MeshBuffer >
        ;
        Id(): bigint;
    }

    declare class Polygon3D extends Primitive {


        Id(): bigint;
    }

    declare class ConvConvertorProperty3D {
        private _useNominal: undefined;

        enableAutostitch: boolean;
        joinSimilarFaces: boolean;
        addRemovedFacesAsShells: boolean;
        lengthUnitsFactor: number;
        appUnitsFactor: number;
        auditEnabled: boolean;
        Id(): bigint;
    }

    declare class C3dModelDocument {
        private _useNominal: undefined;
        constructor();

        Id(): bigint;
    }

    declare class C3DPmiToItem {
        private _useNominal: undefined;

        Id(): bigint;
    }

    declare class Multiline extends PlaneItem {

        constructor();
        constructor(_basisCurve: Contour, vertInfo: VertexOfMultilineInfo, _equidRadii: number[], _begTipParams: MLTipParams, _endTipParams: MLTipParams, _processClosed: boolean, _isTransparent: boolean);

        GetBegTipCurve(): Contour | null;

        async GetBegTipCurve_async(): Promise < Contour >
        ;
        GetEndTipCurve(): Contour | null;

        async GetEndTipCurve_async(): Promise < Contour >
        ;
        GetCurvesCount(): number;

        async GetCurvesCount_async(): Promise < number >
        ;
        GetCurve(i: number): ContourWithBreaks | null;

        async GetCurve_async(i: number): Promise < ContourWithBreaks >
        ;
        Id(): bigint;
    }

    declare class VertexOfMultilineInfo {
        private _useNominal: undefined;
        constructor();

        Id(): bigint;
    }

    declare class MLTipParams {
        private _useNominal: undefined;
        constructor();
        constructor(_tipType: EnMLTipType, _tipParam: number);

        Id(): bigint;
    }

    declare class ShellsIntersectionData {
        private _useNominal: undefined;

        IsSolid(): boolean;

        async IsSolid_async(): Promise < boolean >
        ;
        IsSurface(): boolean;

        async IsSurface_async(): Promise < boolean >
        ;
        Id(): bigint;
    }

    declare class ShellsDistanceData {
        private _useNominal: undefined;

        GetMinDistanse(): number;

        async GetMinDistanse_async(): Promise < number >
        ;
    }

    declare class SpatialOffsetCurveParams {
        private _useNominal: undefined;
        constructor(v: Vector3D, nm: SNameMaker);

        Id(): bigint;
    }

    declare class DuplicationValues {
        private _useNominal: undefined;

        GenerateTransformMatrices(): Matrix3D[];

        async GenerateTransformMatrices_async(): Promise < Matrix3D[] >
        ;
        Id(): bigint;
    }

    declare class DuplicationMeshValues extends DuplicationValues {

        constructor(isPolar: boolean, dir1: Vector3D, step1: number, num1: uint, dir2: Vector3D, step2: number, num2: uint, center ? : CartPoint3D, isAlongAxis ? : boolean);

        Id(): bigint;
    }

    declare class ExtensionValues {
        private _useNominal: undefined;
        constructor();

        InitByDistance(t: ExtensionType, k: LateralKind, v: Vector3D, dist: number): void;

        async InitByDistance_async(t: ExtensionType, k: LateralKind, v: Vector3D, dist: number): Promise < void >
        ;
        InitByVertex(t: ExtensionType, k: LateralKind, v: CartPoint3D): void;

        async InitByVertex_async(t: ExtensionType, k: LateralKind, v: CartPoint3D): Promise < void >
        ;
        InitByShell(t: ExtensionType, k: LateralKind, f: Face, s: Solid): void;

        async InitByShell_async(t: ExtensionType, k: LateralKind, f: Face, s: Solid): Promise < void >
        ;
        type: ExtensionType;
        way: ExtensionWay;
        kind: LateralKind;
        point: CartPoint3D;
        direction: Vector3D;
        distance: number;
        prolong: boolean;
        combine: boolean;
        Id(): bigint;
    }

    declare class HoleValues {
        private _useNominal: undefined;

        SetSurface(s: Surface): void;

        async SetSurface_async(s: Surface): Promise < void >
        ;
        SetPhantom(s: boolean): void;

        async SetPhantom_async(s: boolean): Promise < void >
        ;
        placeAngle: number;
        azimuthAngle: number;
        Id(): bigint;
    }

    declare class SlotValues extends HoleValues {

        constructor();

        length: number;
        width: number;
        depth: number;
        bottomWidth: number;
        bottomDepth: number;
        floorRadius: number;
        tailAngle: number;
        type: SlotType;
        placeAngle: number;
        azimuthAngle: number;
        Id(): bigint;
    }

    declare class SolidDuplicate {
        private _useNominal: undefined;

        GetBuffers(): SolidDuplicateBuffer;

        async GetBuffers_async(): Promise < SolidDuplicateBuffer >
        ;
        GetCopy(): Solid | null;

        async GetCopy_async(): Promise < Solid >
        ;
        Id(): bigint;
    }

    declare class SolidPool {
        private _useNominal: undefined;
        constructor(original: Solid);

        Alloc(n: number): void;

        async Alloc_async(n: number): Promise < void >
        ;
        Pop(): SolidDuplicate | null;

        async Pop_async(): Promise < SolidDuplicate >
        ;
        Count(): number;

        async Count_async(): Promise < number >
        ;
        Id(): bigint;
    }


    const Enabler: {
        static EnableMathModules(name: char, key: char): void;

        static async EnableMathModules_async(name: char, key: char): Promise < void >
        ;
    }

    const Action: {
        static IsSolidsIntersectionFast(solid1: Solid, solid2: Solid, names: SNameMaker): boolean;

        static async IsSolidsIntersectionFast_async(solid1: Solid, solid2: Solid, names: SNameMaker): Promise < boolean >
        ;
        static IsSolidsIntersection(solid1: Solid, matr1: Matrix3D, solid2: Solid, matr2: Matrix3D, checkTangent: boolean, getIntersectionSolids: boolean, checkTouchPoints: boolean, ): {
            isIntersection: boolean,
            intData: ShellsIntersectionData[],
        };

        static async IsSolidsIntersection_async(solid1: Solid, matr1: Matrix3D, solid2: Solid, matr2: Matrix3D, checkTangent: boolean, getIntersectionSolids: boolean, checkTouchPoints: boolean, ): Promise < {
                isIntersection: boolean,
                intData: ShellsIntersectionData[],
            } >
        ;
        static MinimumSolidsDistance(solid1: Solid, matr1: Matrix3D, isMultipleUseSolid1: boolean, solid2: Solid, matr2: Matrix3D, isMultipleUseSolid2: boolean, lowerLimitDistance: number, tillFirstLowerLimit: boolean, ): {
            hasDistance: boolean,
            shellsDistanceData: ShellsDistanceData[],
        };

        static async MinimumSolidsDistance_async(solid1: Solid, matr1: Matrix3D, isMultipleUseSolid1: boolean, solid2: Solid, matr2: Matrix3D, isMultipleUseSolid2: boolean, lowerLimitDistance: number, tillFirstLowerLimit: boolean, ): Promise < {
                hasDistance: boolean,
                shellsDistanceData: ShellsDistanceData[],
            } >
        ;
        static FindFilletFaces(faces: Face[], accuracy: number, ): Face[];

        static async FindFilletFaces_async(faces: Face[], accuracy: number, ): Promise < Face[] >
        ;
        static GetDistanceToCube(pl: Placement3D, shell: FaceShell, findMax ? : boolean): {
            isFound: boolean,
            dPlus: number,
            dMinus: number,
        };

        static async GetDistanceToCube_async(pl: Placement3D, shell: FaceShell, findMax ? : boolean): Promise < {
                isFound: boolean,
                dPlus: number,
                dMinus: number,
            } >
        ;
    }

    const ActionSurface: {
        static ElementarySurface(point0: CartPoint3D, point1: CartPoint3D, point2: CartPoint3D, surfaceType: SpaceType, ): Surface;

        static async ElementarySurface_async(point0: CartPoint3D, point1: CartPoint3D, point2: CartPoint3D, surfaceType: SpaceType, ): Promise < Surface >
        ;
        static ExtrusionSurface(curve: Curve3D, direction: Vector3D, simplify: boolean, ): Surface;

        static async ExtrusionSurface_async(curve: Curve3D, direction: Vector3D, simplify: boolean, ): Promise < Surface >
        ;
    }

    const ActionSurfaceCurve: {
        static CreateContourFillets(contour: Contour3D, radiuses: number[], type: ConnectingType): Curve3D;

        static async CreateContourFillets_async(contour: Contour3D, radiuses: number[], type: ConnectingType): Promise < Curve3D >
        ;
        static OffsetPlaneCurve(curve: Curve3D, dist: number, ): Curve3D;

        static async OffsetPlaneCurve_async(curve: Curve3D, dist: number, ): Promise < Curve3D >
        ;
        static OffsetSurfaceCurve(curve: Curve3D, params: SurfaceOffsetCurveParams, ): WireFrame;

        static async OffsetSurfaceCurve_async(curve: Curve3D, params: SurfaceOffsetCurveParams, ): Promise < WireFrame >
        ;
        static OffsetCurve(initCurve: Curve3D, params: SpatialOffsetCurveParams, ): WireFrame;

        static async OffsetCurve_async(initCurve: Curve3D, params: SpatialOffsetCurveParams, ): Promise < WireFrame >
        ;
        static FilletCurve(curve1: Curve3D, t1: number, curve2: Curve3D, t2: number, radius: number, sense: boolean, type: ConnectingType, names: SNameMaker, ): {
            w1: number,
            w2: number,
            unchanged: boolean,
            surface: ElementarySurface,
            result: WireFrame,
        };

        static async FilletCurve_async(curve1: Curve3D, t1: number, curve2: Curve3D, t2: number, radius: number, sense: boolean, type: ConnectingType, names: SNameMaker, ): Promise < {
                w1: number,
                w2: number,
                unchanged: boolean,
                surface: ElementarySurface,
                result: WireFrame,
            } >
        ;
        static BridgeCurve(curve1: Curve3D, t1: number, sense1: boolean, curve2: Curve3D, t2: number, sense2: boolean, names: SNameMaker, ): WireFrame;

        static async BridgeCurve_async(curve1: Curve3D, t1: number, sense1: boolean, curve2: Curve3D, t2: number, sense2: boolean, names: SNameMaker, ): Promise < WireFrame >
        ;
        static ConnectingSpline(curve1: Curve3D, t1: number, mating1: MatingType, curve2: Curve3D, t2: number, mating2: MatingType, tension1: number, tension2: number, names: SNameMaker, ): WireFrame;

        static async ConnectingSpline_async(curve1: Curve3D, t1: number, mating1: MatingType, curve2: Curve3D, t2: number, mating2: MatingType, tension1: number, tension2: number, names: SNameMaker, ): Promise < WireFrame >
        ;
        static CurveProjection(surface: Surface, curve: Curve3D, direction: Vector3D | null, createExact: boolean, truncateByBounds: boolean, version ? : number): Curve3D[];

        static async CurveProjection_async(surface: Surface, curve: Curve3D, direction: Vector3D | null, createExact: boolean, truncateByBounds: boolean, version ? : number): Promise < Curve3D[] >
        ;
    }

    const ActionSolid: {
        static ElementarySolid(points: CartPoint3D[], solidType: ElementaryShellType, names: SNameMaker, ): Solid;

        static async ElementarySolid_async(points: CartPoint3D[], solidType: ElementaryShellType, names: SNameMaker, ): Promise < Solid >
        ;
        static FilletSolid(solid: Solid, sameShell: CopyMode, initCurves: EdgeFunction[], initBounds: Face[], params: SmoothValues, names: SNameMaker, ): Solid;

        static async FilletSolid_async(solid: Solid, sameShell: CopyMode, initCurves: EdgeFunction[], initBounds: Face[], params: SmoothValues, names: SNameMaker, ): Promise < Solid >
        ;
        static ChamferSolid(solid: Solid, sameShell: CopyMode, edges: CurveEdge[], params: SmoothValues, names: SNameMaker, ): Solid;

        static async ChamferSolid_async(solid: Solid, sameShell: CopyMode, edges: CurveEdge[], params: SmoothValues, names: SNameMaker, ): Promise < Solid >
        ;
        static BooleanResult(solid1: Solid, sameShell1: CopyMode, solid2: Solid, sameShell2: CopyMode, oType: OperationType, flags: BooleanFlags, operNames: SNameMaker, ): Solid;

        static async BooleanResult_async(solid1: Solid, sameShell1: CopyMode, solid2: Solid, sameShell2: CopyMode, oType: OperationType, flags: BooleanFlags, operNames: SNameMaker, ): Promise < Solid >
        ;
        static UnionResult(solid: Solid, sameShell: CopyMode, solids: Solid[], sameShells: CopyMode, oType: OperationType, checkIntersect: boolean, mergeFlags: MergingFlags, names: SNameMaker, isArray: boolean, ): {
            result: Solid,
            notGluedSolids: Solid[],
        };

        static async UnionResult_async(solid: Solid, sameShell: CopyMode, solids: Solid[], sameShells: CopyMode, oType: OperationType, checkIntersect: boolean, mergeFlags: MergingFlags, names: SNameMaker, isArray: boolean, ): Promise < {
                result: Solid,
                notGluedSolids: Solid[],
            } >
        ;
        static DraftSolid(solid: Solid, sameShell: CopyMode, neutralPlace: Placement3D, angle: number, faces: Face[], fp: FacePropagation, reverse: boolean, names: SNameMaker, ): Solid;

        static async DraftSolid_async(solid: Solid, sameShell: CopyMode, neutralPlace: Placement3D, angle: number, faces: Face[], fp: FacePropagation, reverse: boolean, names: SNameMaker, ): Promise < Solid >
        ;
        static SolidCutting(solid: Solid, sameShell: CopyMode, cuttingParams: ShellCuttingParams, ): Solid[];

        static async SolidCutting_async(solid: Solid, sameShell: CopyMode, cuttingParams: ShellCuttingParams, ): Promise < Solid[] >
        ;
        static SplitSolid(solid: Solid, sameShell: CopyMode, spPlace: Placement3D, spType: SenseValue, spContours: Contour[], spSame: boolean, selFaces: Face[], flags: MergingFlags, names: SNameMaker, ): Solid;

        static async SplitSolid_async(solid: Solid, sameShell: CopyMode, spPlace: Placement3D, spType: SenseValue, spContours: Contour[], spSame: boolean, selFaces: Face[], flags: MergingFlags, names: SNameMaker, ): Promise < Solid >
        ;
        static SplitSolidBySpaceItem(solid: Solid, sameShell: CopyMode, spItems: SpaceItem[], spSame: boolean, selFaces: Face[], flags: MergingFlags, names: SNameMaker, ): Solid;

        static async SplitSolidBySpaceItem_async(solid: Solid, sameShell: CopyMode, spItems: SpaceItem[], spSame: boolean, selFaces: Face[], flags: MergingFlags, names: SNameMaker, ): Promise < Solid >
        ;
        static DetachParts(solid: Solid, sort: boolean, names: SNameMaker): {
            count: number,
            parts: Solid[],
        };

        static async DetachParts_async(solid: Solid, sort: boolean, names: SNameMaker): Promise < {
                count: number,
                parts: Solid[],
            } >
        ;
        static LoftedSolid(pl: Placement3D[], c: Contour[], spine: Curve3D | null, params: LoftedValues, ps: CartPoint3D[] | null, names: SNameMaker, ns: SNameMaker[], ): Solid;

        static async LoftedSolid_async(pl: Placement3D[], c: Contour[], spine: Curve3D | null, params: LoftedValues, ps: CartPoint3D[] | null, names: SNameMaker, ns: SNameMaker[], ): Promise < Solid >
        ;
        static ExtrusionSolid(sweptData: SweptData, direction: Vector3D, solid1: Solid | null, solid2: Solid | null, checkIntersection: boolean, params: ExtrusionValues, operNames: SNameMaker, contoursNames: SNameMaker[], ): Solid;

        static async ExtrusionSolid_async(sweptData: SweptData, direction: Vector3D, solid1: Solid | null, solid2: Solid | null, checkIntersection: boolean, params: ExtrusionValues, operNames: SNameMaker, contoursNames: SNameMaker[], ): Promise < Solid >
        ;
        static ExtrusionResult(solid: Solid, sameShell: CopyMode, sweptData: SweptData, direction: Vector3D, params: ExtrusionValues, oType: OperationType, operNames: SNameMaker, contoursNames: SNameMaker[], ): Solid;

        static async ExtrusionResult_async(solid: Solid, sameShell: CopyMode, sweptData: SweptData, direction: Vector3D, params: ExtrusionValues, oType: OperationType, operNames: SNameMaker, contoursNames: SNameMaker[], ): Promise < Solid >
        ;
        static SymmetrySolid(solid: Solid, sameShell: CopyMode, place: Placement3D, names: SNameMaker, ): Solid;

        static async SymmetrySolid_async(solid: Solid, sameShell: CopyMode, place: Placement3D, names: SNameMaker, ): Promise < Solid >
        ;
        static MirrorSolid(solid: Solid, place: Placement3D, names: SNameMaker, ): Solid;

        static async MirrorSolid_async(solid: Solid, place: Placement3D, names: SNameMaker, ): Promise < Solid >
        ;
        static ThinSolid(solid: Solid, sameShell: CopyMode, outFaces: Face[], offFaces: Face[], offDists: number[], params: SweptValues, names: SNameMaker, copyFaceAttrs: boolean, ): Solid;

        static async ThinSolid_async(solid: Solid, sameShell: CopyMode, outFaces: Face[], offFaces: Face[], offDists: number[], params: SweptValues, names: SNameMaker, copyFaceAttrs: boolean, ): Promise < Solid >
        ;
        static RevolutionSolid(sweptData: SweptData, axis: Axis3D, params: RevolutionValues, operNames: SNameMaker, contoursNames: SNameMaker[], ): Solid;

        static async RevolutionSolid_async(sweptData: SweptData, axis: Axis3D, params: RevolutionValues, operNames: SNameMaker, contoursNames: SNameMaker[], ): Promise < Solid >
        ;
        static EvolutionSolid(sweptData: SweptData, spine: Curve3D, params: EvolutionValues, operNames: SNameMaker, contoursNames: SNameMaker[], spineNames: SNameMaker, ): Solid;

        static async EvolutionSolid_async(sweptData: SweptData, spine: Curve3D, params: EvolutionValues, operNames: SNameMaker, contoursNames: SNameMaker[], spineNames: SNameMaker, ): Promise < Solid >
        ;
        static DuplicationSolid(solid: Solid, params: DuplicationValues, names: SNameMaker, ): Solid;

        static async DuplicationSolid_async(solid: Solid, params: DuplicationValues, names: SNameMaker, ): Promise < Solid >
        ;
        static HoleSolid(solid: Solid, sameShell: CopyMode, place: Placement3D, params: HoleValues, names: SNameMaker, ): Solid;

        static async HoleSolid_async(solid: Solid, sameShell: CopyMode, place: Placement3D, params: HoleValues, names: SNameMaker, ): Promise < Solid >
        ;
    }

    const ActionPoint: {
        static LineLineNearestPoints(line1: Line3D, line2: Line3D, p1: CartPoint3D, p2: CartPoint3D): number;

        static async LineLineNearestPoints_async(line1: Line3D, line2: Line3D, p1: CartPoint3D, p2: CartPoint3D): Promise < number >
        ;
        static CurveCurveIntersection2D(curve1: Curve, curve2: Curve, xEpsilon: number, yEpsilon: number, touchInclude: boolean, allowInaccuracy ? : boolean): {
            count: ptrdiff_t,
            result1: number[],
            result2: number[],
        };

        static async CurveCurveIntersection2D_async(curve1: Curve, curve2: Curve, xEpsilon: number, yEpsilon: number, touchInclude: boolean, allowInaccuracy ? : boolean): Promise < {
                count: ptrdiff_t,
                result1: number[],
                result2: number[],
            } >
        ;
        static CurveCurveIntersection3D(curve1: Curve3D, curve2: Curve3D, mEps: number): {
            count: ptrdiff_t,
            result1: number[],
            result2: number[],
        };

        static async CurveCurveIntersection3D_async(curve1: Curve3D, curve2: Curve3D, mEps: number): Promise < {
                count: ptrdiff_t,
                result1: number[],
                result2: number[],
            } >
        ;
        static CurveCurveCrossing(curve1: Curve3D, curve2: Curve3D, mEps ? : number): {
            count: ptrdiff_t,
            result1: number[],
            result2: number[],
        };

        static async CurveCurveCrossing_async(curve1: Curve3D, curve2: Curve3D, mEps ? : number): Promise < {
                count: ptrdiff_t,
                result1: number[],
                result2: number[],
            } >
        ;
    }

    const ActionDirect: {
        static CollectFacesForModification(shell: FaceShell, way: ModifyingType, radius: number, ): Face[];

        static async CollectFacesForModification_async(shell: FaceShell, way: ModifyingType, radius: number, ): Promise < Face[] >
        ;
        static FaceModifiedSolid(solid: Solid, sameShell: CopyMode, params: ModifyValues, faces: Face[], names: SNameMaker, ): Solid;

        static async FaceModifiedSolid_async(solid: Solid, sameShell: CopyMode, params: ModifyValues, faces: Face[], names: SNameMaker, ): Promise < Solid >
        ;
        static TransformedSolid(solid: Solid, sameShell: CopyMode, params: TransformValues, names: SNameMaker, ): Solid;

        static async TransformedSolid_async(solid: Solid, sameShell: CopyMode, params: TransformValues, names: SNameMaker, ): Promise < Solid >
        ;
        static EdgeModifiedSolid(solid: Solid, sameShell: CopyMode, params: ModifyValues, edges: CurveEdge[], names: SNameMaker, ): Solid;

        static async EdgeModifiedSolid_async(solid: Solid, sameShell: CopyMode, params: ModifyValues, edges: CurveEdge[], names: SNameMaker, ): Promise < Solid >
        ;
    }

    const ActionPhantom: {
        static SmoothPhantom(solid: Solid, edges: EdgeFunction[], params: SmoothValues, ): Surface[];

        static async SmoothPhantom_async(solid: Solid, edges: EdgeFunction[], params: SmoothValues, ): Promise < Surface[] >
        ;
        static SmoothSequence(solid: Solid, edges: CurveEdge[], params: SmoothValues, createSurfaces: boolean, ): {
            sequences: EdgeSequence[],
            result: Surface[],
        };

        static async SmoothSequence_async(solid: Solid, edges: CurveEdge[], params: SmoothValues, createSurfaces: boolean, ): Promise < {
                sequences: EdgeSequence[],
                result: Surface[],
            } >
        ;
    }

    const ActionCurve: {
        static Arc(center: CartPoint, points: CartPoint[], curveClosed: boolean, angle: number, a: number, b: number, ): Curve;

        static async Arc_async(center: CartPoint, points: CartPoint[], curveClosed: boolean, angle: number, a: number, b: number, ): Promise < Curve >
        ;
        static SplineCurve(points: CartPoint[], closed: boolean, curveType: PlaneType, ): Curve;

        static async SplineCurve_async(points: CartPoint[], closed: boolean, curveType: PlaneType, ): Promise < Curve >
        ;
        static OffsetContour(cntr: Contour, rad: number, xEpsilon: number, yEpsilon: number, modifySegments: boolean, version ? : number): Contour | null;

        static async OffsetContour_async(cntr: Contour, rad: number, xEpsilon: number, yEpsilon: number, modifySegments: boolean, version ? : number): Promise < Contour >
        ;
        static SurfaceBoundContour(surface: Surface, spaceCurve: Curve3D, version ? : number, ): Contour;

        static async SurfaceBoundContour_async(surface: Surface, spaceCurve: Curve3D, version ? : number, ): Promise < Contour >
        ;
        static Line(point1: CartPoint, point2: CartPoint, ): Curve;

        static async Line_async(point1: CartPoint, point2: CartPoint, ): Promise < Curve >
        ;
        static Segment(point1: CartPoint, point2: CartPoint, ): Curve;

        static async Segment_async(point1: CartPoint, point2: CartPoint, ): Promise < Curve >
        ;
        static RegularPolygon(centre: CartPoint, point: CartPoint, vertexCount: number, describe: boolean, ): Curve;

        static async RegularPolygon_async(centre: CartPoint, point: CartPoint, vertexCount: number, describe: boolean, ): Promise < Curve >
        ;
        static NurbsCopy(curve: Curve, ): Curve;

        static async NurbsCopy_async(curve: Curve, ): Promise < Curve >
        ;
        static DuplicateCurve(curve: Curve, version ? : number): Curve | null;

        static async DuplicateCurve_async(curve: Curve, version ? : number): Promise < Curve >
        ;
    }

    const ActionCurve3D: {
        static Arc(centre: CartPoint3D, points: CartPoint3D[], curveClosed: boolean, angle: number, a: number, b: number, ): Curve3D;

        static async Arc_async(centre: CartPoint3D, points: CartPoint3D[], curveClosed: boolean, angle: number, a: number, b: number, ): Promise < Curve3D >
        ;
        static Segment(point1: CartPoint3D, point2: CartPoint3D, ): Curve3D;

        static async Segment_async(point1: CartPoint3D, point2: CartPoint3D, ): Promise < Curve3D >
        ;
        static SplineCurve(points: CartPoint3D[], closed: boolean, curveType: SpaceType, ): Curve3D;

        static async SplineCurve_async(points: CartPoint3D[], closed: boolean, curveType: SpaceType, ): Promise < Curve3D >
        ;
        static CreateContour(curve: Curve3D, ): Contour3D;

        static async CreateContour_async(curve: Curve3D, ): Promise < Contour3D >
        ;
        static AddCurveToContour(curve: Curve3D, contour: Curve3D, toEnd: boolean): void;

        static async AddCurveToContour_async(curve: Curve3D, contour: Curve3D, toEnd: boolean): Promise < void >
        ;
        static RegularPolygon(centre: CartPoint3D, point: CartPoint3D, axisZ: Vector3D, vertexCount: number, describe: boolean, ): Curve3D;

        static async RegularPolygon_async(centre: CartPoint3D, point: CartPoint3D, axisZ: Vector3D, vertexCount: number, describe: boolean, ): Promise < Curve3D >
        ;
        static SpiralCurve(point0: CartPoint3D, point1: CartPoint3D, point2: CartPoint3D, radius: number, step: number, angle: number, lawCurve: Curve | null, spiralAxis: boolean, ): Curve3D;

        static async SpiralCurve_async(point0: CartPoint3D, point1: CartPoint3D, point2: CartPoint3D, radius: number, step: number, angle: number, lawCurve: Curve | null, spiralAxis: boolean, ): Promise < Curve3D >
        ;
        static CreateContours(curves: Curve3D[], metricEps: number, onlySmoothConnected ? : boolean, version ? : number): Contour3D[];

        static async CreateContours_async(curves: Curve3D[], metricEps: number, onlySmoothConnected ? : boolean, version ? : number): Promise < Contour3D[] >
        ;
        static PlaneCurve(place: Placement3D, curve: Curve, ): Curve3D;

        static async PlaneCurve_async(place: Placement3D, curve: Curve, ): Promise < Curve3D >
        ;
        static DuplicateCurve(curve: Curve3D, version ? : number): Curve3D | null;

        static async DuplicateCurve_async(curve: Curve3D, version ? : number): Promise < Curve3D >
        ;
        static NurbsCopy(curve: Curve3D, ): Curve3D;

        static async NurbsCopy_async(curve: Curve3D, ): Promise < Curve3D >
        ;
    }

    const ActionRegion: {
        static GetCorrectRegions(contours: Contour[], sameContours: boolean, ): Region[];

        static async GetCorrectRegions_async(contours: Contour[], sameContours: boolean, ): Promise < Region[] >
        ;
        static MakeRegions(contours: Contour[], useSelfIntCntrs: boolean, sameContours: boolean, ): Region[];

        static async MakeRegions_async(contours: Contour[], useSelfIntCntrs: boolean, sameContours: boolean, ): Promise < Region[] >
        ;
        static CreateBooleanResultRegions(region1: Region, region2: Region, operParams: RegionBooleanParams, ): {
            regions: Region[],
            resInfo: Resultype,
        };

        static async CreateBooleanResultRegions_async(region1: Region, region2: Region, operParams: RegionBooleanParams, ): Promise < {
                regions: Region[],
                resInfo: Resultype,
            } >
        ;
    }

    const ActionMesh: {
        static CreateConvexPolyhedron(points: FloatPoint3D[], ): Mesh;

        static async CreateConvexPolyhedron_async(points: FloatPoint3D[], ): Promise < Mesh >
        ;
    }

    const ActionShell: {
        static ExtensionShell(solid: Solid, sameShell: CopyMode, face: Face, edges: CurveEdge[], params: ExtensionValues, operNames: SNameMaker, ): Solid;

        static async ExtensionShell_async(solid: Solid, sameShell: CopyMode, face: Face, edges: CurveEdge[], params: ExtensionValues, operNames: SNameMaker, ): Promise < Solid >
        ;
        static OffsetShell(solid: Solid, sameShell: CopyMode, initFaces: Face[], checkFacesConnection: boolean, p: SweptValues, operNames: SNameMaker, copyFaceAttrs: boolean, ): Solid;

        static async OffsetShell_async(solid: Solid, sameShell: CopyMode, initFaces: Face[], checkFacesConnection: boolean, p: SweptValues, operNames: SNameMaker, copyFaceAttrs: boolean, ): Promise < Solid >
        ;
    }

    const Mutex: {
        static EnterParallelRegion(): void;

        static async EnterParallelRegion_async(): Promise < void >
        ;
        static ExitParallelRegion(): void;

        static async ExitParallelRegion_async(): Promise < void >
        ;
    }

    const ContourGraph: {
        static OuterContoursBuilder(curveList: Curve[], accuracy ? : number, strict ? : boolean, version ? : number, progInd ? : ProgressIndicator): {
            graph: Graph,
            contours: Contour[],
        };

        static async OuterContoursBuilder_async(curveList: Curve[], accuracy ? : number, strict ? : boolean, version ? : number, progInd ? : ProgressIndicator): Promise < {
                graph: Graph,
                contours: Contour[],
            } >
        ;
        static RemoveContourGaps(contour: Contour, accuracy: number, canInsert: boolean, canReplace: boolean): boolean;

        static async RemoveContourGaps_async(contour: Contour, accuracy: number, canInsert: boolean, canReplace: boolean): Promise < boolean >
        ;
    }

    const CurveEnvelope: {
        static IntersectWithAll(selectCurve: Curve, fromCurve: Curve[], self: boolean): CrossPoint[];

        static async IntersectWithAll_async(selectCurve: Curve, fromCurve: Curve[], self: boolean): Promise < CrossPoint[] >
        ;
        static SortCrossPoints(tProj: number, selectCurve: Curve, cross: CrossPoint[], ): {
            crossLeft: CrossPoint[],
            crossRight: CrossPoint[],
        };

        static async SortCrossPoints_async(tProj: number, selectCurve: Curve, cross: CrossPoint[], ): Promise < {
                crossLeft: CrossPoint[],
                crossRight: CrossPoint[],
            } >
        ;
    }

    const CurveTangent: {
        static LinePointTangentCurve(pnt: CartPoint, pCurve: Curve, lineAsCurve ? : boolean): Line[];

        static async LinePointTangentCurve_async(pnt: CartPoint, pCurve: Curve, lineAsCurve ? : boolean): Promise < Line[] >
        ;
        static LineTangentTwoCurves(pCurve1: Curve, pCurve2: Curve, ): {
            pLine: Line[],
            secondPoint: CartPoint[],
        };

        static async LineTangentTwoCurves_async(pCurve1: Curve, pCurve2: Curve, ): Promise < {
                pLine: Line[],
                secondPoint: CartPoint[],
            } >
        ;
    }

    const CurveUtil: {
        static AreaSign(curve: Curve, sag: number, close: boolean): number;

        static async AreaSign_async(curve: Curve, sag: number, close: boolean): Promise < number >
        ;
    }

    const MeshGrid: {
        static LineGridIntersect(grid: Grid, line: FloatAxis3D, ): {
            intersected: boolean,
            crossPoint: FloatPoint3D,
            tRes: float,
        };

        static async LineGridIntersect_async(grid: Grid, line: FloatAxis3D, ): Promise < {
                intersected: boolean,
                crossPoint: FloatPoint3D,
                tRes: float,
            } >
        ;
    }

    const Writer: {
        static WriteItems(model: Model, ): {
            size: number,
            memory: Buffer,
        };

        static async WriteItems_async(model: Model, ): Promise < {
                size: number,
                memory: Buffer,
            } >
        ;
        static ReadItems(memory: Buffer, ): Model;

        static async ReadItems_async(memory: Buffer, ): Promise < Model >
        ;
    }

    const Registrator: {
        static AutoReg(): {
            autoReg: AutoRegDuplicate,
            iReg: RegDuplicate,
        };

        static async AutoReg_async(): Promise < {
                autoReg: AutoRegDuplicate,
                iReg: RegDuplicate,
            } >
        ;
    }

    const TriFace: {
        static CalculateGrid(face: Face, stepData: StepData, grid: Grid, dualSeams ? : boolean, quad ? : boolean, fair ? : boolean): void;

        static async CalculateGrid_async(face: Face, stepData: StepData, grid: Grid, dualSeams ? : boolean, quad ? : boolean, fair ? : boolean): Promise < void >
        ;
    }

    const Conversion: {
        static ImportFromFile(fileName: string, prop ? : ConvConvertorProperty3D, indicator ? : ProgressIndicator): {
            result: ConvResType,
            model: Model,
        };

        static async ImportFromFile_async(fileName: string, prop ? : ConvConvertorProperty3D, indicator ? : ProgressIndicator): Promise < {
                result: ConvResType,
                model: Model,
            } >
        ;
        static ExportIntoFile(model: Model, fileName: string, prop ? : ConvConvertorProperty3D, indicator ? : ProgressIndicator): ConvResType;

        static async ExportIntoFile_async(model: Model, fileName: string, prop ? : ConvConvertorProperty3D, indicator ? : ProgressIndicator): Promise < ConvResType >
        ;
    }


    declare interface MeshBuffer {
        index: Uint32Array;
        position: Float32Array;
        normal: Float32Array;
        style: number;
        simpleName: number;
        i: number;
        grid: Grid;
        model: Face;
    }

    declare interface EdgeBuffer {
        position: Float32Array;
        style: number;
        simpleName: number;
        i: number;
        model: c3d.CurveEdge
    }

    declare interface SolidDuplicateBuffer {
        originalFaceIds: BigInt64Array;
        copyFaceIds: BigInt64Array;
        originalEdgeIds: BigInt64Array;
        copyEdgeIds: BigInt64Array;
    }

    declare enum ESides {
        SideNone,
        SidePlus,
        SideMinus
    }

    declare enum StepType {
        SpaceStep,
        DeviationStep,
        MetricStep,
        ParamStep,
        CollisionStep,
        MipStep
    }

    declare enum ElementaryShellType {
        Sphere,
        Torus,
        Cylinder,
        Cone,
        Block,
        Wedge,
        Prism,
        Pyramid,
        Plate,
        Isocahedron,
        Polyhedron,
        Tetrapipe,
        Octapipe
    }

    declare enum SpaceType {
        Undefined = 0, ///< \ru Неизвестный объект. \en Unknown object.
            SpaceItem = 1, ///< \ru Геометрический объект. \en Geometric object. \n 

            // \ru Типы точек. \en Point types. 
            Point3D = 101, ///< \ru Точка. \en Point.
            FreePoint3D = 200, ///< \ru Тип для точек, созданных пользователем. \en Type for the user-defined points. \n 

            // \ru Типы кривых. \en Curve types. 
            Curve3D = 201, ///< \ru Кривая. \en Curve.
            Line3D = 202, ///< \ru Прямая. \en Line.
            LineSegment3D = 203, ///< \ru Отрезок прямой. \en Line segment.
            Arc3D = 204, ///< \ru Окружность, эллипс, дуга. \en Circle, ellipse, arc.
            Spiral = 205, ///< \ru Спираль. \en Spiral.
            ConeSpiral = 206, ///< \ru Коническая спираль. \en Conical spiral.
            CurveSpiral = 207, ///< \ru Спираль по образующей кривой. \en Spiral curve constructed by generatrix.
            CrookedSpiral = 208, ///< \ru Спираль по направляющей кривой. \en Spiral along the guide curve.
            PolyCurve3D = 209, ///< \ru Кривая, построенная по точкам. \en Curve constructed by points.
            Polyline3D = 210, ///< \ru Полилиния. \en Polyline.
            Nurbs3D = 211, ///< \ru NURBS кривая. \en NURBS curve.
            Bezier3D = 212, ///< \ru Кривая Безье. \en Bezier curve.
            Hermit3D = 213, ///< \ru Составной кубический сплайн Эрмита. \en Composite Hermit cubic spline.
            CubicSpline3D = 214, ///< \ru Кубический сплайн. \en Cubic spline.
            PlaneCurve = 215, ///< \ru Плоская кривая в пространстве. \en Plane curve in space.
            OffsetCurve3D = 216, ///< \ru Эквидистантная кривая. \en Offset curve.
            TrimmedCurve3D = 217, ///< \ru Усеченная кривая. \en Truncated curve.
            ReparamCurve3D = 218, ///< \ru Репараметризованная кривая. \en Reparametrized curve.
            BridgeCurve3D = 219, ///< \ru Кривая-мостик, соединяющая две кривые. \en Curve as a bridge connecting two curves.
            CharacterCurve3D = 220, ///< \ru Кривая, координатные функции которой заданы в символьном виде. \en Functionally defined curve.
            ContourOnSurface = 221, ///< \ru Контур на поверхности. \en Contour on the surface.
            ContourOnPlane = 222, ///< \ru Контур на плоскости. \en Contour on the plane.
            SurfaceCurve = 223, ///< \ru Кривая на поверхности. \en Curve on the surface.
            SilhouetteCurve = 224, ///< \ru Силуэтная кривая. \en Silhouette curve.
            SurfaceIntersectionCurve = 225, ///< \ru Кривая пересечения поверхностей. \en Curve as intersection of surfaces.
            BSpline = 226, ///< \ru В-сплайн. \en B-spline.
            Contour3D = 227, ///< \ru Контур. \en Contour.
            CoonsDerivative = 228, ///< \ru Кривая производных поверхности Кунса. \en Curve of Coons surface derivetives.
            FreeCurve3D = 300, ///< \ru Тип для кривых, созданных пользователем. \en Type for the user-defined curves. \n 

            // \ru Типы поверхностей. \en Surface types. 
            Surface = 301, ///< \ru Поверхность. \en Surface.
            ElementarySurface = 302, ///< \ru Элементарная поверхность. \en Elementary surface.
            Plane = 303, ///< \ru Плоскость. \en Plane.
            ConeSurface = 304, ///< \ru Коническая поверхность. \en Conical surface.
            CylinderSurface = 305, ///< \ru Цилиндрическая поверхность. \en Cylindrical surface.
            SphereSurface = 306, ///< \ru Сфера. \en Sphere.
            TorusSurface = 307, ///< \ru Тор. \en Torus.
            SweptSurface = 308, ///< \ru Поверхность движения. \en Swept surface.
            ExtrusionSurface = 309, ///< \ru Поверхность перемещения. \en Extrusion surface.
            RevolutionSurface = 310, ///< \ru Поверхность вращения. \en Revolution surface.
            EvolutionSurface = 311, ///< \ru Поверхность заметания. \en Swept surface with guide curve.
            ExactionSurface = 312, ///< \ru Поверхность заметания с поворотными торцами. \en Swept surface with rotating ends.
            ExpansionSurface = 313, ///< \ru Плоскопараллельная поверхность. \en Plane-parallel swept surfaces.
            SpiralSurface = 314, ///< \ru Спиральная поверхность. \en Spiral surface.
            RuledSurface = 315, ///< \ru Линейчатая поверхность. \en Ruled surface.
            SectorSurface = 316, ///< \ru Секториальная поверхность. \en Sectorial surface.
            PolySurface = 317, ///< \ru Поверхность, определяемая точками. \en Surface constructed by points.
            HermitSurface = 318, ///< \ru Hermit поверхность, определяемая точками. \en Hermit surface.
            SplineSurface = 319, ///< \ru NURBS поверхность, определяемая точками. \en NURBS surface.
            GridSurface = 320, ///< \ru Поверхность, определяемая точками. \en Surface defined by points.
            TriBezierSurface = 321, ///< \ru Треугольная Bezier поверхность, определяемая точками. \en Triangular Bezier surface.
            TriSplineSurface = 322, ///< \ru Треугольная NURBS поверхность, определяемая точками. \en Triangular NURBS surface.
            OffsetSurface = 323, ///< \ru Эквидистантная поверхность. \en Offset surface.
            DeformedSurface = 324, ///< \ru Деформированная поверхность. \en Deformed surface.
            NurbsSurface = 325, ///< \ru NURBS поверхность, определяемая кривыми. \en NURBS surface defined by curves.
            CornerSurface = 326, ///< \ru Поверхность по трем кривым. \en The surface based on three curves.
            CoverSurface = 327, ///< \ru Поверхность по четырем кривым. \en The surface based on the four curves.
            CoonsPatchSurface = 328, ///< \ru Бикубическая поверхность Кунса по четырем кривым. \en Bicubic Coons surface constructed by four curves.
            GregoryPatchSurface = 329, ///< \ru Поверхность Грегори по четырем кривым. \en Gregory surface constructed by four curves.
            LoftedSurface = 330, ///< \ru Поверхность, проходящая через заданное семейство кривых. \en Lofted surface.
            ElevationSurface = 331, ///< \ru Поверхность, проходящая через заданное семейство кривых, с направляющей. \en Lofted surface with the guide.
            MeshSurface = 332, ///< \ru Поверхность на сетке кривых. \en The surface constructed by the grid curves.
            GregorySurface = 333, ///< \ru Поверхность на ограничивающем контуре. \en The surface on the bounding contour.
            SmoothSurface = 334, ///< \ru Поверхность сопряжения. \en Conjugation surface.
            ChamferSurface = 335, ///< \ru Поверхность фаски. \en The surface of the bevel.
            FilletSurface = 336, ///< \ru Поверхность скругления. \en Fillet surface.
            ChannelSurface = 337, ///< \ru Поверхность скругления с переменным радиусом. \en Fillet surface with variable radius.
            FullFilletSurface = 338, ///< \ru Поверхность полного скругления. \en Full fillet surface.
            JoinSurface = 339, ///< \ru Поверхность соединения. \en The surface of the joint.
            CurveBoundedSurface = 340, ///< \ru Ограниченная кривыми поверхность. \en The surface bounded by curves.
            BendedUnbendedSurface = 341, ///< \ru Поверхность, полученная сгибом/разгибом. \en Surface constructed by fold / unbending.
            CylindricBendedSurface = 342, ///< \ru Поверхность, полученная цилиндрическим сгибом. \en Surface constructed by cylindrical fold.
            CylindricUnbendedSurface = 343, ///< \ru Поверхность, полученная цилиндрическим разгибом. \en Surface constructed by cylindrical unbending.
            ConicBendedSurface = 344, ///< \ru Поверхность, полученная коническим сгибом. \en Surface constructed by conical fold.
            ConicUnbendedSurface = 345, ///< \ru Поверхность, полученная коническим разгибом. \en Surface constructed by conical unbending.
            GregoryRibbonPatchSurface = 346, ///< \ru Поверхность Грегори с граничными условиями. \en Gregory patch surface with ribbons.
            ExplorationSurface = 347, ///< \ru Поверхность заметания с масштабированием и поворотом образующей кривой. \en Swept surface with scaling and winding of generating curve.
            SectionSurface = 348, ///< \ru Поверхность заметания переменного сечения. \en The swept mutable section surface.
            FreeSurface = 400, ///< \ru Тип для поверхностей, созданных пользователем. \en Type for the user-defined surfaces. \n 

            // \ru Типы вспомогательных объектов. \en Helper object types. 
            Legend = 401, ///< \ru Вспомогательный объект. \en The helper object.
            Marker = 402, ///< \ru Точка и двойка ортонормированных векторов (применяется в сопряжениях, в кинематике). \en Point and two orthonormal vectors.
            Thread = 403, ///< \ru Резьба. \en Thread.
            Symbol = 404, ///< \ru Условное обозначение. \en Symbol.
            PointsSymbol = 405, ///< \ru Условное обозначение на базовых точках. \en Symbol on the basic points.
            Rough = 406, ///< \ru Обозначение шероховатости. \en Designation of roughness.
            Leader = 407, ///< \ru Обозначение линии выноски. \en Designation of the leader line.
            Dimension3D = 408, ///< \ru Размер. \en Dimension
            LinearDimension3D = 409, ///< \ru Линейный размер. \en Linear dimension. 
            DiameterDimension3D = 410, ///< \ru Диаметральный размер. \en Diameter dimension. 
            RadialDimension3D = 411, ///< \ru Радиальный размер. \en Radial dimension. 
            AngularDimension3D = 412, ///< \ru Угловой размер. \en Angular dimension. 
            FreeLegend = 500, ///< \ru Тип для вспомогательных объектов, созданных пользователем. \en Type for the user helper objects. \n 

            // \ru Типы объектов модели геометрического ядра с журналом построения и атрибутами. \en Model object types with history tree and attributes. 
            Item = 501, ///< \ru Геометрический объект модели. \en Model object.
            AssistedItem = 502, ///< \ru Локальная система координат. \en The local coordinate system.
            PointFrame = 503, ///< \ru Точечный каркас. \en Point frame.
            WireFrame = 504, ///< \ru Проволочный каркас. \en Wire frame.
            Solid = 505, ///< \ru Твердое тело. \en Solid.
            Instance = 506, ///< \ru Объект модели в локальной системе координат. \en The model object in the local coordinate system.
            Assembly = 507, ///< \ru Сборочная единица объектов модели. \en Assembly unit of model objects.
            Mesh = 508, ///< \ru Полигональный объект в виде точек, ломаных и пластин. \en Polygonal form of an object as a set of points, polylines, and plates.
            SpaceInstance = 509, ///< \ru Обертка над геометрическим объектом MbSpaceItem. \en Wrapper over a geometry MbSpaceItem.
            PlaneInstance = 510, ///< \ru Обертка над плоским объектом MbPlaneItem. \en Wrapper over a flat object MbPlaneItem.
            Collection = 511, ///< \ru Коллекция элементов. \en Collection of elements. \n

            FreeItem = 600, ///< \ru Тип для объектов, созданных пользователем. \en Type for the user-defined objects.
    }

    declare enum CopyMode {
        Same,
        KeepHistory,
        KeepSurface,
        Copy
    }

    declare enum OperationType {
        Internal,
        External,
        Intersect,
        Difference,
        Unknown,
        Union,
        Base,
        Variety
    }

    declare enum SmoothForm {
        Span,
        Fillet,
        Chamfer,
        Slant1,
        Slant2
    }

    declare enum ThreeStates {
        negative,
        neutral,
        positive
    }

    declare enum CornerForm {
        pointed,
        either,
        uniform,
        sharp
    }

    declare enum CreatorType {
        Undefined = 0, ///< \ru Неизвестный объект. \en Unknown object.
            Creator = 1, ///< \ru Строитель объекта. \en Constructor of object. \n

            // \ru Строители точек. \en Creators of points. 
            PointsCreator = 101, ///< \ru Строитель точечного каркаса. \en Constructor of point-frame. \n 

            // \ru Строители кривых. \en Creators of curves. 
            Curve3DCreator = 201, ///< \ru Строитель кривой. \en Constructor of curve. 
            Nurbs3DCreator = 202, ///< \ru Строитель сплайна с сопряжениями. \en Constructor of spline with tangents. 
            SurfaceSplineCreator = 203, ///< \ru Строитель сплайна на поверхности с сопряжениями. \en Constructor of spline on a surface with tangents. 
            ProjectionCurveCreator = 204, ///< \ru Строитель проекционной кривой. \en Constructor of the projection curve. 
            OffsetCurveCreator = 205, ///< \ru Строитель эквидистантной кривой. \en Constructor of the offset curve. 
            IntersectionCurveCreator = 206, ///< \ru Строитель кривой пересечения. \en Constructor of the intersection curve. 
            ConnectingCurveCreator = 207, ///< \ru Строитель кривой скругления двух кривых. \en Constructor of the curve connecting two curves. \n

            // \ru Строители тел. \en Creators of solids. 
            ShellCreator = 501, ///< \ru Строитель оболочки. \en Constructor of shell. 
            SimpleCreator = 502, ///< \ru Строитель оболочки без истории. \en Constructor of a shell without history. 
            ElementarySolid = 503, ///< \ru Строитель оболочки в форме: блока, клина, цилиндра, конуса, шара, тора. \en Constructor of a shell as: a block, a wedge, a cylinder, a cone, a sphere, a torus. 
            CurveSweptSolid = 504, ///< \ru Строитель оболочки движения. \en Constructor of a swept shell. 
            CurveExtrusionSolid = 505, ///< \ru Строитель оболочки выдавливания. \en Constructor of a shell of extrusion. 
            CurveRevolutionSolid = 506, ///< \ru Строитель оболочки вращения. \en Constructor of a shell of revolution. 
            CurveEvolutionSolid = 507, ///< \ru Строитель кинематической оболочки. \en Constructor of a shell of evolution. 
            CurveLoftedSolid = 508, ///< \ru Строитель оболочки по плоским сечениям. \en Constructor of lofted shell. 
            BooleanSolid = 509, ///< \ru Строитель оболочки булевой операции. \en Constructor of a shell of boolean operation. 
            CuttingSolid = 510, ///< \ru Строитель разрезанной поверхностью оболочки. \en Constructor of a shell cut by surface. 
            SymmetrySolid = 511, ///< \ru Строитель симметричной оболочки. \en Constructor of a symmetric shell. 
            HoleSolid = 512, ///< \ru Строитель оболочки отверстия, кармана или фигурного паза. \en Constructor of a shell of a hole, a pocket or a groove. 
            SmoothSolid = 513, ///< \ru Строитель оболочки с фаской или скруглением ребер. \en Constructor of a shell with a chamfer or with edges fillet. 
            ChamferSolid = 514, ///< \ru Строитель оболочки с фаской ребер. \en Constructor of a shell with edges chamfer. 
            FilletSolid = 515, ///< \ru Строитель оболочки со скруглением ребер. \en Constructor of a shell with edges fillet. 
            FullFilletSolid = 516, ///< \ru Строитель оболочки со скруглением граней. \en Constructor of a shell with a faces fillet. 
            ShellSolid = 517, ///< \ru Строитель тонкостенной оболочки, эквидистантной оболочки, придания толщины. \en Constructor of a thin-walled shell, an offset shell, thickening. 
            DraftSolid = 518, ///< \ru Строитель оболочки с литейным уклоном. \en Constructor of a shell with a pattern taper. 
            RibSolid = 519, ///< \ru Строитель оболочки с ребром жесткости. \en Constructor of a shell with a rib. 
            SplitShell = 520, ///< \ru Строитель оболочки с подразбиением граней. \en Constructor of a shell with faces subdivision. 
            NurbsBlockSolid = 521, ///< \ru Строитель оболочки в форме блока из nurbs-поверхностей. \en Constructor of a shell as a block from NURBS surfaces: 
            FaceModifiedSolid = 522, ///< \ru Строитель модифицированной оболочки. \en Constructor of a modified shell. 
            ModifiedNurbsItem = 523, ///< \ru Строитель модифицированной nurbs-поверхностями оболочки. \en Constructor of a shell with modified NURBS surfaces. 
            NurbsModification = 524, ///< \ru Строитель модифицированной контрольными точками оболочки. \en Constructor of a shell modified by control points. 
            TransformedSolid = 525, ///< \ru Строитель трансформированной оболочки. \en Constructor of a transformed shell. 
            ThinShellCreator = 526, ///< \ru Строитель тонкой оболочки. \en Constructor of a thin shell. 
            UnionSolid = 527, ///< \ru Строитель объединённой оболочки. \en Constructor of a united shell. 
            DetachSolid = 528, ///< \ru Строитель оболочки из отделяемой части многосвязной оболочки. \en Constructor of a shell from the detached part of a multiply connected shell. 
            DuplicationSolid = 529, ///< \ru Строитель множества тел, построенных из исходного. \en Constructor of set of solids built from the original. \n
            ReverseCreator = 530, ///< \ru Строитель вывернутого "наизнанку" тела. \en Constructor of a reversed solid. \n
            DividedShell = 531, ///< \ru Строитель разделенной на части оболочки \en Constructor of a divided shell. 

            // \ru Строители листовых тел. \en Creators of sheet solids. 
            SheetMetalSolid = 601, ///< \ru Строитель листовой оболочки. \en Constructor of a sheet shell. 
            BendOverSegSolid = 602, ///< \ru Строитель оболочки со сгибом относительно отрезка. \en Constructor of a shell with a bend at the segment. 
            JogSolid = 603, ///< \ru Строитель оболочки с подсечкой. \en Constructor of a shell with a jog. 
            BendsByEdgesSolid = 604, ///< \ru Строитель оболочки со сгибом по ребру. \en Constructor of a shell with a bend at the edge. 
            BendUnbendSolid = 605, ///< \ru Строитель оболочки с выполненным сгибом или разгибом. \en Constructor of a shell with bending or unbending. 
            ClosedCornerSolid = 606, ///< \ru Строитель оболочки с замыканием угла. \en Constructor of a shell with corner enclosure. 
            StampSolid = 607, ///< \ru Строитель оболочки с штамповкой. \en Constructor of a shell with stamping. 
            SphericalStampSolid = 608, ///< \ru Строитель оболочки со сферической штамповкой. \en Constructor of a shell with spherical stamping. 
            BeadSolid = 609, ///< \ru Строитель оболочки с буртиком. \en Constructor of a shell with a bead. 
            JalousieSolid = 610, ///< \ru Строитель оболочки с жалюзи. \en Constructor of a shell with jalousie. 
            JointBendSolid = 611, ///< \ru Строитель оболочки с комбинированным сгибом. \en Constructor of a shell with a composite bend. 
            StitchedSolid = 612, ///< \ru Строитель оболочки, сшитой из нескольких граней или оболочек. \en Constructor of a shell stitched from several faces or shells. 
            RuledSolid = 613, ///< \ru Строитель линейчатой оболочки (обечайки). \en Constructor of a ruled shell (shell ring). 
            RestoredEdgesSolid = 614, ///< \ru Строитель листовой оболочки с восстановленными боковыми рёбрами. \en Constructor of a sheet shell with restored lateral edges. 
            SheetUnionSolid = 615, ///< \ru Строитель объединения двух листовых тел по торцу. \en Constructor of two sheet solids union by the side.
            StampRibSolid = 616, ///< \ru Строитель ребра жесткости листового тела. \en Constructor of sheet solid rib. \n
            BendAnySolid = 617, ///< \ru Строитель оболочки с выполненным сгибом нелистового тела. \en Constructor of a shell with bending of non-sheet solid
            SimplifyFlatSolid = 618, ///< \ru Строитель упрощения развёртки листового тела. \en Constructor of the sheet solid flat pattern simplification.
            UserStampSolid = 619, ///< \ru Строитель оболочки с штамповкой телом. \en Constructor of a shell with stamping by solid. 
            RemoveOperationSolid = 620, ///< \ru Строитель удаления операции листового тела. \en Constructor of removing of the sheet solid.
            BuildSheetMetalSolid = 621, ///< \ru Строитель листового тела по произвольному телу. \en Constructor of building sheet metal solid based on an arbitary solid.

            // \ru Строители оболочек. \en Creators of shells. 
            JoinShell = 701, ///< \ru Строитель оболочки соединения. \en Constructor of a joint shell. 
            MeshShell = 702, ///< \ru Строитель оболочки по поверхностям на сетках кривых. \en Constructor of a shell by surfaces constructed by the grid curves. 
            RuledShell = 703, ///< \ru Строитель оболочки по набору линейчатых поверхностей. \en Constructor of a shell by a set of ruled surfaces.   
            NurbsSurfacesShell = 704, ///< \ru Строитель NURBS-оболочки на двумерном массиве точек. \en Constructor of a NURBS-shell on a two-dimensional array of points. 
            TruncatedShell = 705, ///< \ru Строитель оболочки, усеченная геометрическими объектами. \en Constructor of a shell truncated by geometric objects. 
            ExtensionShell = 706, ///< \ru Строитель продолженной оболочки. \en Constructor of an extended shell. 
            PatchSetCreator = 707, ///< \ru Строитель заплатки по кривым на оболочке. \en Constructor of a patch by curves on the shell. 
            FilletShell = 708, ///< \ru Строитель оболочки грани соединения. \en Constructor of a shell of a fillet face. 
            MedianShell = 709, ///< \ru Строитель срединной оболочки тела. \en Constructor of a median shell of solid. \n
            SectionShell = 710, ///< \ru Строитель оболочки на поверхности переменного сечения. \en Constructor of the shell on swept mutable section surface. \n

            // \ru Строители других объектов (вставлять новые типы перед этим типом). \en Creators of the other objects (insert new types before this type). 
            AttributeProvider = 801, ///< \ru Поставщик атрибутов для примитивов оболочки. \en Attribute provider for the shell primitives. 

            FreeItem = 900, ///< \ru Тип для объектов, созданных пользователем. \en Type for the user-defined objects.

    }

    declare enum ModifyingType {
        Remove = 0, ///< \ru Удаление из тела выбранных граней с окружением. \en Removal of the specified faces with the neighborhood from a solid.
            Create, ///< \ru Создание тела из выбранных граней с окружением. \en Creation of a solid from the specified faces with the neighborhood.
            Action, ///< \ru Перемещение выбранных граней с окружением относительно оставшихся граней тела. \en Translation of the specified faces with neighborhood relative to the other faces of the solid.
            Offset, ///< \ru Замена выбранных граней тела эквидистантными гранями (перемещение по нормали, изменение радиуса). \en Replacement of the specified faces of a solid with the offset faces (translation along the normal, change of the radius).
            Fillet, ///< \ru Изменение радиусов выбранных граней скругления. \en Change of radii of the specified fillet faces.
            Supple, ///< \ru Замена выбранных граней тела деформируемыми гранями (превращение в NURBS для редактирования). \en Replacement of the specified faces of a solid with a deformable faces (conversion to NURBS for editing).
            Purify, ///< \ru Удаление из тела выбранных скруглений. \en Removal of the specified fillets from a solid.
            Merger, ///< \ru Слияние вершин ребёр и удаление рёбер. \en Merging vertices of edges and edges removal.
            United, ///< \ru Замена гладко стыкующихся граней одной гранью. \en Replacing smoothly joined faces with one face.
    }


    declare enum FacePropagation {
        None = 0, ///< \ru Без захвата. \en Without capture. 
            All = 1, ///< \ru Захват всех граней. \en Capture all faces. 
            SmoothlyJointedAlong = 2, ///< \ru Прохождение по гладкостыкующимся граням через сонаправленные ребра (прямолинейные). \en Movement on smooth-joint faces through collinear edges (straight). 
            SmoothlyJointedOrtho = 3, ///< \ru Прохождение по гладкостыкующимся граням через ортогональные ребра (прямолинейные.) \en Movement on smooth-joint faces through orthogonal edges (straight). 
            SmoothlyJointed = 4, ///< \ru Прохождение по гладкостыкующимся граням через прямолинейные ребра. \en Movement on smooth-joint faces through straight edges. //-V112 
    };

    declare enum PlaneType {

        Undefined = 0, ///< \ru Неизвестный объект. \en Unknown object. 
            PlaneItem = 1, ///< \ru Произвольный двумерный объект. \en Arbitrary two-dimensional object. \n 

            // \ru Типы кривых. \en Types of curves.
            Curve = 201, ///< \ru Произвольная кривая. \en Arbitrary curve. 
            Line = 202, ///< \ru Прямая. \en Line. 
            LineSegment = 203, ///< \ru Отрезок. \en Segment. 
            Arc = 204, ///< \ru Окружность или эллипс или дуга окружности или дуга эллипсa. \en Circle or ellipse or arc of circle or arc of ellipse. 
            Cosinusoid = 205, ///< \ru Кривая-косинусоида. \en Cosine curve. 
            PolyCurve = 206, ///< \ru Сплайновая кривая. \en Spline curve. 
            Polyline = 207, ///< \ru Полилиния. \en Polyline. 
            Bezier = 208, ///< \ru Безье-сплайн. \en Bezier spline. 
            Hermit = 209, ///< \ru Составной кубический сплайн Эрмита. \en Composite cubic Hermite spline. 
            Nurbs = 210, ///< \ru NURBS кривая. \en NURBS-curve. 
            CubicSpline = 211, ///< \ru Кубический сплайн. \en Cubic spline. 
            TrimmedCurve = 212, ///< \ru Усеченная кривая. \en Trimmed curve. 
            OffsetCurve = 213, ///< \ru Эквидистантная продленная кривая. \en Extended offset curve. 
            ReparamCurve = 214, ///< \ru Репараметризованная кривая. \en Reparametrized curve. 
            PointCurve = 215, ///< \ru Кривая - точка. \en Point-curve. 
            CharacterCurve = 216, ///< \ru Кривая, координатные функции которой заданы в символьном виде. \en Functionally defined curve. 
            ProjCurve = 217, ///< \ru Проекционная кривая. \en Projection curves. 
            SweptImageCurve = 218, ///< \ru Образ трехмерной кривой на поверхности при движении по направляющей. \en Image of three-dimensional curve on surface while moving along a guide curve. 
            TransformedCurve = 219, ///< \ru Трансформированная кривая. \en Transformed curve. 
            ConeBendedCurve = 220, ///< \ru Кривая в параметрической области конуса, соответствующая кривой в параметрической области плоскости при коническом сгибе. \en Curve in parametric region of a cone corresponding to curve in parametric region of plane at a conic bend. 
            ConeUnbendedCurve = 221, ///< \ru Кривая в параметрической области плоскости, соответствующая кривой в параметрической области конуса при коническом сгибе. \en Curve in parametric region of a plane corresponding to curve in parametric region of a cone at conic bend. 

            // \ru Типы сложных кривых. \en Types of complex curves.
            Contour = 301, ///< \ru Контур - составная кривая. \en Contour - composite curve. 
            ContourWithBreaks = 302, ///< \ru Контур с разрывами . \en Contour with discontinuities. 
            FreeCurve = 400, ///< \ru Тип для кривых, созданных пользователем. \en User-defined curve. \n 

            // \ru Типы сложных объектов. \en Types of complex objects. 
            Multiline = 401, ///< \ru Мультилиния. \en Multiline. 

            // \ru Типы других объектов. \en Types of other objects. 
            Region = 501, ///< \ru Регион. \en Region. 

            FreeItem = 600, ///< \ru Тип для объектов, созданных пользователем. \en Type for the user-defined objects.

    };

    declare enum RegionOperationType {
        Intersect = -2, ///< \ru Операция пересечение. \en Intersection operation. 
            Difference = -1, ///< \ru Операция разность. \en Subtraction operation. 
            Unknown = 0, ///< \ru Неопределенная операция. \en Undefined operation. 
            Union = 1, ///< \ru Операция объединение. \en Union operation. 
    };

    declare enum LocalSystemType3D {
        CartesianSystem, ///< \ru Декартова система координат. \en Cartesian coordinate system. 
        CylindricalSystem, ///< \ru Цилиндрическая система координат. \en Cylindrical coordinate system. 
        SphericalSystem, ///< \ru Сферическая система координат. \en Spherical coordinate system. 
    };

    declare enum ConnectingType {
        Fillet = 0, ///< \ru Скругление круговое на цилиндре. \en Circular fillet on the cylinder. 
            OnSurface = 1, ///< \ru Скругление пересечением цилиндра и общей поверхности сопрягаемых кривых. \en Fillet by intersection of the cylinder and common surface of the mating curves. 
            Spline = 2, ///< \ru Сопряжение сплайном. \en Conjugation by spline. 
            Double = 3, ///< \ru Сопряжение двумя дугами. \en Conjugation by two arcs. 
            Bridge = 4, ///< \ru Сопряжение кубической кривой. \en Conjugation by a cubic curve. 
    };

    declare enum ItemLocation {
        Undefined = -3, ///< \ru Не определялось. \en Not defined. 
            Unknown = -2, ///< \ru Не получилось определить. \en Failed to define. 
            OutOfItem = -1, ///< \ru Вне объекта. \en Outside the object. 
            OnItem = 0, ///< \ru На объекте (на границе). \en On the object (on the boundary). 
            InItem = 1, ///< \ru Внутри объекта. \en Inside the object. 
            ByItem = 2, ///< \ru Условно внутри объекта (для незамкнутых оболочек). \en Conditionally inside the object (for non-closed shells). 
    };

    declare enum Location {
        Undefined = ItemLocation.Unknown, ///< \ru Положение не определено, кривая разомкнута.  \en Failed to define, curve is not closed. 
            Outside = ItemLocation.OutOfItem, ///< \ru Точка снаружи замкнутой кривой. \en Outside the curve. 
            OnCurve = ItemLocation.OnItem, ///< \ru Точка на кривой. \en On the curve. 
            Inside = ItemLocation.InItem, ///< \ru Точка внутри замкнутой кривой. \en Inside the curve. 
    };

    declare enum ProcessState {
        Error = -3, ///< \ru Ошибка. \en Error. 
            Skip = -2, ///< \ru Пропущено. \en Has been skipped. 
            Stop = -1, ///< \ru Остановлено. \en Has been stopped. 
            Success = 0, ///< \ru Выполнено. \en Done. 
            SelfIntersect = 24, ///< \ru Выполнено. Объект самопересекается. \en Done. Self-intersecting object.
    };

    declare enum TopologyType {

        Undefined = 0, ///< \ru Неизвестный объект. \en Unknown object. 
            TopItem = 1, ///< \ru Топологический объект. \en A topological object. \n

            Vertex = 101, ///< \ru Вершина. \en A vertex. 

            Edge = 201, ///< \ru Ребро, проходящее по кривой. \en An edge passing along a curve. 
            CurveEdge = 202, ///< \ru Ребро, проходящее по кривой пересечения поверхностей. \en An edge passing along a surface intersection curve. 
            OrientedEdge = 203, ///< \ru Ориентированное ребро. \en Oriented edge. 

            Loop = 301, ///< \ru Цикл. \en A loop. 

            Face = 401, ///< \ru Грань. \en A face. \n

            FaceShell = 501, ///< \ru Множество граней. \en A set of faces. \n

            FreeItem = 600, ///< \ru Тип для объектов, созданных пользователем. \en Type for the user-defined objects.

    };

    declare enum SurfaceProlongType {
        None = 0x00, // 00000000  ///< \ru Не продлевать. \en Don't prolong. 
            Planar = 0x01, // 00000001  ///< \ru Плоские поверхности. \en Planar surfaces. 
            RevolutionAxis = 0x02, // 00000010  ///< \ru Поверхности вращения (вдоль оси). \en Revolution surfaces (along axis). 
            RevolutionAngle = 0x04, // 00000100  ///< \ru Поверхности вращения (по углу). \en Revolution surfaces (by angle). 
            Revolution = 0x06, // 00000110  ///< \ru Поверхности вращения. \en Revolution surfaces. 
            ExtrusionGeneratrix = 0x08, // 00001000  ///< \ru Поверхности выдавливания (по образующей). \en Extrusion surfaces (by generatrix).
            ExtrusionDistance = 0x10, // 00010000  ///< \ru Поверхности выдавливания (по расстоянию). \en Extrusion surfaces (by distance).
            Extrusion = 0x18, // 00011000  ///< \ru Поверхности выдавливания. \en Extrusion surfaces.
            Contour = 0x20, // 00100000  ///< \ru Продление секущего контура. \en Extension of the cutter contour.
            RuledAlongGeneratrix = 0x40, // 01000000  ///< \ru Линейчатая поверхность (вдоль образующей). \en Ruled Surface (along generatrix).
            RuledAcrossGeneratrix = 0x80, // 10000000  ///< \ru Линейчатая поверхность (поперек образующей). \en Ruled Surface (across generatrix).
            Ruled = 0xC0, // 11000000  ///< \ru Линейчатая поверхность. \en Ruled Surface.
    };

    declare enum SenseValue {
        BOTH = 0, ///< \ru Оба направления (неориентированный). \en Both directions (nonoriented). 
            FORWARD, ///< \ru Прямое направление. \en Forward direction. 
            BACK, ///< \ru Обратное направление. \en Backward direction. 
    };

    declare enum RefType {
        RefItem = 0, ///< \ru Некоторый объект. \en Some object. 
            PlaneItem, ///< \ru Двумерный геометрически объект. \en Two-dimensional geometric object. 
            SpaceItem, ///< \ru Трехмерный геометрический объект. \en Three-dimensional geometric object. 
            TopItem, ///< \ru Топологический объект. \en A topological object. 
            Creator, ///< \ru Строитель объекта. \en Object constructor 
            Attribute, ///< \ru Атрибут объекта. \en Attribute of an object.  
            Primitive, ///< \ru Элемент полигонального объекта. \en Element of polygonal object.
            // \ru В конец можно добавлять новые нужные \en It is possible to add new necessary ones to the end 
    };

    declare enum ConvResType {
        Success = 0, ///< \ru Успешное завершение.                 \en Success.
            Error, ///< \ru Ошибка в процессе конвертирования.   \en Error.
            UserCanceled, ///< \ru Процесс прерван пользователем.       \en Process interrupted by user.
            NoBody, ///< \ru Не найдено тел.                      \en No solids found.
            NoObjects, ///< \ru Не найдено объектов.                 \en No objects found.
            FileOpenError, ///< \ru Ошибка открытия файла.               \en File open error.
            FileWriteError, ///< \ru Ошибка записи файла.                 \en File write error.
            FileDeleteError, ///< \ru Ошибка удаления файла.               \en Could not delete file.
            ImpossibleReadAssembly, ///< \ru Не поддерживает работу со сборками.  \en Assemblies are not supported.
            LicenseNotFound, ///< \ru Ошибка получения лицензии.           \en License check failure.
            NotEnoughMemory, ///< \ru Недостаточно памяти.                 \en Not enough memory.
            UnknownExtension ///< \ru Неизвестное расширение файла.        \en Unknown file extenstion.
    };

    declare enum MLTipType {
        UndefTip, ///< \ru Законцовки нет. \en No tip. 
        LinearTip, ///< \ru Линейная законцовка. \en Linear tip. 
        ArcTip, ///< \ru Дуговая законцовка. \en Arc tip. 
        PolylineTip, ///< \ru Ломаная законцовка. \en Polyline tip. 
        ObliqueTip, ///< \ru Наклонная законцовка. \en Inclined tip. 
        // \ru ДОБАВЛЕНИЕ ТОЛЬКО В КОНЕЦ!!! \en ADDITION ONLY TO THE END!!! 
    };

    declare enum SweptWay {
        scalarValue = -2, ///< \ru Выдавить на заданную глубину / вращать на заданный угол. \en Extrude to a given depth / rotate by a given angle.
            shell = -1, ///< \ru До ближайшего объекта (тела). \en To the nearest object (solid).
            surface = 0, ///< \ru До поверхности. \en To the surface.
    };

    declare enum MatingType {
        // \ru Не менять номера, тип пишется и читается, новые добавлять в конец \en Do not change the numbers. Type is written and read. Append new types to the end 
        None = -1, ///< \ru Без сопряжений. \en Without conjugations. 
            Position = 0, ///< \ru Соединение по позиции      (эквивалентно tt_SmoothG0). \en The connection by the position (equivalent to tt_SmoothG0). 
            Tangent = 1, ///< \ru Соединение по касательной  (эквивалентно tt_SmoothG1). \en Tangential connection  (equivalent to tt_SmoothG1). 
            Normal = 2, ///< \ru Соединение перпендикулярно (эквивалентно tt_SmoothG1). \en Perpendicular connection (equivalent to tt_SmoothG1). 
            SmoothG2 = 3, ///< \ru Гладкое соединение по первой производной касательной (по кривизне). \en The smooth connection by the first derivative of the tangent (the curvature). 
            SmoothG3 = 4, ///< \ru Гладкое сопряжение по второй производной касательной.               \en The smooth conjugation by the second derivative of the tangent.                    //-V112 
    };

    declare enum ExtensionType {
        same = 0, ///< \ru По той же поверхности. \en Along the same surface.
            tangent, ///< \ru По касательной к краю. \en Along tangent to the edge.
            direction, ///< \ru По направлению. \en Along the direction.
    };

    declare enum ExtensionWay {
        distance = -2, ///< \ru Продолжить на расстояние. \en Prolong on the distance.
            vertex = -1, ///< \ru Продолжить до вершины. \en Prolong to the vertex.
            shell = 0, ///< \ru Продолжить до оболочки. \en Prolong to the shell.
    };

    declare enum LateralKind {
        normal = 0, ///< \ru По нормали к кромке. \en Along the normal to boundary.
            prolong, ///< \ru Продлить исходные рёбра. \en Extend the initial edges.
    };


    declare enum HoleType {
        BorerValues = 0, ///< \ru Отверстие. \en Hole.
            PocketValues = 1, ///< \ru Карман. \en Pocket.
            SlotValues = 2, ///< \ru Паз. \en Slot.
    }

    declare enum SlotType {
        //       ________         *
        //       |      |         *
        //       +------+         *
        //        \    /          *
        //          --            *
        BallEnd = 0, ///< \ru Цилиндрический в донной части. \en Cylindrical in the bottom part.
            //       ________         *
            //       |      |         *
            //       |      |         *
            //       |      |         *
            //       +------+         *
            Rectangular = 1, ///< \ru Прямоугольный. \en Rectangular.
            //       ________         *
            //       |      |         *
            //    +--+------+--+      *
            //    |            |      *
            //    +------------+      *
            TShaped = 2, ///< \ru T-образный. \en T-shaped.
            //       ________         *
            //      /        \        *
            //     /          \       *
            //    /            \      *
            //   +--------------+     *
            DoveTail = 3, ///< \ru Ласточкин хвост. \en Dovetail
    };

    declare enum ChangedType {
        Unchanged = 0x0000, ///< \ru Без изменений. \en Unchanged. 
            Modified = 0x0001, ///< \ru Изменен. \en Modified. 
            Created = 0x0002, ///< \ru Создан новый. \en Created (new). 
            Transformed = 0x0004, ///< \ru Трансформирован. \en Transformed. 
            Reoriented = 0x0008, ///< \ru Переориентирован. \en Reoriented. 
            Deleted = 0x0010, ///< \ru Удален (элемент объекта или связь). \en Deleted (object's element or link). 
            Truncated = 0x0020, ///< \ru Разрезан, усечен, продлен. \en Cut, truncated or extended.
            Merged = 0x0040, ///< \ru Объединен или сшито. \en Merged or sewn (stitched).
            Replaced = 0x0080, ///< \ru Заменен. \en Replaced. 
            Added = 0x0100, ///< \ru Добавлен или вставлен (элемент объекта). \en Added or inserted (object's element). 
            Renamed = 0x0200, ///< \ru Переименован. \en Renamed.
    };

}