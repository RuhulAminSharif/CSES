#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define inf 1e18
const int N = 7;
string s;
bool vis[N+1][N+1];
long long ans;
bool check( int x, int y )
{
    return ( 1 <= x && x <= N && 1 <= y && y <= N ) ;
}
void dfs( int r, int c, int idx )
{
    if( idx == N*N-1 || ( r == N && c == 1 ) ) {
        ans += ( idx == N*N-1 && ( r == N && c == 1 ) ) ;
        return ;
    }
    if( ( !check(r+1,c) || vis[r+1][c] ) && ( !check(r-1,c) || vis[r-1][c] ) ) {
        if( check(r,c-1) && !vis[r][c-1] && check(r,c+1) && !vis[r][c+1] )  {
            return ;
        }
    }
    if(  ( !check(r,c+1) || vis[r][c+1] ) && ( !check(r,c-1) || vis[r][c-1] ) ) {
        if( check(r+1,c) && !vis[r+1][c] && check(r-1,c) && !vis[r-1][c] ) {
            return ;
        }
    }
    vis[r][c] = true;
    if( s[idx] == 'D' || s[idx] == '?' ) {
        if( check( r+1 , c ) && !vis[r+1][c] ) {
            dfs( r+1, c , idx + 1 ) ;
        }
    }
    if( s[idx] == 'U' || s[idx] == '?' ) {
        if( check( r-1 , c ) && !vis[r-1][c] ) {
            dfs( r-1, c , idx + 1 ) ;
        }
    }
    if( s[idx] == 'L' || s[idx] == '?' ) {
        if( check( r , c - 1 ) && !vis[r][c-1] ) {
            dfs( r, c - 1 , idx + 1 ) ;
        }
    }
    if( s[idx] == 'R' || s[idx] == '?' ) {
        if( check( r , c + 1 ) && !vis[r][c+1] ) {
            dfs( r, c + 1 , idx + 1 ) ;
        }
    }
    vis[r][c] = false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    dfs(1,1,0);
    cout << ans << endl;
    return 0;
}
