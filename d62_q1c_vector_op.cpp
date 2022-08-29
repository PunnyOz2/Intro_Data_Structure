#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int q,temp;
    string op;
    vector<int> v;
    cin >> q;
    while(q--){
        cin >> op;
        if(op[0]=='p'){
            cin >> temp;
            v.push_back(temp);
        }
        if(op[0]=='s'){
            if(op[1]=='a')sort(v.begin(),v.end());
            if(op[1]=='d')sort(v.begin(),v.end(),greater<int>());
        }
        if(op[0]=='r'){
            reverse(v.begin(),v.end());
        }
        if(op[0]=='d'){
            cin >> temp;
            v.erase(v.begin()+temp);
        }
    }
    for(auto x:v){
        cout << x << " ";
    }
    return 0;
}
