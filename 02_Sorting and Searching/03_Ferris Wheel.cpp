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
    int n, x; cin >> n >> x;
    int a[n]; for( int i = 0; i < n; i += 1 ) cin >> a[i];
    sort(a,a+n);
    int left = 0, right = n-1;
    int ans = 0;
    bool track[n] = {false};
    while( left < right ) {
        if( a[left]+a[right] <= x ) {
            ans += 1;
            track[left] = track[right] = true;
            left += 1;
            right -= 1;
        }
        else {
            right -= 1;
        }
    }
    for( int i = 0; i < n; i += 1 ) {
        ans += ( track[i] == false ) ;
    }
    cout << ans << endl;
    return 0;
}
