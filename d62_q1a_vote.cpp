#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
int main(){
    int n,k;
    map<string,int> mp;
    string tmp;
    vector<int> v;
    cin >> n >> k;
    while(n--){
        cin >> tmp;
        mp[tmp]++;
    }
    for(auto x:mp)v.push_back(x.second);
    sort(all(v),greater<int>());
    cout << v[min(k-1,(int)v.size()-1)] << endl;
    return 0;
}