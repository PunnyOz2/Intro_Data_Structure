#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    map<long long, long long> mp,mp2;
    int n,q;
    long long tmp1,tmp2;
    cin >> n >> q;
    while(n--){
        cin >> tmp1 >> tmp2;
        mp[tmp2] = tmp1;
    }
    for(auto x:mp){
        if(mp[x.second])mp2[x.first] = mp[x.second];
    }
    while(q--){
        cin >> tmp1 >> tmp2;
        if(tmp1!=tmp2 && mp2[tmp1] && mp2[tmp1] == mp2[tmp2]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}