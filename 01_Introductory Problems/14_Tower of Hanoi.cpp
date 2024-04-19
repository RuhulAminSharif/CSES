#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define inf 1e18
void hanoi( int from, int to, int depth )
{
    if( depth == 1 ) {
        cout << from << " " << to << endl;
        return ;
    }
    int other = 6 - (from+to);
    hanoi(from, other , depth-1);
    cout << from << " " << to << endl;
    hanoi(other, to, depth-1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    cout << ( ( 1 << n ) - 1 ) << endl;
    hanoi(1,3,n);
    return 0;
}
