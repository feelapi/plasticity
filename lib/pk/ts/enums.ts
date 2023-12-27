import pk from '../../../build/Release/pk.node';

export enum BodyType {
    Solid = 5601, SpaceInstance = 5604, SheetBody = 5602, PlaneInstance = 5610, Curve3D, Surface,
    Hermit = 13601, Polyline = 8005,
}

export enum FaceGrowType {
    Auto = 24121, Moving = 24122, Fixed = 24123, None = 24124
}

export enum FaceTransformStep {
    None = 24080, Smooth = 24081, All = 24082, NotCoincident = 24083, SmoothSite = 24084
}

export enum OperationType {
    Intersection = 15901, Difference = 15902, Union = 15903, Merge = 15904
}

export enum FaceHealType {
    None = 18080, Cap = 18081, GrowFromChild = 18082, GrowFromParent = 18083, Shrink = 18084,
}

export enum BlendIdentifyType {
    Within = 22240, ExcludingChain = 22241, IncludingChain = 22242, MaxChain = 22243, Dependent = 22244
}

export enum FacetIncrementalType {
    None = 22560, Refresh = 22562, Yes = 22563
}

export enum SweepAlignmentType {
    Normal = 21560, Parallel = 21561
}

export enum VertexGapFillType {
    Round = 21220, Linear = 21221, Natural = 21222
}

export enum BooleanResult {
    NoOverlap = 21651, Success = 21650
}

export enum ProjectionMethod {
    Normal = 26520, Vector = 26521
}

export enum LoftClampType {
    None = 21540, Vector = 21541, Face = 21542, Planar = 21543
}

export enum LoftCurvatureType {
    Natural = 21530, Unconstrained = 21531, Clamped = 21532
}

export enum ExtensionShape {
    Linear = 22750, Soft = 22751, Reflective = 22752, Natural = 22753, Arc = 22754
}

export enum BodyExtensionType {
    Distance = 22760, Target = 22761
}

export enum FillHolePreferenceType {
    Smooth = 22370, NonSmooth = 22373, PlaneOnly = 22372, PreferPlane = 22371
}

export enum ContinuityType {
    C1 = 23150, C2 = 23151, C3 = 23152, G1 = 23153, G2 = 23154, G3 = 23155, G0 = 23156
}

export enum FillHoleInternalSmoothnessType {
    Sharp = 24910, Smooth = 24911
}

export enum BlendShape {
    Conic = 22201, G2 = 22202, Chamfer = 22203, Chordal = 22204
}

export enum ClashType {
    None = 0, AinB = 1, BinA = 2, Exists = 3, AbutNoClass = 4, AbutBInA = 5, AbutBOutA = 6, Interfere = 7
}

Object.assign(pk, {
    BodyType,
    OperationType,
    FaceGrowType,
    FaceTransformStep,
    BlendIdentifyType,
    FaceHealType,
    FacetIncrementalType,
    SweepAlignmentType,
    VertexGapFillType,
    BooleanResult,
    ProjectionMethod,
    LoftClampType,
    LoftCurvatureType,
    ExtensionShape,
    BodyExtensionType,
    FillHolePreferenceType,
    ContinuityType,
    FillHoleInternalSmoothnessType,
    BlendShape,
    ClashType,
});

///

const Origin = new pk.Vector(0, 0, 0);
const X = new pk.Vector(1, 0, 0);
const Y = new pk.Vector(0, 1, 0);
const Z = new pk.Vector(0, 0, 1);
const _X = new pk.Vector(-1, 0, 0);
const _Y = new pk.Vector(0, -1, 0);
const _Z = new pk.Vector(0, 0, -1);
const XY = new pk.Basis(Origin, Z, X);
const YZ = new pk.Basis(Origin, X, Y)
const XZ = new pk.Basis(Origin, Y, Z);

Object.assign(pk, {
    X, Y, Z, _X, _Y, _Z, Origin, XY, YZ, XZ
});