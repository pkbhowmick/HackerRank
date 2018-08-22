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
ll fo[100006];
ll ba[100005];
int main()
{
    ll n;
    sc1(n);
    arr[0]=0;
    arr[n+1]=0;
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
    }
    stack<ll>S;
    for(ll i=1;i<=n+1;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            S.push(i);
        }
        else
        {
            while(!S.empty()&&arr[S.top()]>arr[i])
            {
                fo[S.top()]=i-1;
                S.pop();
            }
            S.push(i);
        }
    }
    for(ll i=n;i>=0;i--)
    {
        if(arr[i]>=arr[i+1])
        {
            S.push(i);
        }
        else
        {
            while(!S.empty()&&arr[S.top()]>arr[i])
            {
                ba[S.top()]=i+1;
                S.pop();
            }
            S.push(i);
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        ans=max(ans,arr[i]*(abs(fo[i]-ba[i])+1));
    }
    printf("%lld\n",ans);

    return 0;
}
