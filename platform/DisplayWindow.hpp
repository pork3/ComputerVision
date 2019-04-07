#ifndef COMPUTERVISION_DISPLAYWINDOW_HPP
#define COMPUTERVISION_DISPLAYWINDOW_HPP

#include<string>
#include <opencv2/core/mat.hpp>

class DisplayWindow {

    public:

        DisplayWindow(std::string t, cv::InputArray sample);

    private:
        std::string title;

};


#endif //COMPUTERVISION_DISPLAYWINDOW_HPP
