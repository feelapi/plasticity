// This is a generated file, modify: generate/templates/index.cc

#include <napi.h>

#include "./include/RefItem.h"

#include "./include/Function.h"

#include "./include/CubicFunction.h"

#include "./include/AttributeContainer.h"

#include "./include/SpaceItem.h"

#include "./include/ControlData3D.h"

#include "./include/Creator.h"

#include "./include/Transactions.h"

#include "./include/Model.h"

#include "./include/Item.h"

#include "./include/TopItem.h"

#include "./include/Path.h"

#include "./include/Rect.h"

#include "./include/Cube.h"

#include "./include/BooleanFlags.h"

#include "./include/SurfaceOffsetCurveParams.h"

#include "./include/Surface.h"

#include "./include/Solid.h"

#include "./include/Assembly.h"

#include "./include/RegTransform.h"

#include "./include/PlaneItem.h"

#include "./include/Curve.h"

#include "./include/PolyCurve.h"

#include "./include/Hermit.h"

#include "./include/CubicSpline.h"

#include "./include/Polyline.h"

#include "./include/Contour.h"

#include "./include/ContourWithBreaks.h"

#include "./include/_PlanarCheckParams.h"

#include "./include/Rect1D.h"

#include "./include/Curve3D.h"

#include "./include/Rect2D.h"

#include "./include/TrimmedCurve3D.h"

#include "./include/TrimmedCurve.h"

#include "./include/ReparamCurve3D.h"

#include "./include/ReparamCurve.h"

#include "./include/BridgeCurve3D.h"

#include "./include/OffsetCurve3D.h"

#include "./include/OffsetCurve.h"

#include "./include/SurfaceCurve.h"

#include "./include/Spiral.h"

#include "./include/ConeSpiral.h"

#include "./include/CurveSpiral.h"

#include "./include/PlaneCurve.h"

#include "./include/Contour3D.h"

#include "./include/Plane.h"

#include "./include/CartPoint.h"

#include "./include/CartPoint3D.h"

#include "./include/ElementarySurface.h"

#include "./include/TorusSurface.h"

#include "./include/FaceShell.h"

#include "./include/EdgeFacesIndexes.h"

#include "./include/ShellHistory.h"

#include "./include/ElementarySolid.h"

#include "./include/SphereSurface.h"

#include "./include/Instance.h"

#include "./include/SpaceInstance.h"

#include "./include/PlaneInstance.h"

#include "./include/Region.h"

#include "./include/Direction.h"

#include "./include/Line.h"

#include "./include/LineSegment.h"

#include "./include/Line3D.h"

#include "./include/Vector.h"

#include "./include/Vector3D.h"

#include "./include/Axis3D.h"

#include "./include/Placement.h"

#include "./include/Placement3D.h"

#include "./include/FormNote.h"

#include "./include/FloatAxis3D.h"

#include "./include/FloatPoint3D.h"

#include "./include/Mesh.h"

#include "./include/RegDuplicate.h"

#include "./include/AutoRegDuplicate.h"

#include "./include/NameMaker.h"

#include "./include/SNameMaker.h"

#include "./include/StepData.h"

#include "./include/Name.h"

#include "./include/Matrix.h"

#include "./include/Homogeneous3D.h"

#include "./include/Matrix3D.h"

#include "./include/TopologyItem.h"

#include "./include/Edge.h"

#include "./include/SurfaceIntersectionCurve.h"

#include "./include/CurveEdge.h"

#include "./include/ContourOnSurface.h"

#include "./include/ContourOnPlane.h"

#include "./include/OrientedEdge.h"

#include "./include/Loop.h"

#include "./include/Face.h"

#include "./include/Vertex.h"

#include "./include/_ModifyValues.h"

#include "./include/_TransformValues.h"

#include "./include/_SmoothValues.h"

#include "./include/ShellCuttingParams.h"

#include "./include/EdgeFunction.h"

#include "./include/FunctionFactory.h"

#include "./include/CharacterCurve.h"

#include "./include/CharacterCurve3D.h"

#include "./include/Arc3D.h"

#include "./include/Arc.h"

#include "./include/PolyCurve3D.h"

#include "./include/Polyline3D.h"

#include "./include/Bezier3D.h"

#include "./include/Bezier.h"

#include "./include/CubicSpline3D.h"

#include "./include/Hermit3D.h"

#include "./include/Nurbs3D.h"

#include "./include/Nurbs.h"

#include "./include/LineSegment3D.h"

#include "./include/PointFrame.h"

#include "./include/EdgeSequence.h"

#include "./include/MergingFlags.h"

#include "./include/_SweptValues.h"

#include "./include/_LoftedValues.h"

#include "./include/_EvolutionValues.h"

#include "./include/SweptSide.h"

#include "./include/_SweptValuesAndSides.h"

#include "./include/_RevolutionValues.h"

#include "./include/_ExtrusionValues.h"

#include "./include/SweptData.h"

#include "./include/RegionBooleanParams.h"

#include "./include/SmoothSolid.h"

#include "./include/SimpleCreator.h"

#include "./include/CurveSweptSolid.h"

#include "./include/CurveExtrusionSolid.h"

#include "./include/CurveRevolutionSolid.h"

#include "./include/CurveEvolutionSolid.h"

#include "./include/CurveLoftedSolid.h"

#include "./include/BooleanSolid.h"

#include "./include/CuttingSolid.h"

#include "./include/SymmetrySolid.h"

#include "./include/HoleSolid.h"

#include "./include/ChamferSolid.h"

#include "./include/FilletSolid.h"

#include "./include/ShellSolid.h"

#include "./include/DraftSolid.h"

#include "./include/RibSolid.h"

#include "./include/SplitShell.h"

#include "./include/NurbsBlockSolid.h"

#include "./include/FaceModifiedSolid.h"

#include "./include/ModifiedNurbsItem.h"

#include "./include/TransformedSolid.h"

#include "./include/ThinShellCreator.h"

#include "./include/UnionSolid.h"

#include "./include/DetachSolid.h"

#include "./include/DuplicationSolid.h"

#include "./include/ReverseCreator.h"

#include "./include/TransformationMaker.h"

#include "./include/ExtensionShell.h"

#include "./include/Graph.h"

#include "./include/CrossPoint.h"

#include "./include/PointOnCurve.h"

#include "./include/WireFrame.h"

#include "./include/Primitive.h"

#include "./include/Grid.h"

#include "./include/Polygon3D.h"

#include "./include/_ConvConvertorProperty3D.h"

#include "./include/_C3dModelDocument.h"

#include "./include/_C3DPmiToItem.h"

#include "./include/Multiline.h"

#include "./include/VertexOfMultilineInfo.h"

#include "./include/MLTipParams.h"

#include "./include/ShellsIntersectionData.h"

#include "./include/ShellsDistanceData.h"

#include "./include/SpatialOffsetCurveParams.h"

#include "./include/_DuplicationValues.h"

#include "./include/_DuplicationMeshValues.h"

#include "./include/_ExtensionValues.h"

#include "./include/_HoleValues.h"

#include "./include/_SlotValues.h"

#include "./include/_SolidDuplicate.h"

#include "./include/_SolidPool.h"

#include "./include/Enabler.h"

#include "./include/Action.h"

#include "./include/ActionSurface.h"

#include "./include/ActionSurfaceCurve.h"

#include "./include/ActionSolid.h"

#include "./include/ActionPoint.h"

#include "./include/ActionDirect.h"

#include "./include/ActionPhantom.h"

#include "./include/ActionCurve.h"

#include "./include/ActionCurve3D.h"

#include "./include/ActionRegion.h"

#include "./include/ActionMesh.h"

#include "./include/ActionShell.h"

#include "./include/Mutex.h"

#include "./include/ContourGraph.h"

#include "./include/CurveEnvelope.h"

#include "./include/CurveTangent.h"

#include "./include/CurveUtil.h"

#include "./include/MeshGrid.h"

#include "./include/Writer.h"

#include "./include/Registrator.h"

#include "./include/TriFace.h"

#include "./include/Conversion.h"

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    Napi::ObjectReference *ref = new Napi::ObjectReference();
    *ref = Napi::Persistent(exports);
    env.SetInstanceData<Napi::ObjectReference>(ref);

    RefItem::Init(env, exports);
    Function::Init(env, exports);
    CubicFunction::Init(env, exports);
    AttributeContainer::Init(env, exports);
    SpaceItem::Init(env, exports);
    ControlData3D::Init(env, exports);
    Creator::Init(env, exports);
    Transactions::Init(env, exports);
    Model::Init(env, exports);
    Item::Init(env, exports);
    TopItem::Init(env, exports);
    Path::Init(env, exports);
    Rect::Init(env, exports);
    Cube::Init(env, exports);
    BooleanFlags::Init(env, exports);
    SurfaceOffsetCurveParams::Init(env, exports);
    Surface::Init(env, exports);
    Solid::Init(env, exports);
    Assembly::Init(env, exports);
    RegTransform::Init(env, exports);
    PlaneItem::Init(env, exports);
    Curve::Init(env, exports);
    PolyCurve::Init(env, exports);
    Hermit::Init(env, exports);
    CubicSpline::Init(env, exports);
    Polyline::Init(env, exports);
    Contour::Init(env, exports);
    ContourWithBreaks::Init(env, exports);
    _PlanarCheckParams::Init(env, exports);
    Rect1D::Init(env, exports);
    Curve3D::Init(env, exports);
    Rect2D::Init(env, exports);
    TrimmedCurve3D::Init(env, exports);
    TrimmedCurve::Init(env, exports);
    ReparamCurve3D::Init(env, exports);
    ReparamCurve::Init(env, exports);
    BridgeCurve3D::Init(env, exports);
    OffsetCurve3D::Init(env, exports);
    OffsetCurve::Init(env, exports);
    SurfaceCurve::Init(env, exports);
    Spiral::Init(env, exports);
    ConeSpiral::Init(env, exports);
    CurveSpiral::Init(env, exports);
    PlaneCurve::Init(env, exports);
    Contour3D::Init(env, exports);
    Plane::Init(env, exports);
    CartPoint::Init(env, exports);
    CartPoint3D::Init(env, exports);
    ElementarySurface::Init(env, exports);
    TorusSurface::Init(env, exports);
    FaceShell::Init(env, exports);
    EdgeFacesIndexes::Init(env, exports);
    ShellHistory::Init(env, exports);
    ElementarySolid::Init(env, exports);
    SphereSurface::Init(env, exports);
    Instance::Init(env, exports);
    SpaceInstance::Init(env, exports);
    PlaneInstance::Init(env, exports);
    Region::Init(env, exports);
    Direction::Init(env, exports);
    Line::Init(env, exports);
    LineSegment::Init(env, exports);
    Line3D::Init(env, exports);
    Vector::Init(env, exports);
    Vector3D::Init(env, exports);
    Axis3D::Init(env, exports);
    Placement::Init(env, exports);
    Placement3D::Init(env, exports);
    FormNote::Init(env, exports);
    FloatAxis3D::Init(env, exports);
    FloatPoint3D::Init(env, exports);
    Mesh::Init(env, exports);
    RegDuplicate::Init(env, exports);
    AutoRegDuplicate::Init(env, exports);
    NameMaker::Init(env, exports);
    SNameMaker::Init(env, exports);
    StepData::Init(env, exports);
    Name::Init(env, exports);
    Matrix::Init(env, exports);
    Homogeneous3D::Init(env, exports);
    Matrix3D::Init(env, exports);
    TopologyItem::Init(env, exports);
    Edge::Init(env, exports);
    SurfaceIntersectionCurve::Init(env, exports);
    CurveEdge::Init(env, exports);
    ContourOnSurface::Init(env, exports);
    ContourOnPlane::Init(env, exports);
    OrientedEdge::Init(env, exports);
    Loop::Init(env, exports);
    Face::Init(env, exports);
    Vertex::Init(env, exports);
    _ModifyValues::Init(env, exports);
    _TransformValues::Init(env, exports);
    _SmoothValues::Init(env, exports);
    ShellCuttingParams::Init(env, exports);
    EdgeFunction::Init(env, exports);
    FunctionFactory::Init(env, exports);
    CharacterCurve::Init(env, exports);
    CharacterCurve3D::Init(env, exports);
    Arc3D::Init(env, exports);
    Arc::Init(env, exports);
    PolyCurve3D::Init(env, exports);
    Polyline3D::Init(env, exports);
    Bezier3D::Init(env, exports);
    Bezier::Init(env, exports);
    CubicSpline3D::Init(env, exports);
    Hermit3D::Init(env, exports);
    Nurbs3D::Init(env, exports);
    Nurbs::Init(env, exports);
    LineSegment3D::Init(env, exports);
    PointFrame::Init(env, exports);
    EdgeSequence::Init(env, exports);
    MergingFlags::Init(env, exports);
    _SweptValues::Init(env, exports);
    _LoftedValues::Init(env, exports);
    _EvolutionValues::Init(env, exports);
    SweptSide::Init(env, exports);
    _SweptValuesAndSides::Init(env, exports);
    _RevolutionValues::Init(env, exports);
    _ExtrusionValues::Init(env, exports);
    SweptData::Init(env, exports);
    RegionBooleanParams::Init(env, exports);
    SmoothSolid::Init(env, exports);
    SimpleCreator::Init(env, exports);
    CurveSweptSolid::Init(env, exports);
    CurveExtrusionSolid::Init(env, exports);
    CurveRevolutionSolid::Init(env, exports);
    CurveEvolutionSolid::Init(env, exports);
    CurveLoftedSolid::Init(env, exports);
    BooleanSolid::Init(env, exports);
    CuttingSolid::Init(env, exports);
    SymmetrySolid::Init(env, exports);
    HoleSolid::Init(env, exports);
    ChamferSolid::Init(env, exports);
    FilletSolid::Init(env, exports);
    ShellSolid::Init(env, exports);
    DraftSolid::Init(env, exports);
    RibSolid::Init(env, exports);
    SplitShell::Init(env, exports);
    NurbsBlockSolid::Init(env, exports);
    FaceModifiedSolid::Init(env, exports);
    ModifiedNurbsItem::Init(env, exports);
    TransformedSolid::Init(env, exports);
    ThinShellCreator::Init(env, exports);
    UnionSolid::Init(env, exports);
    DetachSolid::Init(env, exports);
    DuplicationSolid::Init(env, exports);
    ReverseCreator::Init(env, exports);
    TransformationMaker::Init(env, exports);
    ExtensionShell::Init(env, exports);
    Graph::Init(env, exports);
    CrossPoint::Init(env, exports);
    PointOnCurve::Init(env, exports);
    WireFrame::Init(env, exports);
    Primitive::Init(env, exports);
    Grid::Init(env, exports);
    Polygon3D::Init(env, exports);
    _ConvConvertorProperty3D::Init(env, exports);
    _C3dModelDocument::Init(env, exports);
    _C3DPmiToItem::Init(env, exports);
    Multiline::Init(env, exports);
    VertexOfMultilineInfo::Init(env, exports);
    MLTipParams::Init(env, exports);
    ShellsIntersectionData::Init(env, exports);
    ShellsDistanceData::Init(env, exports);
    SpatialOffsetCurveParams::Init(env, exports);
    _DuplicationValues::Init(env, exports);
    _DuplicationMeshValues::Init(env, exports);
    _ExtensionValues::Init(env, exports);
    _HoleValues::Init(env, exports);
    _SlotValues::Init(env, exports);
    _SolidDuplicate::Init(env, exports);
    _SolidPool::Init(env, exports);
    Enabler::Init(env, exports);
    Action::Init(env, exports);
    ActionSurface::Init(env, exports);
    ActionSurfaceCurve::Init(env, exports);
    ActionSolid::Init(env, exports);
    ActionPoint::Init(env, exports);
    ActionDirect::Init(env, exports);
    ActionPhantom::Init(env, exports);
    ActionCurve::Init(env, exports);
    ActionCurve3D::Init(env, exports);
    ActionRegion::Init(env, exports);
    ActionMesh::Init(env, exports);
    ActionShell::Init(env, exports);
    Mutex::Init(env, exports);
    ContourGraph::Init(env, exports);
    CurveEnvelope::Init(env, exports);
    CurveTangent::Init(env, exports);
    CurveUtil::Init(env, exports);
    MeshGrid::Init(env, exports);
    Writer::Init(env, exports);
    Registrator::Init(env, exports);
    TriFace::Init(env, exports);
    Conversion::Init(env, exports);

    return exports;
}

// Register and initialize native add-on
NODE_API_MODULE(c3d, Init)