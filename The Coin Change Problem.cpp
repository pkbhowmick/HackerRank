#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll dp[255];
ll coin[105];
int main()
{
    ll n,m;
    sc2(n,m);
    for(ll i=0;i<m;i++)
    {
        sc1(coin[i]);
    }
    memset(dp,0,sizeof dp);
    dp[0]=1;
    for(ll i=0;i<m;i++)
    {
        for(ll j=coin[i];j<=n;j++)
        {
            dp[j]+=dp[j-coin[i]];
        }
    }
    printf("%lld\n",dp[n]);
    return 0;
}
