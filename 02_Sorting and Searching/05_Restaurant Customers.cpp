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
    ll n; cin >> n;
    vector<ll> arr(n), dep(n);
    for( ll i = 0; i < n; i += 1 ) {
        cin >> arr[i] >> dep[i];
    }
    sort( arr.begin(), arr.end() ) ;
    sort( dep.begin(), dep.end() ) ;
    ll curr = 0, ans = 0;
    ll i = 0, j = 0;
    while( i < n && j < n ) {
        if( arr[i] < dep[j] ) {
            curr += 1;
            ans = max( curr, ans ) ;
            i += 1;
        }
        else {
            curr -= 1;
            j += 1;
        }
    }
    cout << ans << endl;
    return 0;
}
