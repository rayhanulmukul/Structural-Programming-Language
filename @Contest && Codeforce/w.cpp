#include <bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pi 2*acos(0.0)     /// acos(-1) , 3.14159265359
#define gap ' '
#define en '\n'
#define all(x) (x).begin(),(x).end()
#define sz(x) (int(x.size()))
#define SORT(x)  sort(x.begin(), x.end())

#define f0(b) for(int i=0;i<(b);i++)
//#define f00(b) for(int j=0;j<(b);j++)
//#define f1(b) for(int i=1;i<=(b);i++)
//#define f11(b) for(int j=1;j<=(b);j++)
//#define f2(a,b) for(int i=(a);i<=(b);i++)
//#define f22(a,b) for(int j=(a);j<=(b);j++)

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(5));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 5; j++) {
        cin >> a[i][j];
      }
    }
    bool ok = false;
    for (int x = 0; x < 5; x++) {
      for (int y = x + 1; y < 5; y++) {
        int ka = 0;
        int kb = 0;
        int kab = 0;
        for (int i = 0; i < n; i++) {
          if (a[i][x] == 1 && a[i][y] == 1) {
            kab += 1;
          } else {
            if (a[i][x] == 1) {
              ka += 1;
            }
            if (a[i][y] == 1) {
              kb += 1;
            }
          }
        }
        cout << ka + kab << kb + kab << " ";
        if (ka + kb + kab == n && ka + kab >= n / 2 && kb + kab >= n / 2) {
          ok = 1;
        }
      }
      cout << en;
    }
    cout << (ok ? "YES" : "NO") << '\n';
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	int t = 1;
	cin >> t;
	while(t--){
		solve();}
	return 0;
}