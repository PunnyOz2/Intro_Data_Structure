#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <cmath>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  for(size_t i = 0; i < mSize; i++)if(mData[i] == k)return true;
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  for(int i = mSize-1; i >= 0; i--){
    if(mData[i]==k)return log2(i);
  }
  return -1;
}

#endif

