#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[100005];
ll cnt[100005];

int main()
{
    memset(cnt,0,sizeof cnt);
    ll n;
    sc1(n);
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
    }
    for(ll i=1;i<=n;i++)
    {
        ll l=1;
        ll r=i-arr[i];
        if(l<=r)
        {
            cnt[l]+=1;
            cnt[r+1]-=1;
        }
        l=i+1;
        ll besi=arr[i]-i;
        r=min(n,n-besi);
        if(l<=r)
        {
            cnt[l]+=1;
            cnt[r+1]-=1;
        }
    }
    ll mx=-1;
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        cnt[i]=cnt[i]+cnt[i-1];
        if(cnt[i]>mx)
        {
            mx=cnt[i];
            ans=i;
        }
    }
    printf("%lld\n",ans);

}
