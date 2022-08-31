#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>
using namespace std;

int eval_postfix(vector<pair<int, int>> v)
{
  stack<int> s;
  int tempOfNum, tempOfNum2;
  for (auto &x : v) {
    if (x.first == 1) s.push(x.second);
    else {
      tempOfNum = s.top();
      s.pop();
      tempOfNum2 = s.top();
      s.pop();
      switch (x.second)
      {
      case 0:
        s.push(tempOfNum + tempOfNum2);
        break;
      case 1:
        s.push(tempOfNum2 - tempOfNum);
        break;
      case 2:
        s.push(tempOfNum * tempOfNum2);
        break;
      case 3:
        s.push(tempOfNum2 / tempOfNum);
        break;
      default:
        s.push(tempOfNum2);
        s.push(tempOfNum);
        break;
      }
    }
  }
  tempOfNum = s.top();
  s.pop();
  return tempOfNum;
}

#endif