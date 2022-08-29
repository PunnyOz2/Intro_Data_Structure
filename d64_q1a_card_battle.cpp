#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int main(){
    // ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,tmp,tmp2,i,j,ans=0;
    map<int,int> mp;
    map<int,int>::iterator poi;
    cin >> n >> m;
    for(i = 0; i < n; i++){
        cin >> tmp;
        mp[tmp]++;
    }
    for(i = 0; i < m; i++){
        cin >> tmp;
        for(j = 0; j < tmp; j++){
            cin >> tmp2;
            if(mp.upper_bound(tmp2)==mp.end()){ans=i+1;goto Skip;}
            poi = mp.upper_bound(tmp2);
            poi->second--;
            if(poi->second==0)mp.erase(poi->first);
        }
    }
    if(i==m && j==tmp)ans=m+1;
    Skip:
    cout << ans;
    return 0;
}