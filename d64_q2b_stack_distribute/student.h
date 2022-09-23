#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> v(k);
  stack<T> temp = *this;
  size_t Size = size() / k;
  size_t left = size() % k;
  bool ch;
  for(size_t i = 0; i < k; i++){
    ch=0;
    if(left!=0)ch=1,left--;
    for(size_t j = 0; j < Size + ch; j++){
      v[i].push_back(temp.top());
      temp.pop();
    }
  }
  return v;
}
#endif
