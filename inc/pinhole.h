#include <iostream>
#include <string>

class CameraModel {
  public:
    // 内参
    struct IntrinsicParameters {
        double focalLength;
        std::pair<double, double> principalPoint;
        std::pair<double, double> imageSize;
    };

    // 畸变参数
    struct DistortionParameters {
        double radialDistortion[3];     // k1, k2, k3
        double tangentialDistortion[2]; // p1, p2
    };

    // 外参
    struct ExtrinsicParameters {
        std::pair<double, double> cameraPosition;
        std::pair<double, double> cameraOrientation;
    };

    // 光学特性
    struct OpticalCharacteristics {
        double apertureSize;
        double depthOfField;
    };

    // 成像特性
    struct ImagingCharacteristics {
        std::pair<int, int> resolution; // Width, Height
        double pixelSize;
    };

    // 构造函数
    CameraModel() = default;
    CameraModel(const IntrinsicParameters &intrinsics, const DistortionParameters &distortions,
                const ExtrinsicParameters &extrinsics, const OpticalCharacteristics &optics,
                const ImagingCharacteristics &imaging);

    // 其他成员函数
    static CameraModel fromJsonFile(const std::string &jsonfile);

  private:
    IntrinsicParameters intrinsicParameters_;
    DistortionParameters distortionParameters_;
    ExtrinsicParameters extrinsicParameters_;
    OpticalCharacteristics opticalCharacteristics_;
    ImagingCharacteristics imagingCharacteristics_;
};