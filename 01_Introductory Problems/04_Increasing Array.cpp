#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define inf 1e18
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll a[ n ] , ans = 0;
    for( ll i = 0; i < n; i += 1 ) {
        cin >> a[i];
        if( i && ( a[i] < a[i-1] ) ) {
            ans += ( a[i-1] - a[i] ) ;
            a[i] = a[i-1];
        }
    }
    cout << ans << endl;
    return 0;
}
