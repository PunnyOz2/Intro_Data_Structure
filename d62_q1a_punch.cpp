#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
 //write some code here
 //don�t forget to return something
//  vector<string>::iterator it2 = it;
//  int cou = 0;
//  while(it2!=v.end()-1 && cou<k)it2++,cou++;
//  cou = it-it2+k;
//  while(it2!=v.begin()-1 && cou<(k*2+1))v.erase(it2--),cou++;
   v.erase((it-k>v.begin())?it-k:v.begin(),(it+k+1<v.end())?it+k+1:v.end());
   return v;
}
int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
    cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
    cout << x << endl;
 }
}
