#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout << std::fixed << std::setprecision(2);
    int n;
    float Sum;
    string code,name;
    float rating;
    map<string, vector<int>> mp;
    cin >> n;
    while(n--){
        cin >> code >> name >> rating;
        if(mp[code].empty())mp[code] = vector<int>(2);
        if(mp[name].empty())mp[name] = vector<int>(2);
        mp[code][0] += rating;
        mp[code][1]++;
        mp[name][0] += rating;
        mp[name][1]++;
    }
    for(auto x:mp){
        cout << x.first << " " <<  (x.second[0] + 0.0) / x.second[1] << "\n";
    }
    return 0;
}