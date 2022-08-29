#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,tmp;
    vector<int> v,ans;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<m; i++){
        cin >> tmp;
        if(upper_bound(v.begin(),v.end(),tmp) - upper_bound(v.begin(),v.end(),tmp-1) > 0)ans.push_back(tmp);
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    for(auto x:ans)cout << x << " ";
    return 0;
}