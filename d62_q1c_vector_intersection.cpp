#include <iostream>
#include <set>
using namespace std;
int main() {
    int n,m,tmp;
    set<int> s;
    set<int> found;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> tmp;
        s.insert(tmp);
    }
    for(int i = 0; i<m; i++){
        cin >> tmp;
        if(s.find(tmp)!=s.end())found.insert(tmp);
    }
    for(auto x:found)cout << x << "\n";
    return 0;
}