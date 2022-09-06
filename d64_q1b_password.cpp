#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l;
    string temp;
    set<string> s;
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    cin >> n >> m >> l;
    vector<int> shift(l+9);
    for(int i = 0; i < l; i++){
        cin >> shift[i];
        shift[i] %= 26; 
    }
    for(int i = 0; i < n; i++){
        cin >> temp;
        s.insert(temp);
    }
    for(int i = 0; i < m; i++){
        cin >> temp;
        for(int i = 0; i < l; i++){
            temp[i] += shift[i]-'a';
            temp[i]%=26;
            temp[i] += 'a';
        }
        if(s.find(temp)!=s.end())cout << "Match\n";
        else cout << "Unknown\n";
    }
    return 0;
}