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
    while ( n != 1 ) {
        cout << n << " ";
        if( n & 1 ) n = 3 * n + 1;
        else n /= 2;
    }
    cout << n << endl;
    return 0;
}
