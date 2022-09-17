#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<pair<int,int>> q;
    int n, m,use;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> use;
        q.push({0,use});
    }
    int current_time = 0;
    while(!q.empty() && m--){
        auto temp = q.top();
        cout << -temp.first << "\n";
        q.pop();
        q.push({-(-temp.first+temp.second),temp.second});
    }
    return 0;
}
/*
3 10
1 3 4
*/