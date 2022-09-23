#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    vector<T> temp(mSize);
    for(size_t i = 0; i < mSize; i++){
        temp[i] = mData[i];
    }
    // delete [] mData;
    using std::swap;
    swap(mData, temp.mData);
    // The following line doesn't work because temp.mdata deallocated after this function end. Because of this, mData will also be deleted.
    // mData = temp.mData;
    mCap = temp.mCap;
    mSize = temp.mSize;
    
    // A better way
    // using std::swap;
    // swap(mSize, temp.mSize);
    // swap(mCap, temp.mCap);
    // swap(mData, temp.mData);
}

#endif
