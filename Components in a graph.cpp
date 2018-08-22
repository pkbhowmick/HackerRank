#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

vector<ll>V[30005];
ll vis[30005];
ll bfs(ll s)
{
    vis[s]=1;
    ll cnt=1;
    queue<ll>q;
    q.push(s);
    while(!q.empty())
    {
        ll f=q.front();
        q.pop();
        for(ll i=0;i<V[f].size();i++)
        {
            ll v=V[f][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                q.push(v);
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    memset(vis,0,sizeof vis);
    ll n;
    sc1(n);
    for(ll i=1; i<=n; i++)
    {
        ll u,v;
        sc2(u,v);
        V[u].pb(v);
        V[v].pb(u);
    }
    vector<ll>ans;
    for(ll i=1; i<=2*n; i++)
    {
        if(vis[i]==0)
        {
            ll now=bfs(i);
            //cout<<now<<endl;
            if(now>1)
            ans.pb(now);
        }
    }
    sort(ans.begin(),ans.end());
    printf("%lld %lld\n",ans[0],ans[ans.size()-1]);
    return 0;
}

