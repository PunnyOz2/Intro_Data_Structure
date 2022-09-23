#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(m<=0) return false;
  if(std::abs(b-a)<m) return false;
  if(a < mData || a>=mData+mSize) return false;
  if(b < mData || b>=mData+mSize) return false;
  if(a+m-1>=mData+mSize) return false;
  if(b+m-1>=mData+mSize) return false;
  size_t count = 0;
  using std::swap;
  while(count!=m){
    swap(*(a+count),*(b+count));
    count++;
  }
  return true;
}

#endif
