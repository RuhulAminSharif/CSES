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
    ll n ; cin >> n ;
    ll sum = n * ( n + 1 ) / 2;
    for( ll i = 1; i < n ; i += 1 ) {
        ll x; cin >> x ;
        sum -= x;
    }
    cout << sum << endl;
    return 0;
}
