#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define inf 1e18
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s; cin >> s;
    sort( s.begin(), s.end() );
    vector<string> ans;
    do{
        ans.push_back( s ) ;
    } while( next_permutation( s.begin(), s.end() ) );
    cout << ans.size() << endl;
    for( auto it : ans ) {
        cout << it << endl;
    }
    return 0;
}
