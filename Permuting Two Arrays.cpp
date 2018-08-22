#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
ll arr[1005],brr[1005];
int main()
{
    ll test,n,k;
    sc1(test);
    while(test--)
    {
        sc2(n,k);
        for(ll i=0;i<n;i++)
            sc1(arr[i]);
        for(ll i=0;i<n;i++)
            sc1(brr[i]);

        sort(arr,arr+n);
        sort(brr,brr+n,greater<int>() );

        ll ok=1;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]+brr[i]<k)
            {
                ok=0;
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
