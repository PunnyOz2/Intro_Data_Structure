#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,q,year,month,tmp,idx;
    vector<int> v,ans;
    cin >> n >> q;
    while(n--){
        cin >> year >> month;
        v.push_back(year * 12 + month);
    }
    sort(all(v));
    while(q--){
        cin >> year >> month;
        tmp = year * 12 + month;
        idx = upper_bound(all(v),tmp) - v.begin();
        if(idx-1<0)ans.push_back(-1),ans.push_back(-1);
        else if(v[idx-1]==tmp)ans.push_back(0),ans.push_back(0);
        else{   
            ans.push_back((v[idx-1]-1)/12);
            ans.push_back((v[idx-1]%12==0)?12:v[idx-1]%12);
        }
    }
    for(auto x:ans){
        cout << x << " ";
    }
    return 0;
}