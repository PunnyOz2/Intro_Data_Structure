#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main() {
    int n,m,r,p1x,p1y,p2x,p2y;
    cin >> n >> m;
    cin >> r;
    vector<vector<int>> a(n+1,vector<int>(m+1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    while(r--){
        cin >> p1x >> p1y >> p2x >> p2y;
        if(p1x > p2x || p1y > p2y){
            cout << "INVALID\n";
            continue;
        }
        if(p1x>n || p1y>m || p2x<1 || p2y<1){
            cout << "OUTSIDE\n";
            continue;
        }
        int Max = -1e9;
        for(int i = max(p1x,1); i <= min(p2x,n); i++){
            for(int j = max(p1y,1); j <= min(p2y,m); j++){
                Max = max(Max, a[i][j]);
            }
        }
        cout << Max << endl;
    }
    return 0;
}
