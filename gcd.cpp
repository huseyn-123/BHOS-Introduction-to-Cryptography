#include <bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x,y;
    cin >> x >> y;
    cout << gcd(x,y);
}
