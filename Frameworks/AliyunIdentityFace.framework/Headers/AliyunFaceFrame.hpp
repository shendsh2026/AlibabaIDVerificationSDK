#ifndef ALIYUNFACEFRAME_HPP
#define ALIYUNFACEFRAME_HPP

#include <functional>
#include <vector>

// 枚举定义
enum class ActionState {
    None,                   // 没有动作
    StartMovingClose,       // 开始靠近动作
    MovingClose,            // 靠近动作
    EndMovingClose,         // 结束靠近动作
    StartMovingFar,         // 开始远离动作
    MovingFar,              // 离远动作
    EndMovingFar,           // 结束远离动作
    AllActionsCompleted,    // 所有动作已完成
    FaceOCC,                // 人脸有遮挡
    NoOcc,                  // 人脸没有遮挡
    NoFace,                 // 没有人脸
    NoFaceInCenter,         // 人脸不在中心
    FaceAreaTooLarge,       // 人脸过大
    FaceAreaTooSmall,       // 人脸过小
    TooManyFace,            // 人脸过多
    BlinkDone,              // 眨眼完成
    BlinkOpenness,          // 请眨眼
    StackTime,              // 请保持不动
    StartOpenMouth,         // 开始张嘴动作
    OpenMouth,              // 张嘴动作
    EndOpenMouth,           // 结束张嘴动作
    StartShakeHeadLeft,     // 开始左摇头
    ShakeHeadLeft,          // 左摇头
    EndShakeHeadLeft,       // 结束左摇头
    StartShakeHeadRight,     // 开始右摇头
    ShakeHeadRight,          // 右摇头
    EndShakeHeadRight,       // 结束右摇头
    StartPhotinus,       // 开始靠近动作
    Photinus,            // 靠近动作
    EndPhotinus,        // 结束靠近动作
    StartSilent,       // 开始静默活体
    Silent,            // 静默活体
    EndSilent        // 结束静默活体



};

// 回调类型
typedef std::function<void(ActionState)> ActionStateCallback; // 状态变化回调
typedef std::function<void(ActionState)> ActionDoneCallback;  // 动作完成回调

// 配置结构体
struct DetectionConfig {
    float closeThreshold;  // 最低靠近阈值
    float closeMaxThreshold; // 最大靠近阈值
    float farThreshold;      // 最低远离阈值
    float farMaxThreshold;   // 最大远离阈值
    float faceProbability; //人脸置信度
};


// 人脸位置信息
struct Location {
    int left;   // 左边缘的 x 坐标
    int top;    // 上边缘的 y 坐标
    int width;  // 区域的宽度
    int height; // 区域的高度
};

// 人脸质量信息
struct quality {
    double occlusion;
    double quality_score;
};
struct pose {
    double pitch;
    double roll;
    double yaw;
};
// 单个人脸信息
struct Face {
    Location location;
    quality quality;
    pose pose;
    double face_probability;
    double face_ratio;
    bool is_occ;
    std::vector<std::pair<int, int>> llandmarks;
    bool lefteyeopen;
    bool righteyeopen;
    bool openMouth;
};

// 整个推理结果
struct InferenceResult {
    std::string message;
    std::string description;
    int face_num;
    std::vector<Face> face_list;
};

class AliyunFaceFrame {
public:
    ActionStateCallback actionStateCallback; // 回调函数
    ActionDoneCallback actionDoneCallback; // 回调函数
    InferenceResult inferenceResult;
    DetectionConfig detectionConfig; // 配置参数
};

#endif
