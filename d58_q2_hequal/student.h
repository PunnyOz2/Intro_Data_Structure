#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  auto o1 = *this;
  auto o2 = other;
  if(o1.size()!=o2.size())return false;
  while(!o1.empty() && !o2.empty()){
    if(o1.top() != o2.top()) return false;
    o1.pop();
    o2.pop();
  }
  return true; // you can change this line
}

#endif
