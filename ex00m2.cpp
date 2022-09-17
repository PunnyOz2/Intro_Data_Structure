#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M,A,person,item,price,i,n;
    char opr;
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> N >> M >> A;
    vector<int> item_cou(N+1);
    vector<vector<int> > ans_people(M+1);
    priority_queue<pair<int,int> > q;
    vector<map<int,int> > latest(N+1);
    for(i = 1; i <= N; i++){
        cin >> item_cou[i];
    }
    while(A--){
        cin >> opr;
        if(opr=='B'){
            cin >> person >> item >> price;
            latest[item][person] = price;
        }
        else{
            cin >> person >> item;
            latest[item].erase(person);
        }
    }
    n = latest.size();
    for(i = 1; i != n; i++){
        for(auto x:latest[i]){
            q.push({x.second,x.first});
        }
        while(!q.empty()){
            person = q.top().second;
            ans_people[person].push_back(i);
            q.pop();
            if(--item_cou[i]==0)break;
        }
        while(!q.empty())q.pop();
    }
    for(i = 1; i <= M; i++){
        if(ans_people[i].empty())cout << "NONE\n";
        else {
            for(auto x:ans_people[i])cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
/*
2 3 4
1 1
B 1 1 10
B 2 1 100
B 1 2 99
B 2 2 100
*/