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
    ll cnt[100005]={0};
    string str;
    cin>>str;
    ll l=str.size();
    for(ll i=0;i<l;i++)
    {
        arr[str[i]-'a']++;
    }
    for(ll i=0;i<26;i++)
    {
        if(arr[i]>0)
        {
            cnt[arr[i]]++;
        }
    }
    ll hit=0;
    vector<ll>v;
    for(ll i=1;i<=100000;i++)
    {
        if(cnt[i]>0)
        {
            hit++;
            v.pb(i);
        }
    }
    if(hit==1)
    {
        printf("YES\n");
    }
    else if(hit==2&&((v[0]==1&&cnt[1]==1)||(v[1]-v[0]==1&&cnt[v[1]]==1)))
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}


