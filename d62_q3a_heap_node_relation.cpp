#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n,m,ta,tb;
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        if(a==b){cout << "a and b are the same node\n"; continue;}
        ta = a, tb = b;
        while(tb > a){
            tb = (tb-1)/2;
        }
        if(tb==a){cout << "a is an ancestor of b\n"; continue;}
        while(ta > b){
            ta = (ta-1)/2;
        }
        if(ta==b){cout << "b is an ancestor of a\n"; continue;}
        cout << "a and b are not related\n";
    }
    return 0;
}