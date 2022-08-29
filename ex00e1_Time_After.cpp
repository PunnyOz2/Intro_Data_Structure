#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int hr,mi,add;
    cin >> hr >> mi >> add;
    mi += add;
    hr += mi/60;
    mi %= 60;
    hr %= 24;
    printf("%02d %02d",hr, mi);
    return 0;
}
