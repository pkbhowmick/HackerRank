#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

struct A
{
    ll cost;
    ll id;
}arr[1005];

bool comp(A a,A b)
{
    if(a.cost==b.cost)
    return a.id<b.id;
    return a.cost<b.cost;
}
int main()
{
    ll n;
    sc1(n);
    for(ll i=1;i<=n;i++)
    {
        ll a,b;
        sc2(a,b);
        arr[i].cost=a+b;
        arr[i].id=i;
    }
    sort(arr+1,arr+n+1,comp);
    printf("%lld",arr[1].id);
    for(ll i=2;i<=n;i++)
    {
        printf(" %lld",arr[i].id);
    }
    printf("\n");
    return 0;
}
