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
        set<char>S;
        string str;
        cin>>str;
        ll l=str.size();
        for(ll i=0;i<l;i++)
        {
            S.insert(str[i]);
        }
        cout<<S.size()<<endl;
    }
    return 0;
}
