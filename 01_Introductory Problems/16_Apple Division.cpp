#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define inf 1e18
const ll mod = 1e9+7;
ll solve( vector<ll>& v, ll idx, ll sum1, ll sum2)
{
    if( idx == v.size() ) {
        return abs( sum1 - sum2 ) ;
    }
    ll first = solve( v, idx+1, sum1 + v[idx], sum2 ) ;
    ll second = solve( v, idx + 1, sum1, sum2 + v[idx] ) ;
    return min( first, second );
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    vector<ll> v ( n );
    for( ll i = 0; i < n; i += 1 ) {
        cin >> v[i];
    }
    cout << solve( v, 0, 0, 0 ) << endl;
    return 0;
}
