#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
int main(){
    int n,w;
    vector<int>::iterator idx;
    cin >> n >> w;
    vector<int> a(n);
    vector<int> v;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < w; i++){
        idx = upper_bound(all(v),a[i]);
        v.insert(idx,a[i]);
    }
    for(int i = w; i < n; i++){
        idx = upper_bound(all(v),a[i]);
        v.insert(idx,a[i]);
        ans.push_back(v[(w/2)]);
        
        idx = upper_bound(all(v),a[i-w]);
        v.erase(--idx);
    }
    for(auto x:ans){
        cout << x << " ";
    }
    return 0;
}