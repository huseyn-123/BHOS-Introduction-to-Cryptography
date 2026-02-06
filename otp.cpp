#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
string f(string a,string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int sza=(int)a.size(),szb=(int)b.size();
    string res="";
    for(int i=0;i<max(sza,szb);i++){
        char a1,b1;
        if(i<sza){
            a1=a[i];
        }
        else{
            a1='0';
        }
        if(i<szb){
            b1=b[i];
        }
        else{
            b1='0';
        }
        int h=((a1-'0')^(b1-'0'));
        res+=char('0'+h);
    }
    reverse(res.begin(),res.end());
    return res;
}
string random_key(int n){
    string key="";
    for(int i=0;i<n;i++){
        key+=char('0'+rng()%2);
    }
    return key;
}
string to_bit(string a){
    string res="";
    for(auto x:a){
        int b=x;
        for(int i=7;i>=0;i--){
            if(((1<<i)&b)){
                res+='1';
            }
            else{
                res+='0';
            }
        }
    }
    return res;
}
string to_str(string a){
    string res="";
    int h=0;
    for(int i=0;i<a.size();i++){
        if(i%8==0 && i!=0){
            res+=char(h);
            h=0;
        }
        h*=2;
        h+=a[i]-'0';
    }
    res+=char(h);
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    string b=to_bit(s);
    cout << b << "\n";
    string key=random_key(b.size());
    cout << key << "\n";
    string c=f(b,key);
    cout << c << "\n";
    cout << to_str(c);
    /*
    string b=to_bit("attack");
    string c=to_bit("defend");
    string key=f(b,c);
    cout << f(b,key) << "\n";
    cout << to_str(f(b,key));
    */

}
