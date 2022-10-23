#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T,size_t> mp;
    std::vector<std::pair<T,size_t> > v;
    for(size_t i = 0; i < mSize; i++){
        mp[mData[(mFront+i)%mCap]]++;
    }
    for(size_t i = 0; i < k.size(); i++){
        v.push_back({k[i], mp[k[i]]});
    }
    return v;
}

#endif
