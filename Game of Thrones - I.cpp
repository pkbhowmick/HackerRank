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

    string str;
    cin>>str;
    ll l=str.size();
    for(ll i=0;i<l;i++)
    {
        ll now=str[i]-'a';
        arr[now]++;
    }
    for(ll i=0;i<26;i++)
    {
        if(arr[i]%2==1&&l%2==1)
        {
            l++;
        }
        else if(arr[i]%2==1&&l%2==0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
