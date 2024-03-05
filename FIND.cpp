#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct FIND{ll x,y;};
bool cmp(FIND a,FIND b){
    if(a.x!=b.y)return a.x<b.x;
    else return a.y<b.y;
}
int main(){
    freopen("FIND.INP","r",stdin);
    freopen("FIND.OUT","w",stdout);
    ll n,res=0,cnt=1,d=0;cin>>n;
    vector<FIND>f(n);
    for(ll i=0;i<n;i++)cin>>f[i].x>>f[i].y;
    sort(f.begin(),f.end(),cmp);ll l=0,r=1;
    //for(ll i=0;i<n;i++)cout<<f[i].x<<" "<<f[i].y<<endl;
    for(ll i=0,j=1;i<n&&j<n;i++,j++){
        if(f[j].x<=f[i].y){
            if(d==0){l=f[i].x;d=1;}
            r=f[j].y;
        }
        if(f[j].x>f[i].y) {res=max(res,r-l);d=0;}
    }res=max(res,r-l);cout<<res;
    return 0;
}


