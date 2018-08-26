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
int main()
{
    ll n;
    sc1(n);
    ll k;
    sc1(k);
    for(ll i=0;i<n;i++)
    {
        sc1(arr[i]);
    }
    sort(arr,arr+n);
    ll ans=1e18;
    for(ll i=0,j=k-1;j<n;i++,j++)
    {
        ans=min(ans,arr[j]-arr[i]);
    }
    printf("%lld\n",ans);
    return 0;
}
