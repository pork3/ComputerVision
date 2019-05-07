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

    image = cv::imread("../monkey.jpg");
    std::string title = "Window";
    DisplayWindow dw(title);


    Hog hog(true);


    cv::VideoCapture webcam(0);
    cv::Mat webimage;

    if ( webcam.isOpened() == false ){

        std::cout << "Error with webcam " << std::endl;
    }
                                            /*press esc to quit*/
    while(webcam.isOpened() && cv::waitKey(10)!= 27){

        bool isread = webcam.read(webimage);
        if ( isread){

            hog.Process(webimage);

            dw.ShowImage(hog.GetDescriptorImage());
        }
        else{

            dw.ShowImage(image);
        }


    }

    return 0;
};