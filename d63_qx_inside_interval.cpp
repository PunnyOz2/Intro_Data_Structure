#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,q,tmp,tmp2;
    bool ch;
    vector<int> ans,Front,End;
    cin >> n >> q;
    while(n--){
        cin >> tmp >> tmp2;
        Front.push_back(tmp);
        End.push_back(tmp2+1);
    }
    sort(all(Front));
    sort(all(End));
    while(q--){
        cin >> tmp;
        ch = false;
        ch = upper_bound(all(Front),tmp)-Front.begin() > upper_bound(all(End),tmp)-End.begin();
        if(ch)ans.push_back(1);
        else ans.push_back(0);
    }
    for(auto x:ans)cout << x << " ";
    return 0;
}