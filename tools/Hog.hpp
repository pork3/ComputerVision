#ifndef COMPUTERVISION_HOG_H
#define COMPUTERVISION_HOG_H


#include <opencv2/core/mat.hpp>

class Hog {

public:
    Hog(cv::InputArray image);

    void Process();


private:

    void ToGray();


    int im_width;
    int im_height;

    int ker_width;
    int ker_height;


};

#endif //COMPUTERVISION_HOG_H
