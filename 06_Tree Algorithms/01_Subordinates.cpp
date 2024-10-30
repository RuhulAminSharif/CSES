#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
const int N = 1e6+10;
vector<int> g[N];
vector<bool> vis(N);
vector<int>sub(N);
void dfs( int node )
{
    vis[node] = true;
    for( auto child : g[node] ) {
        if( vis[child] == false ) {
            dfs(child);
            sub[node] += sub[child] + 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    for( int i = 2; i <= n; i += 1 ) {
        int boss; cin >> boss;
        g[boss].push_back(i);
    }
    dfs(1);
    for( int i = 1; i <= n; i += 1 ) {
        cout << sub[i] << " ";
    }
    cout << endl;
}
