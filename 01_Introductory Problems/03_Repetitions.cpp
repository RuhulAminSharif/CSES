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
    string s; cin >> s;
    ll ans = 1, cnt = 1;
    for( ll idx = 1; idx < s.size(); idx += 1 ) {
        if( s[idx] == s[idx-1] ) {
            cnt += 1;
        } else {
            ans = max( ans, cnt ) ;
            cnt = 1;
        }
    }
    ans = max( ans, cnt );
    cout << ans << endl;
    return 0;
}
