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
    ll n, x, sum; cin >> n >> sum;
    vector<pair<ll,ll>> v(n);
    for( ll i = 0; i < n; i += 1 ) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(),v.end());
    ll left = 0, right = n-1;
    while( left < right ) {
        ll currSum = v[left].first + v[right].first;
        /// cout << currSum << endl;
        if( currSum == sum ) {
            cout << v[left].second << " " << v[right].second << endl;
            return 0;
        }
        else if( currSum > sum ) {
            right -= 1;
        }
        else {
            left += 1;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
