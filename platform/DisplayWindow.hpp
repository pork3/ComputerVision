#ifndef COMPUTERVISION_DISPLAYWINDOW_HPP
#define COMPUTERVISION_DISPLAYWINDOW_HPP

#include<string>
#include <opencv2/core/mat.hpp>
#include <opencv2/opencv.hpp>

class DisplayWindow {

    public:

        enum WindowResize{
            STATIC = cv::WINDOW_AUTOSIZE,
            DYANMIC = cv::WINDOW_NORMAL,
            OPENGL = cv::WINDOW_OPENGL
        };

        DisplayWindow(std::string& t, WindowResize resize_option = DYANMIC);
       // ~DisplayWindow();
        void ShowImage(const cv::InputArray& ia);

    private:
        std::string title;
        bool isopengl;


};


#endif //COMPUTERVISION_DISPLAYWINDOW_HPP
