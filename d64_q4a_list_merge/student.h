#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  while(!ls.empty()){
    while(!ls.front().empty()){
      push_back(ls.front().front());
      ls.front().pop_front();
    }
    ls.pop_front();
  }
}

#endif
