#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    set<int> s;
    int n;
    int tmp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        s.insert(tmp);
    }
    if(s.size()!=n || *s.begin() != 1 || *(--s.end()) != n) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}