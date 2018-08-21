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
    ll t,sum=0;
    sc1(t);
    while(t--)
    {
        ll n;
        sc1(n);
        sum+=n;
    }
    printf("%lld\n",sum);
    return 0;
}
