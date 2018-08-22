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
    ll test,n;
    sc1(test);
    while(test--)
    {
        sc1(n);
        ll m=n/3;
        m=m*3;
        ll ok=0;
        for(ll i=m;i>=0;i-=3)
        {
            ll tin=n-i;
            if(tin%5==0)
            {
                ok=1;
                while(i--)
                {
                    printf("5");
                }
                while(tin--)
                    printf("3");

                printf("\n");
                break;
            }
        }
        if(ok==0)
            printf("-1\n");
    }
    return 0;
}
