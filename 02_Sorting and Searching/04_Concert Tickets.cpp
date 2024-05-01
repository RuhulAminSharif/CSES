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
    int n, m; cin >> n >> m;
    multiset<int> st;
    for( int i = 0; i < n; i += 1 ) {
        int x; cin >> x;
        st.insert(x);
    }
    for( int i = 0; i < m; i += 1 ) {
        int x; cin >> x;
        auto it = st.upper_bound( x ) ;
        if( it == st.begin() ) {
            cout << -1 << endl;
        }
        else {
            cout << *(--it) << endl;
            st.erase(it);
        }
    }
    return 0;
}
