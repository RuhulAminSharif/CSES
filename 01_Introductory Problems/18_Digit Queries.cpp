#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define inf 1e18
/**
1 2 3 4 5 6 7 8 9                                                 -------> 9    ----> 1-9
10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 ... ... 99  -------> 90   ----> 10-189
100 101 102 103 104 105 106 107 108 109 110 111 112  ... ... 999  -------> 900  ----> 190-1989
1000 1001 1002 1003 1004 1005 1006 1007 1008 1009   ... ... 9999  -------> 9000 ----> 1990-19989
**/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q; cin >> q;
    while( q-- ) {
        ll k; cin >> k;
        long long ten = 1, digit = 1;
        while( 9 * ten * digit < k ) {
            k -= ( 9 * ten * digit ) ;
            ten *= 10;
            digit += 1;
        }
        ll req = ( ten - 1 ) + ( k + digit -1 ) / digit;
        string ans = to_string(req);
        k %= digit;
        if( k == 0 ) k = ans.size();
        cout << ans[k-1] << endl;
    }
    return 0;
}
