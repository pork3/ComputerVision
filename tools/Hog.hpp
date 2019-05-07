#ifndef COMPUTERVISION_HOG_H
#define COMPUTERVISION_HOG_H


#include <opencv2/core/mat.hpp>
#include <opencv2/opencv.hpp>

class Hog {

public:
    Hog(const cv::Mat& i);

    void SetDescriptor(bool b){this->show_descriptor = b;}

    cv::Mat GetImage(){ return this->image; }

    cv::Mat GetDescriptorImage(){  return this->angles;}

    void Process();




private:

    cv::HOGDescriptor hog;

    cv::Mat image;
    cv::Mat gray_image;
    cv::Mat angles;
    bool show_descriptor;

    cv::Mat get_hogdescriptor_visual_image(cv::Mat& origImg, std::vector<float>& descriptorValues,
            cv::Size winSize,cv::Size cellSize, int scaleFactor, double viz_factor);

};

#endif //COMPUTERVISION_HOG_H
