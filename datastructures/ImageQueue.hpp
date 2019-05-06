#ifndef COMPUTERVISION_IMAGEQUEUE_HPP
#define COMPUTERVISION_IMAGEQUEUE_HPP

#include<queue>

template <class qtype> class ImageQueue {

    public:
        ImageQueue(int s);

        int AddQueue(qtype item);

        bool IsEmpty();

    private:
        int size;
        std::queue<qtype> queue;

};


#endif //COMPUTERVISION_IMAGEQUEUE_HPP
