#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>
using namespace std;

int eval_postfix(vector<pair<int, int>> v)
{
  stack<int> s;
  stack<int> o;
  vector<int> priority = {3, 3, 5, 5};
  int temp, tempOfNum, tempOfNum2;
  for (auto &x : v) {
    if (x.first == 1) s.push(x.second);
    else {
      switch (x.second)
      {
      case 0:
        tempOfNum = s.top();
        s.pop();
        tempOfNum2 = s.top();
        s.pop();
        s.push(tempOfNum + tempOfNum2);
        break;
      case 1:
        tempOfNum = s.top();
        s.pop();
        tempOfNum2 = s.top();
        s.pop();
        s.push(tempOfNum2 - tempOfNum);
        break;
      case 2:
        tempOfNum = s.top();
        s.pop();
        tempOfNum2 = s.top();
        s.pop();
        s.push(tempOfNum * tempOfNum2);
        break;
      case 3:
        tempOfNum = s.top();
        s.pop();
        tempOfNum2 = s.top();
        s.pop();
        s.push(tempOfNum2 / tempOfNum);
        break;
      default:
        break;
      }
    }
  }
  while (!o.empty())
  {
    temp = o.top();
    o.pop();
    switch (temp)
    {
    case 0:
      tempOfNum = s.top();
      s.pop();
      tempOfNum2 = s.top();
      s.pop();
      s.push(tempOfNum + tempOfNum2);
      break;
    case 1:
      tempOfNum = s.top();
      s.pop();
      tempOfNum2 = s.top();
      s.pop();
      s.push(tempOfNum2 - tempOfNum);
      break;
    case 2:
      tempOfNum = s.top();
      s.pop();
      tempOfNum2 = s.top();
      s.pop();
      s.push(tempOfNum * tempOfNum2);
      break;
    case 3:
      tempOfNum = s.top();
      s.pop();
      tempOfNum2 = s.top();
      s.pop();
      s.push(tempOfNum2 / tempOfNum);
      break;
    default:
      break;
    }
  }
  tempOfNum = s.top();
  s.pop();
  return tempOfNum;
}

#endif
