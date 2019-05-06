#ifndef COMPUTERVISION_HOG_H
#define COMPUTERVISION_HOG_H


#include <opencv2/core/mat.hpp>

class Hog {

public:
    Hog(cv::InputArray image);

    void Process();




private:



    cv::Mat get_hogdescriptor_visual_image(cv::Mat& origImg, std::vector<float>& descriptorValues,cv::Size winSize,
                                           cv::Size cellSize, int scaleFactor, double viz_factor);

};

#endif //COMPUTERVISION_HOG_H
