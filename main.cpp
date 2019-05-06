#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "platform/DisplayWindow.hpp"



int main(int argc, char** argv) {

    std::string title = "Test Window";
    DisplayWindow dw(title);


    //cv::VideoCapture webcam(0);
    cv::Mat image, test;

    test = cv::imread("../monkey.jpg",cv::IMREAD_COLOR);

    cv::namedWindow("tjt", cv::WINDOW_NORMAL);


    cv::imshow("tjt",test);


    /*
    cv::Mat image , gray;

    cv::VideoCapture webcam(0);
    std::string title = "fhfhf";
    DisplayWindow dw(title);

    if ( webcam.isOpened() == false ){

        std::cout << "Error with webcam " << std::endl;
    }

    cv::namedWindow("Test", cv::WINDOW_NORMAL);


    cv::HOGDescriptor hog;

    std::vector<float> descriptorvalues;
    std::vector<cv::Point> location;

    cv::Mat dx, dy, mag, angle;

    char esc = 0;
    while( esc != 27 && webcam.isOpened() ){

        webcam.read(image);
        cvtColor(image, gray, cv::COLOR_RGB2GRAY);



        hog.compute(gray, descriptorvalues, cv::Size(0,0), cv::Size(0,0), location);

        angle = get_hogdescriptor_visual_image(image,descriptorvalues, cv::Size(image.size().width,image.size().height), cv::Size(6,6), 1,2 );


        cv::imshow("Test", angle);

        cv::waitKey(1);
    }

    cv::waitKey(0);
     */
    return 0;
}