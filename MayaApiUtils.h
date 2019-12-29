#ifndef MAYA_API_UTILS_GUIDE
#define MAYA_API_UTILS_GUIDE

#include <maya/MFn.h>
#include <maya/MObject.h>
#include <maya/MMatrix.h>
#include <maya/MVector.h>
#include <maya/MEulerRotation.h>
#include <maya/MQuaternion.h>
#include <maya/MPlug.h>
#include <maya/MFnDependencyNode.h>
#include <maya/MFnDagNode.h>
#include <maya/MFnMatrixData.h>
#include <maya/MTransformationMatrix.h>

namespace MayaApiUtils {
    MObject getParent(MObject obj, int i, MStatus &status);

    MObject getChild(MObject obj, int i, MStatus &status);

    MPlug getTranslate(MObject obj, MStatus &status);

    MPlug getTranslateX(MObject obj, MStatus &status);

    MPlug getTranslateY(MObject obj, MStatus &status);

    MPlug getTranslateZ(MObject obj, MStatus &status);

    MPlug getRotate(MObject obj, MStatus &status);

    MPlug getRotateX(MObject obj, MStatus &status);

    MPlug getRotateY(MObject obj, MStatus &status);

    MPlug getRotateZ(MObject obj, MStatus &status);

    MPlug getScale(MObject obj, MStatus &status);

    MPlug getScaleX(MObject obj, MStatus &status);

    MPlug getScaleY(MObject obj, MStatus &status);

    MPlug getScaleZ(MObject obj, MStatus &status);

    MPlug getMatrix(MObject obj, MStatus &status);

    MPlug getInverseMatrix(MObject obj, MStatus &status);

    MPlug getXformMatrix(MObject obj, MStatus &status);

    MPlug getOffsetParentMatrix(MObject obj, MStatus &status);

    MPlug getWorldMatrix(MObject obj, int i, MStatus &status);

    MPlug getWorldInverseMatrix(MObject obj, int i, MStatus &status);

    MPlug getParentMatrix(MObject obj, int i, MStatus &status);

    MPlug getParentInverseMatrix(MObject obj, int i, MStatus &status);

    MVector plugToVector(const MPlug &plug, MStatus &status);

    MVector translateFromMatrix(const MMatrix &matrix, MStatus &status);

    MVector rotateFromMatrix(const MMatrix &matrix, MStatus &status);

    MVector scaleFromMatrix(const MMatrix &matrix, MStatus &status);

    MVector shearFromMatrix(const MMatrix &matrix, MStatus &status);

    MMatrix plugToMatrix(const MPlug &plug, MStatus &status);

    MMatrix composeMatrix(const MVector &translate, const MVector &rotate, const MVector &scale, const MVector &shear,
                          MStatus &status);
}

#endif
