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
    ll arr[30]={0};
    ll brr[30]={0};
    string a,b;
    cin>>a>>b;
    ll l=a.size();
    for(ll i=0;i<l;i++)
    {
        ll now=a[i]-'a';
        arr[now]++;

    }
    l=b.size();
    for(ll i=0;i<l;i++)
    {
        ll now=b[i]-'a';
        brr[now]++;

    }
    ll ans=0;
    for(ll i=0;i<=25;i++)
    {
        ans+=abs(arr[i]-brr[i]);
    }
    printf("%lld\n",ans);
    return 0;
}
