#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,curr;
    queue<int> q;
    vector<int> v;
    cin >> n >> a;
    q.push(a);
    while(!q.empty()){
        curr = q.front();
        v.push_back(curr);
        if(curr*2+1<n)q.push(curr*2+1);
        if(curr*2+2<n)q.push(curr*2+2);
        q.pop();
    }
    cout << v.size() << "\n";
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}