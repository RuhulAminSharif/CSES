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
    if ( n == 1 ) cout << 1 << endl;
    else if ( n < 4 ) cout << "NO SOLUTION" << endl;
    else if ( n == 4 ) cout << "2 4 1 3" << endl;
    else {
        for( ll i = 1; i <= n; i += 2 ) cout << i << " ";
        for( ll i = 2; i <= n; i += 2 ) {
            cout << i ;
            if (i + 2 <= n) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
