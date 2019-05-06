#ifndef COMPUTERVISION_FRAMEMONITOR_HPP
#define COMPUTERVISION_FRAMEMONITOR_HPP

#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

class FrameMonitor {

public:
    FrameMonitor();

    void Start();
    void Stop();

    void Clear();

    int64_t GetSec();
    int64_t GetMSec();

    int64_t TimeMicro();

private:

    time_t start;
    time_t stop;

};


#endif //COMPUTERVISION_FRAMEMONITOR_HPP
