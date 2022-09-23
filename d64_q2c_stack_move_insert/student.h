#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  stack<T> temp;
  while(k--){
    temp.push(top());
    pop();
  }
  stack<T> a;
  while(m--){
    a.push(s2.top());
    s2.pop();
    if(s2.empty())break;
  }
  while(!a.empty()){
    push(a.top());
    a.pop();
  }
  while(!temp.empty())push(temp.top()),temp.pop();
}
#endif
