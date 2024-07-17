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
    ll sum = 0, x, ans = -1e9;
    for( ll i = 0; i < n; i += 1 ) {
        cin >> x;
        sum += x;
        ans = max(ans,sum);
        if( sum < 0 ) {
            sum = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
