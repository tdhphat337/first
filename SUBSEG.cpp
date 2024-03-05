#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    freopen("SUBSEG.INP","r",stdin);
    freopen("SUBSEG.OUT","w",stdout);
    ll n,k;cin>>n>>k;
    ll a[n];for(ll i=0;i<n;i++)cin>>a[i];
    ll l=0,r=0,cnt=0,res=0;map<ll,ll>mp;
    while(l<n&&r<n){
        if(mp[a[r]]==0){
            cnt++;
        }mp[a[r]]++;
        while(cnt>k){
            mp[a[l]]--;
            if(mp[a[l]]==0)cnt--;
            l++;
        }res+=r-l+1;
        r++;//cout<<r<<" "<<l<<" "<<res<<endl;
    }cout<<res;
    return 0;
}


