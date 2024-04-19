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
    ll sum = n * ( n + 1 ) / 2;
    if( sum & 1 ) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        vector<ll> a, b;
        ll half = sum / 2LL;
        while( n > 0 ) {
            if( ( half - n ) >= 0 ) {
                a.push_back( n );
                half -= n;
            }
            else {
                b.push_back( n ) ;
            }
            n -= 1 ;
        }
        cout << a.size() << endl;
        for( auto it : a ) cout << it << " " ;
        cout << endl;
        cout << b.size() << endl;
        for( auto it : b ) cout << it << " " ;
        cout << endl;
    }
    return 0;
}
