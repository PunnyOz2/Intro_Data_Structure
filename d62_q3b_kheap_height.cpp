#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,cou=0;
    cin >> n >> k;
    if(k==1){cout << n-1;return 0;}
    n--;
    while(n>0){
        n--;
        n/=k;
        cou++;
    }
    cout << cou;
    return 0;
}