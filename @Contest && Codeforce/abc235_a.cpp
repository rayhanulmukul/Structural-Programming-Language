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
    ll a, b, c, sum, sum1, sum2, a1, b1, c1, a2, b2, c2, a3, b3, c3;
    cin >> a >> b >> c;
    a1 = a * 100;
    b1 = b * 10;
    c1 = c;
    sum = a1 + b1 + c1;
    cout << a1 << b1 << c1 << en;
    a2 = a;
    b2 = b * 100;
    c2 = c * 10;
    sum1 = a2 + b2 + c2;
    a3 = a * 10;
    b3 = b;
    c3 = c * 100;
    sum2 = a3 + b3 + c3;
   // cout << sum << sum1 << sum2 << en;

}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	int t = 1;
	//cin >> t;
	while(t--){
		solve();}
	return 0;
}