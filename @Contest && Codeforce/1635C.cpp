#include <bits/stdc++.h>
#include<vector>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ft front()
#define bk back()
#define pi 2*acos(0.0)     /// acos(-1) , 3.14159265359
const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll BIG = 1e18; // not too close to LLONG_MAX
#define gap ' '
#define en '\n'
#define sz(x) (int(x.size()))
#define sor(x)  sort(x.begin(), x.end())

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define each(a,x) for (auto& a: x)

void solve(){
    int n, x;
    cin >> n;
    vector <int> v;
    F0R(i, n){
        cin >> x;
        v.push_back(x);
    }
    if(is_sorted(v.begin(), v.end())) cout << 0 << en;
    else if(v[n-2] == v[n-1]){
        cout << n - 2 << en;
        for(int i = 1; i <= n - 2; i++){
            cout << i << " " << n-1 << " " << n << en;
        }
    }
    else if(v[n-2] < v[n-1] && v[n-1] >= 0){
        cout << n - 2 << en;
        for(int i = 1; i <= n - 2; i++){
            cout << i << " " << n-1 << " " << n << en;
        }
    }
    else cout << -1 << en;
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