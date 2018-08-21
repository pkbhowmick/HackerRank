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
    ll test;
    sc1(test);
    while(test--)
    {
        vector<ll>V[10004];
        ll arr[10004];
         ll tk;
         sc1(tk);
         ll n;
         sc1(n);
         for(ll i=1;i<=n;i++)
         {
            ll v;
            sc1(v);
            arr[i]=v;
            V[v].pb(i);
         }
         for(ll i=1;i<=n;i++)
         {
            ll need=tk-arr[i];
            if(need<=0)continue;
            if(V[need].size()>0&&need!=arr[i])
            {
                printf("%lld %lld\n",i,V[need][0]);
                break;
            }
            else if(V[need].size()>1&&need==arr[i])
            {
                printf("%lld %lld\n",i,V[need][1]);
                break;
            }
         }

    }

    return 0;
}
