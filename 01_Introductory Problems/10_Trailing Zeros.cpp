#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll ans = 0;
    for( ll i = 5; ( n / i ) >= 1 ; i *= 5 ) {
        ans += ( n / i );
    }
    cout << ans << endl;
    return 0;
}
