#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  while(K--){
    pop();
    if(empty())return;
  }
  return;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::stack<T> temp;
  T a[mCap+1];
  int cou = 1;
  while(K--){
    a[cou++] = top();
    pop();
    if(empty())break;
  }
  for(size_t i = cou-1; i > 0; i--){
    temp.push(a[i]);
  }
  return temp;
}

#endif
