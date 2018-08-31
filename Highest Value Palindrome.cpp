#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
ll mark[100005];
int main()
{
    ll n,k;
    sc2(n,k);
    string str;
    cin>>str;
    for(ll i=0,j=n-1; i<j; i++,j--)
    {
        if(str[i]!=str[j])
        {
            mark[i]=1;
            ll a=str[i]-'0';
            ll b=str[j]-'0';
            ll mx=max(a,b);

            str[i]=mx+'0';
            str[j]=mx+'0';

            k--;

        }
    }
    if(k<0)
    {
        printf("-1\n");
        return 0;
    }
    for(ll i=0,j=n-1; k>0&&i<j; i++,j--)
    {
        if(str[i]!='9')
        {
            if(mark[i]&&k>0)
            {
                k--;
                str[i]='9';
                str[j]='9';
            }
            else if(k>=2)
            {
                str[i]='9';
                str[j]='9';
                k-=2;
            }
        }
    }
    if(n%2==1&&k>0)
    {
        str[n/2]='9';
    }
    cout<<str<<endl;
    return 0;
}
