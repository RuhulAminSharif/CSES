#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
/*
    1   2   9   10  25  26
    4   3   8   11  24  27
    5   6   7   12  23  28
    16  15  14  13  22  29
    17  18  19  20  21  30
    36  35  34  33  32  31
*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll row, col; cin >> row >> col;
        if(row<=col){
            if(col%2==1){
                cout << col*col-row+1 << endl;
            }else{
                cout << (col-1)*(col-1)+row << endl;
            }
        }else{
            if(row%2==0){
                cout << row*row-col+1 << endl;
            }else{
                cout << (row-1)*(row-1)+col << endl;
            }
        }
    }
    return 0;
}
