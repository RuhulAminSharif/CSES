#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s; cin >> s;
    int freq[26] = { 0 };
    for( auto it : s ) {
        freq[it-'A'] += 1;
    }
    int cnt = 0, single_char = -1;
    for( int i = 0 ; i < 26 ; i += 1 ) {
        if( freq[i] & 1 ) {
            cnt += 1;
            single_char = i;
        }
    }
    if( cnt > 1 ) cout << "NO SOLUTION" << endl;
    else {
        string half = "";
        for( int i = 0; i < 26; i += 1 ) {
            for( int j = 0; j < freq[i] / 2; j += 1 ) {
                half += char('A'+i);
            }
        }
        string ans = half;
        if( single_char != -1 ) {
            ans += char('A'+single_char);
        }
        reverse(half.begin(), half.end());
        ans += half;
        cout << ans << endl;
    }
    return 0;
}
