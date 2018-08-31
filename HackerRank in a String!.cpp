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
    string need="hackerrank";
    while(test--)
    {
        string str;
        cin>>str;
        ll now=0;
        ll l=str.size();
        ll ok=0;
        for(ll i=0;i<l;i++)
        {
            if(str[i]==need[now])
            {
                now++;
                if(now==10)
                {
                    ok=1;
                    break;
                }
            }
        }
        if(ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
