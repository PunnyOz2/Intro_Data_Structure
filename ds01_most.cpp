#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    int n,Max=-1;
    string word,ans;
    map<string,int> mp;
    cin >> n;
    while(n--){
        cin >> word;
        mp[word]++;
    }
    for(auto x:mp){
        if(x.second >= Max) Max = x.second,ans = x.first;
    }
    cout << ans << " " << Max;
    return 0;
}