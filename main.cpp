#include <bits/stdc++.h> 
using namespace std; 
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int a[26];
    string s="xultpaajcxitltlxaarpjhtiwtgxktghidhipxciwtvgtpilpitghlxiwiwtxgqadds";
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++; 
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    char mf;// most frequent
    for(int i=0;i<26;i++){
        if(mx==a[i]){
            cout << i << "\n";
            cout << char('a'+i) << "\n"; 
            mf=char('a'+i);
            cout << mx << "\n";
        }
    }
    int shift='e'-mf;
    for(int i=0;i<s.size();i++){
        cout << char('a'+(s[i]-'a'+shift+26)%26);
    }
}