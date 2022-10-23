#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //
  if(k > mSize) k = mSize;
  for(size_t i = 0; i < k; i++){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  mData = new T[to-from]();
  mCap = mSize = to-from;
  mFront = 0;
  size_t i = 0;
  while(from!=to){
    mData[i++] = *from;
    from++;
  }
}

#endif
