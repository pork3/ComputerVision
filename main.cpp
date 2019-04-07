#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main(int argc, char** argv) {

    cv::Mat image;
    image = cv::imread( "monkey.jpg", 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }

    image.convertTo(image, CV_32F, 1/255.0);
    cv::Mat gx, gy;
    Sobel(image, gx, CV_32F, 1, 0, 1);
    Sobel(image, gy, CV_32F, 0, 1, 1);
    cv::Mat mag, angle;
    cartToPolar(gx, gy, mag, angle, 1);

    namedWindow("Display Image", cv::WINDOW_NORMAL );
    imshow("Display Image", gy);
    imshow("djdjd", image);

    cv::waitKey(0);
    return 0;
}