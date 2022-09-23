#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  if(first == last) return;
  iterator curr = first;
  T temp[k];
  for(size_t i = 0; i < k; i++){
    temp[i] = *curr;
    curr++;
  }
  while(curr != last){
    *first = *curr;
    first++;
    curr++;
  }
  for(size_t i = 0; i < k; i++){
    *first = temp[i];
    first++;
  }
}

#endif
