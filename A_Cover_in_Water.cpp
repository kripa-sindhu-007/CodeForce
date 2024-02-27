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
  char arr[n];
  rep(i,0,n){
    cin>>arr[i];
  } 
  int count=0,flag=0;
  rep(i,0,n-2){
    if(arr[i]=='.'&&arr[i+1]=='.'&&arr[i+2]=='.'){
        // ans=2;
        flag=1;
        break;
    }
  }
  if(flag==0){
    rep(i,0,n){
        if(arr[i]=='.') count++;
    }
    cout<<count<<"\n";
    return;
  }
  else cout<<"2\n";
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