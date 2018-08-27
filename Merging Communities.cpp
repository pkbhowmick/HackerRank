#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
ll par[100005];
ll cnt[100005];
ll findpar(ll x)
{
    if(par[x]==x)return x;
    return par[x]=findpar(par[x]);
}
void Union(ll a,ll b)
{
    cnt[findpar(a)]+=cnt[findpar(b)];
    par[findpar(b)]=findpar(a);

}
int main()
{
    ll n,k;
    sc2(n,k);
    for(ll i=1;i<=n;i++){
        par[i]=i;
        cnt[i]=1;
    }

    while(k--)
    {
        string str;
        cin>>str;
        if(str=="M")
        {
            ll a,b;
            sc2(a,b);
            if(findpar(a)!=findpar(b))
                Union(a,b);
        }
        else
        {
            ll s;
            sc1(s);
            printf("%lld\n",cnt[findpar(s)]);
        }
    }
}
