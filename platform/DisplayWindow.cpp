#include "DisplayWindow.hpp"


DisplayWindow::DisplayWindow(std::string& t, DisplayWindow::WindowResize resize_option): title(t) {

    (resize_option == DisplayWindow::OPENGL) ? (this->isopengl = true) : (this->isopengl = false);

}
/*
DisplayWindow::~DisplayWindow() {

    cv::destroyWindow(title);
}
*/
void DisplayWindow::ShowImage(const cv::_InputArray& ia) {

    cv::imshow(this->title, ia);
}


