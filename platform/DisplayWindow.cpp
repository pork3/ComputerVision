#include "DisplayWindow.hpp"


DisplayWindow::DisplayWindow(std::string& t) {

    this->title = t;

    cv::namedWindow(this->title);
}


void DisplayWindow::ShowImage(const cv::Mat& m) {

    cv::imshow(this->title, m);
}


