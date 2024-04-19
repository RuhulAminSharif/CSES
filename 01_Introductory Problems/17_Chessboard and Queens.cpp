#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define inf 1e18
int chessboard[8][8];
long long ans = 0;
int rowDir[8], upDiag[16], lowDiag[16];
bool vis[8][8];
void solve( int col )
{
    if( col == 8 ) {
        ans += 1 ;
        return ;
    }
    for( int row = 0; row < 8; row += 1 ) {
        if( chessboard[row][col] && !vis[row][col] && !rowDir[row] && !upDiag[(row+col)] && !lowDiag[7+(col-row)] ) {
            vis[row][col] = 1;
            rowDir[row] = 1;
            upDiag[row+col] = 1;
            lowDiag[7+col-row] = 1;
            solve(col+1);
            rowDir[row] = 0;
            upDiag[row+col] = 0;
            lowDiag[7+col-row] = 0;
            vis[row][col] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for( int i = 0; i < 8; i += 1 ) {
        for( int j = 0; j < 8; j += 1 ) {
            char ch; cin >> ch;
            chessboard[i][j] = ( ch != '*');
        }
    }
    solve(0);
    cout << ans << endl;
    return 0;
}
