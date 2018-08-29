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
        string a,b;
        cin>>a>>b;
        ll arr[30]={0};
        ll brr[30]={0};

        ll l=a.size();
        for(ll i=0;i<l;i++)
        {
            arr[a[i]-'a']++;
        }
        l=b.size();
        for(ll i=0;i<l;i++)
        {
            brr[b[i]-'a']++;
        }
        ll ok=0;
        for(ll i=0;i<26;i++)
        {
            if(arr[i]>0&&brr[i]>0)
            {
                ok=1;
                break;
            }
        }
        if(ok)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}

