#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "platform/DisplayWindow.hpp"
#include "tools/Hog.hpp"

int main(int argc, char** argv) {

    cv::Mat image;

    image = cv::imread("monkey.jpg");
    std::string title = "Window";
    DisplayWindow dw(title);

    Hog hog(image,true);
    hog.Process();
    hog.GetDescriptorImage();

    dw.ShowImage(hog.GetDescriptorImage());



    /*
    cv::namedWindow("Display", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display", image);
    */
    cv::waitKey(0);

    return 0;
};