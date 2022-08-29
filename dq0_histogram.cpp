#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    string temp;
    unordered_map<string,int> mp;
    vector<pair<string,int>> ans;
    cin >> n;
    while(n--){
        cin >> temp;
        mp[temp]++;
    }
    for(auto &x:mp)if(x.second>=2)ans.push_back({x.first,x.second});
    sort(ans.begin(),ans.end());
    for(auto &x:ans)cout << x.first << " " << x.second << "\n";
    return 0;
}