#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

int main()
{
    ll n;
    sc1(n);
    ll s1=0,s2=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            ll v;
            sc1(v);
            if(i==j)
                s1+=v;
            if(i+j==n+1)
                s2+=v;
        }
    }
    ll ans=abs(s1-s2);
    printf("%lld\n",ans);
    return 0;
}

