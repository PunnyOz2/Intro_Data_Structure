#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  vector<T> tmp(mSize+last-first);
  size_t idx = 0;
  for(size_t i = 0; i < position - this->begin();i++){
    tmp[idx++] = mData[i];
  }
  for(iterator i = first; i!=last;i++){
    tmp[idx++] = *i;
  }
  for (size_t i = position - this->begin();i < mSize;i++) {
    tmp[idx++] = mData[i];
  }
  
  using std::swap;
  swap(this->mSize, tmp.mSize);
  swap(this->mCap, tmp.mCap);
  swap(this->mData, tmp.mData);
}

#endif
