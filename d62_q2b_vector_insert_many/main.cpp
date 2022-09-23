#include <stdexcept>
#include <iostream>
#include "vector.h"
#include "student.h"
#include <vector>

int main() {
  int i,n;
  std::cin >> n;
  CP::vector<int> v;
  while (n--) {
    int x;
    std::cin >> x;
    v.push_back(x);
  }
  // create CP::vector<std::pair<int,int>>
  CP::vector<std::pair<int,int>> data;
  // populate data
  std::cin >> i;
  while (i--) {
    int idx,val;
    std::cin >> idx >> val;
    data.push_back({idx,val});
  }
  v.insert_many(data);
  for (auto &x : v) {
    std::cout << x << " ";
  }
}

