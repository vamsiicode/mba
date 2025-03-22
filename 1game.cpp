#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;

    string p1="01";
    string p2="10";

    int cnt=0;
    while(s.size()>0){
        if(s.find(p1)!=string::npos){
            s.erase(s.find(p1),2);
            cnt++;
        }
        else if(s.find(p2)!=string::npos){
            s.erase(s.find(p2),2);
            cnt++;
        }
        else{
            break;
        }
    } 

    if(cnt&1){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }
}

int main () {
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}