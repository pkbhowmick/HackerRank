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
ll sum[100005];
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        ll n;
        sc1(n);
        for(ll i=1;i<=n;i++)
        {
            sc1(arr[i]);
        }
        arr[n+1]=0;
        sum[0]=0;
        for(ll i=1;i<=n+1;i++)
        {
            sum[i]=arr[i]+sum[i-1];
        }
        ll ok=0;
        for(ll i=1;i<=n;i++)
        {
            ll l=sum[i-1]-sum[0];
            ll r=sum[n]-sum[i];
            if(l==r)
            {
                ok=1;
                break;
            }
        }
        if(ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
