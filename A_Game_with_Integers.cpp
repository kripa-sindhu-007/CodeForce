#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define vi vector<int>
#define vvi vector< vector<int> >
#define pi pair<int,int>
#define vii vector<pi>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
const int M=1e9+7;

void solve() {
  int n;
  cin>>n;
  if(n%3==0){
    cout<<"Second\n";
    return;
  }
  else{
    cout<<"First\n";
    return;
  }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T=1;
    cin>>T;
    while(T--) {
        solve();
    }
    return 0;
}