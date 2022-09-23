#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  // Bad method
  // vector<T> tmp(mSize-pos.size());
  // auto idx = pos.begin();
  // for(size_t i = 0, ii = 0; i < mSize; i++){
  //   if(idx!=pos.end() && *idx == i)idx++;
  //   else {
  //     tmp[ii++] = mData[i];
  //   }
  // }
  // using std::swap;
  // swap(mSize, tmp.mSize);
  // swap(mCap, tmp.mCap);
  // swap(mData, tmp.mData);

  // Good method
  for(int i = pos[0], j = 0; i < mSize; i++){
    while(j<pos.size() && pos[j] == i+j)j++,mSize--;
    mData[i] = mData[i+j];
  }
  // mSize = mSize-pos.size();
}

#endif
