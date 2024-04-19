#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define inf 1e18
const ll mod = 1e9+7;
vector<string> generate(int n )
{
    if( n == 1 ) {
        return { "0" , "1" };
    }
    vector<string> ans;
    vector<string> temp = generate( n - 1 ) ;
    for( int i = 0; i < temp.size(); i += 1 ) {
        ans.push_back( "0" + temp[i] ) ;
    }
    for( int i = temp.size()-1; i >= 0; i -= 1 ) {
        ans.push_back( "1" + temp[i] ) ;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector<string> gray = generate( n ) ;
    for( auto it : gray ) {
        cout << it << endl;
    }
    return 0;
}
