#include "FrameMonitor.hpp"

FrameMonitor::FrameMonitor() : start(0), stop(0) {

}

void FrameMonitor::Clear() {


}

void FrameMonitor::Start() {

    //get the current time
    start = std::time(0);

}
