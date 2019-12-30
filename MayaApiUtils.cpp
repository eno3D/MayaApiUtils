#include "MayaApiUtils.h"

MObject MayaApiUtils::getParent(MObject obj, int i, MStatus *status) {
    MFnDagNode fnDagNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MObject();
    }

    MObject parent = fnDagNode.parent(i, status);

    return parent;
}

MObject MayaApiUtils::getChild(MObject obj, int i, MStatus *status) {
    MFnDagNode fnDagNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MObject();
    }

    MObject child = fnDagNode.child(i, status);

    return child;
}

MPlug MayaApiUtils::getTranslate(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("translate", false, status);

    return plug;
}

MPlug MayaApiUtils::getTranslateX(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("translateX", false, status);

    return plug;
}

MPlug MayaApiUtils::getTranslateY(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("translateY", false, status);

    return plug;
}

MPlug MayaApiUtils::getTranslateZ(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("translateZ", false, status);

    return plug;
}

MPlug MayaApiUtils::getRotate(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("rotate", false, status);

    return plug;
}

MPlug MayaApiUtils::getRotateX(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("rotateX", false, status);

    return plug;
}

MPlug MayaApiUtils::getRotateY(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("rotateY", false, status);

    return plug;
}

MPlug MayaApiUtils::getRotateZ(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("rotateZ", false, status);

    return plug;
}

MPlug MayaApiUtils::getScale(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("scale", false, status);

    return plug;
}

MPlug MayaApiUtils::getScaleX(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("scaleX", false, status);

    return plug;
}

MPlug MayaApiUtils::getScaleY(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("scaleY", false, status);

    return plug;
}

MPlug MayaApiUtils::getScaleZ(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("scaleZ", false, status);

    return plug;
}

MPlug MayaApiUtils::getMatrix(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("matrix", false, status);

    return plug;
}

MPlug MayaApiUtils::getInverseMatrix(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("inverseMatrix", false, status);

    return plug;
}

MPlug MayaApiUtils::getXformMatrix(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("xformMatrix", false, status);

    return plug;
}

MPlug MayaApiUtils::getOffsetParentMatrix(MObject obj, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("offsetParentMatrix", false, status);

    return plug;
}

MPlug MayaApiUtils::getWorldMatrix(MObject obj, int i, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("worldMatrix", false, status).elementByLogicalIndex(i);

    return plug;
}

MPlug MayaApiUtils::getWorldInverseMatrix(MObject obj, int i, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("worldInverseMatrix", false, status).elementByLogicalIndex(i);

    return plug;
}

MPlug MayaApiUtils::getParentMatrix(MObject obj, int i, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("parentMatrix", false, status).elementByLogicalIndex(i);

    return plug;
}

MPlug MayaApiUtils::getParentInverseMatrix(MObject obj, int i, MStatus *status) {
    MFnDagNode fnDepNode(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MPlug();
    }

    MPlug plug = fnDepNode.findPlug("parentInverseMatrix", false, status).elementByLogicalIndex(i);

    return plug;
}

MVector MayaApiUtils::plugToVector(const MPlug &plug, MStatus *status) {
    if (!plug.isCompound() || plug.numChildren() != 3) {
        *status = MStatus::kInvalidParameter;

        return MVector();
    }
    MVector vec;

    vec.x = plug.child(0, status).asDouble();
    vec.y = plug.child(1, status).asDouble();
    vec.z = plug.child(2, status).asDouble();

    return vec;
}

MVector MayaApiUtils::translateFromMatrix(const MMatrix &matrix, MStatus *status) {
    MTransformationMatrix transMat(matrix);
    MVector vec = transMat.getTranslation(MSpace::kTransform, status);

    return vec;
}

MVector MayaApiUtils::rotateFromMatrix(const MMatrix &matrix, MStatus *status) {
    MTransformationMatrix transMat(matrix);
    MEulerRotation rot = transMat.eulerRotation();
    MVector vec = rot.asVector();

    if (status != nullptr) {
        *status = MStatus::kSuccess;
    }

    return vec;
}

MVector MayaApiUtils::scaleFromMatrix(const MMatrix &matrix, MStatus *status) {
    MTransformationMatrix transMat(matrix);

    double scale[3];
    *status = transMat.getScale(scale, MSpace::kTransform);

    MVector vec;
    vec.x = scale[0];
    vec.y = scale[1];
    vec.z = scale[2];

    return vec;
}

MVector MayaApiUtils::shearFromMatrix(const MMatrix &matrix, MStatus *status) {
    MTransformationMatrix transMat(matrix);

    double shear[3];
    *status = transMat.getShear(shear, MSpace::kTransform);

    MVector vec;
    vec.x = shear[0];
    vec.y = shear[1];
    vec.z = shear[2];

    return vec;
}

MMatrix MayaApiUtils::plugToMatrix(const MPlug &plug, MStatus *status) {
    MObject obj = plug.asMObject();

    MFnMatrixData fnMatData(obj, status);

    if (status != nullptr && *status != MStatus::kSuccess) {
        return MMatrix();
    }
    const MMatrix &mat = fnMatData.matrix();

    return mat;
}

MMatrix MayaApiUtils::composeMatrix(const MVector &translate, const MVector &rotate, const MVector &scale,
        const MVector &shear, MStatus *status) {
    MTransformationMatrix transMat;

    *status = transMat.setTranslation(translate, MSpace::kTransform);

    MEulerRotation rot;
    rot.setValue(rotate.x, rotate.y, rotate.z);
    MQuaternion quat = rot.asQuaternion();
    *status = transMat.setRotationQuaternion(quat.x, quat.y, quat.z, quat.w);

    double sc[3] = {scale.x, scale.y, scale.z};
    *status = transMat.setScale(sc, MSpace::kTransform);

    double sh[3] = {shear.x, shear.y, shear.z};
    *status = transMat.setShear(sh, MSpace::kTransform);

    MMatrix mat = transMat.asMatrix();

    return mat;
}

MEulerRotation MayaApiUtils::rotateFromMatrixAsEuler(const MMatrix &matrix, MStatus *status) {
    MTransformationMatrix transMat(matrix);

    MEulerRotation rot = transMat.eulerRotation();

    if (status != nullptr) {
        *status = MStatus::kSuccess;
    }

    return rot;
}

MQuaternion MayaApiUtils::rotateFromMatrixAsQuaternion(const MMatrix &matrix, MStatus *status) {
    MTransformationMatrix transMat(matrix);

    MQuaternion quat = transMat.rotation();

    if (status != nullptr) {
        *status = MStatus::kSuccess;
    }

    return quat;
}
