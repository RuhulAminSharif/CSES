#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n, q;
  cin >> n >> q;
  ll a[n + 5], pref[n + 5] = {0};
  for (ll i = 1; i <= n; i += 1)
  {
    cin >> a[i];
    pref[i] = pref[i - 1] + a[i];
  }
  while (q--)
  {
    ll l, r;
    cin >> l >> r;
    cout << pref[r] - pref[l - 1] << endl;
  }
  return 0;
}
