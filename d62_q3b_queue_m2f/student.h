#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    for(size_t i = 0; i < pos; i++){
        std::swap(mData[(mFront+pos-i+mCap)%mCap], mData[(mFront+pos-i-1+mCap)%mCap]);
    }
}

#endif
