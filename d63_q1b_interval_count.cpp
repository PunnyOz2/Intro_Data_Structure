#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,q,num,tmp,idx1,idx2;
    vector<int> v,ans;
    cin >> n >> q >> num;
    while(n--){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(all(v));
    while(q--){
        cin >> tmp;
        idx1 = upper_bound(all(v),tmp-num-1) - v.begin();
        idx2 = upper_bound(all(v),tmp+num) - v.begin();
        ans.push_back(idx2 - idx1);
    }
    for(auto x:ans)cout << x << " ";
    return 0;
}