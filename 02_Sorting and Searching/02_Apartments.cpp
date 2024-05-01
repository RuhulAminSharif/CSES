#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define inf 1e18
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    int a[n]; for( int i = 0; i < n; i += 1 ) cin >> a[i];
    int b[m]; for( int i = 0; i < m; i += 1 ) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i = 0, j = 0, ans = 0;
    while( i < n && j < m ) {
        if( abs(a[i]-b[j]) <= k ) {
            ans += 1;
            i += 1;
            j += 1;
        }
        else if( a[i] - b[j] > k ) {
            j += 1 ;
        }
        else {
            i += 1 ;
        }
    }
    cout << ans << endl;
    return 0;
}
