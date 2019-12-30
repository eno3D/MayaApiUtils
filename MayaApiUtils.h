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
#include <maya/MStatus.h>

namespace MayaApiUtils {
    MObject getParent(MObject obj, int i, MStatus *status = nullptr);

    MObject getChild(MObject obj, int i, MStatus *status = nullptr);

    MPlug getTranslate(MObject obj, MStatus *status = nullptr);

    MPlug getTranslateX(MObject obj, MStatus *status = nullptr);

    MPlug getTranslateY(MObject obj, MStatus *status = nullptr);

    MPlug getTranslateZ(MObject obj, MStatus *status = nullptr);

    MPlug getRotate(MObject obj, MStatus *status = nullptr);

    MPlug getRotateX(MObject obj, MStatus *status = nullptr);

    MPlug getRotateY(MObject obj, MStatus *status = nullptr);

    MPlug getRotateZ(MObject obj, MStatus *status = nullptr);

    MPlug getScale(MObject obj, MStatus *status = nullptr);

    MPlug getScaleX(MObject obj, MStatus *status = nullptr);

    MPlug getScaleY(MObject obj, MStatus *status = nullptr);

    MPlug getScaleZ(MObject obj, MStatus *status = nullptr);

    MPlug getMatrix(MObject obj, MStatus *status = nullptr);

    MPlug getInverseMatrix(MObject obj, MStatus *status = nullptr);

    MPlug getXformMatrix(MObject obj, MStatus *status = nullptr);

    MPlug getOffsetParentMatrix(MObject obj, MStatus *status = nullptr);

    MPlug getWorldMatrix(MObject obj, int i, MStatus *status = nullptr);

    MPlug getWorldInverseMatrix(MObject obj, int i, MStatus *status = nullptr);

    MPlug getParentMatrix(MObject obj, int i, MStatus *status = nullptr);

    MPlug getParentInverseMatrix(MObject obj, int i, MStatus *status = nullptr);

    MVector plugToVector(const MPlug &plug, MStatus *status = nullptr);

    MVector translateFromMatrix(const MMatrix &matrix, MStatus *status = nullptr);

    MVector rotateFromMatrix(const MMatrix &matrix, MStatus *status = nullptr);

    MVector scaleFromMatrix(const MMatrix &matrix, MStatus *status = nullptr);

    MVector shearFromMatrix(const MMatrix &matrix, MStatus *status = nullptr);

    MMatrix plugToMatrix(const MPlug &plug, MStatus *status = nullptr);

    MMatrix composeMatrix(const MVector &translate, const MVector &rotate, const MVector &scale, const MVector &shear,
                          MStatus *status = nullptr);

    MEulerRotation rotateFromMatrixAsEuler(const MMatrix &matrix, MStatus *status = nullptr);

    MQuaternion rotateFromMatrixAsQuaternion(const MMatrix &matrix, MStatus *status = nullptr);
}

#endif
