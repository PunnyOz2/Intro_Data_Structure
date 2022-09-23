#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  size_t minSize = (mSize > other.mSize)? other.mSize:mSize;

  // "this" is a pointer to the current vector
  // "*this" is the current vector
  // in this case it is like writing "vector<int> temp = *this;"
  // Both lines below don't call operator=, they call the copy constructor
  auto temp = *this;
  // vector<int> temp2 = *this;

  // // this line calls operator=
  // temp2 = *this;
  // // mData is a pointer to the data of the current vector
  // std::cout << mData << "\n"; // mData address is 0x1cdf4a26d40
  // std::cout << temp.mData << "\n"; // temp.mData address is 0x1cdf4a26d60
  // std::cout << temp2.mData << "\n"; // temp2.mData address is 0x1cdf4a21dd0

  for(size_t i = 0; i < minSize; i++){
    if(mData[i] < other[i]) return true;
    else if(mData[i] > other[i]) return false;
  }
  return mSize < other.mSize;
}

#endif
