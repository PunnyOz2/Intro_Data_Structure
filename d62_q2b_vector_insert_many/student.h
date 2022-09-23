#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  sort(data.begin(),data.end());
  vector<T> tmp(mSize+data.size());
  size_t j = 0,idx = 0;
  for (size_t i = 0;i < mSize;i++) {
    if(data[j].first == i)tmp[idx++]=data[j++].second;
    tmp[idx++] = mData[i];
  }
  if(data[j].first == mSize)tmp[idx++]=data[j++].second;
  
  using std::swap;
  swap(this->mSize, tmp.mSize);
  swap(this->mCap, tmp.mCap);
  swap(this->mData, tmp.mData);
}

#endif
