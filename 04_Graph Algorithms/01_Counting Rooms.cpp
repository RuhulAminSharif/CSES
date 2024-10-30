#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
const int N = 1e3+5;
vector<vector<char>> adjMat(N, vector<char>(N));
vector<vector<int>> vis(N, vector<int>(N));
int x[4] = {0,-1,0,1};
int y[4] = {-1,0,1,0};
void dfs( int r, int c, int n, int m )
{
    vis[r][c] = true;
    for( int i = 0; i < 4; i += 1 ) {
        int nr = r + x[i];
        int nc = c + y[i];
        if( nr >= 0 && nc >= 0 && nr < n && nc < m && vis[nr][nc] == false && adjMat[nr][nc] == '.' ) {
            dfs(nr, nc, n, m);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m; cin >> n >> m;
    for( int i = 0; i < n; i += 1 ) {
        for( int j = 0; j < m; j += 1 ) {
            cin >> adjMat[i][j];
        }
    }
    int ans = 0;
    for( int i = 0; i < n; i += 1 ) {
        for( int j = 0; j < m; j += 1 ) {
            if( adjMat[i][j] == '.' && vis[i][j] == false ) {
                dfs(i,j,n,m);
                ans += 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
