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

int solve(ll n){
    ll ans, i;
    ans = sqrt(n);
    for(i = 2; i <= ans; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	ll t = 1, x, sqr, n;
	cin >> t;
	while(t--){
        cin >> x;
        sqr = sqrt(x);
        if(sqr == 1) cout << "NO" << en;
        else if(sqr*sqr == x && solve(sqr)) cout << "YES" << en;
        else cout << "NO" << en;
    }
	return 0;
}