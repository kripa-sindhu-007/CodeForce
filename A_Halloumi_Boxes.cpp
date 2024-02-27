#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vii vector<pi>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
const int M = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    rep(i, 0, n)
    {
        cin >> arr[i];
    }
    if (k < 2)
    {

        int flag = 0;
        rep(i, 0, n-1)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1){
            cout << "NO\n";
            return;
        }
            
        else
            cout << "YES\n";
    }
    else
    {
        cout << "YES\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}