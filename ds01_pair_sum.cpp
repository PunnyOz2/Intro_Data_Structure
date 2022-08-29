#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int a,b,tmp;
    cin >> a >> b;
    vector<bool> s(2000019,false);
    vector<int> v(a);
    for(int i = 0; i<a; i++){
        cin >> tmp;
        for(int j = 0; j<i; j++){
            s[tmp+v[j]]=true;
        }
        v[i]=tmp;
    }
    while(b--){
        cin >> tmp;
        if(s[tmp]) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}