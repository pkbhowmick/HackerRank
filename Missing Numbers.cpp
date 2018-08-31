#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll c1[100005];
ll c2[100005];
int main()
{
    memset(c1,0,sizeof c1);
    memset(c2,0,sizeof c2);
    ll n;
    sc1(n);
    for(ll i=0; i<n; i++)
    {
        ll v;
        sc1(v);
        c1[v]++;
    }
    ll m;
    sc1(m);
    for(ll i=0; i<m; i++)
    {
        ll v;
        sc1(v);
        c2[v]++;
    }
    bool pr=false;
    for(ll i=1; i<=100000; i++)
    {
        if(c2[i]>c1[i])
        {
            ll dif=c2[i]-c1[i];

            if(pr)
                printf(" ");
            printf("%lld",i);
            pr=true;

        }
    }
}
