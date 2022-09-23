#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  typename std::set<T>::iterator temp = first;
  size_t n = 0;
  while(temp!=last){
    n+=1;
    temp++;
  }
  this->mData = new T[n]();
  this->mCap = n;
  this->mSize = n;
  last--;
  size_t i = 0;
  first--;
  while(last!=first){
    mData[i++] = (*last);
    last--;
  }
}

#endif
