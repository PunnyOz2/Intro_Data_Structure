#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <unordered_set>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::unordered_set<T> s;
  vector<T> tmp;
  for(size_t i = 0; i < mSize;i++){
    if(s.find(mData[i])==s.end()){
      s.insert(mData[i]);
      tmp.push_back(mData[i]);
    }
  }
  T* tm = mData;
  mData = tmp.mData;
  tmp.mData = tm;
  mSize = tmp.mSize;
  mCap = tmp.mCap;
}

#endif
