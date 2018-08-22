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
    deque<ll>q;
    ll n,qu;
    sc1(qu);
    while(qu--)
    {
        ll ty;
        sc1(ty);
        if(ty==1)
        {
            ll v;
            sc1(v);
            q.push_back(v);
        }
        else if(ty==2)
        {
            q.pop_front();
        }
        else
        {
            printf("%lld\n",q.front());
        }
    }
    return 0;
}

