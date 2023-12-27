#include "pinhole.h"
#include "json.hpp"
#include <iostream>

// 构造函数
CameraModel::CameraModel(const IntrinsicParameters &intrinsics, const DistortionParameters &distortions,
                         const ExtrinsicParameters &extrinsics, const OpticalCharacteristics &optics,
                         const ImagingCharacteristics &imaging)
    : intrinsicParameters_(intrinsics), distortionParameters_(distortions), extrinsicParameters_(extrinsics),
      opticalCharacteristics_(optics), imagingCharacteristics_(imaging) {
    // 可以在这里添加其他初始化逻辑
}

// create CameraModel from jsonfile
CameraModel CameraModel::fromJsonFile(const std::string &jsonfile) {
    CameraModel cameraModel;
    // 从json文件中读取相机参数

    // 创建相机对象并返回
    // return CameraModel(intrinsics, distortions, extrinsics, optics, imaging);
    return cameraModel;
}

int main(int argc, char *argv[]) {
    // 创建相机对象并设置参数
    CameraModel::IntrinsicParameters intrinsics = {50.0, {320.0, 240.0}, {640.0, 480.0}};
    CameraModel::DistortionParameters distortions = {{0.01, 0.001, 0.0001}, {0.002, 0.001}};
    CameraModel::ExtrinsicParameters extrinsics = {{1.0, 2.0}, {0.1, 0.2}};
    CameraModel::OpticalCharacteristics optics = {2.8, 10.0};
    CameraModel::ImagingCharacteristics imaging = {{640, 480}, 0.005};

    CameraModel myCamera(intrinsics, distortions, extrinsics, optics, imaging);

    // 在这里可以使用相机对象进行其他操作
    // ...

    return 0;
}
