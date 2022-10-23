#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        for(size_t i = 0; i < mSize; i++){
            s.push(mData[i]);
        }
        *this = s;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> temp;
        while(!empty())temp.push(top()),pop();
        while(!q.empty())temp.push(q.front()),q.pop();
        while(!temp.empty())push(temp.top()),temp.pop();
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        ensureCapacity(mSize+s.size());
        size_t now = mFront + mSize;
        mSize+=s.size();
        for(size_t i = s.size()-1; i > 0; i--){
            mData[now%mCap] = s.mData[i];
            now++;
        }
        mData[now%mCap] = s.mData[0];
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        ensureCapacity(mSize+q.size());
        size_t now = mFront + mSize;
        mSize+=q.size();
        for(size_t i = 0; i < q.size(); i++){
            mData[now%mCap] = q.mData[i];
            now++;
        }
    }
}
