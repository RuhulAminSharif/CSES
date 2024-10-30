#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
const ll N = 1e5+6;
vector<ll> g[N];
vector<bool> vis(N);
ll n, m;
void dfs( int node )
{
    vis[node] = true;
    for( auto it : g[node] ) {
        if( vis[it] == false ) {
            dfs(it);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for( int i = 0; i < m; i += 1 ) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt = 0;
    vector<int>ans;
    for( int i = 1; i <= n; i += 1 ) {
        if( vis[i] == false ) {
            dfs(i);
            ans.push_back(i);
            cnt += 1;
        }
    }
    cout << cnt-1 << endl;
    for( int i = 1; i < cnt; i += 1 ){
        cout << ans[i-1] << " " << ans[i] << endl;
    }
}
