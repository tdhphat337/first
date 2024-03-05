#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    freopen("ALPHA.INP","r",stdin);
    freopen("ALPHA.OUT","w",stdout);
    ll n;cin>>n;
    while(n--){
        string s;cin>>s;
        ll res=0;
        for(char c:s)res=max(res,(ll)c-96);
        //for(ll x:a)cout<<x<<" ";
        cout<<res<<endl;
    }
    return 0;
}


