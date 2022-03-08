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
    ll n, ma = 0, mi = BIG, c = 0, c1 = 0;
    cin >> n;
    ll arr[n+1];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mi = min(mi, arr[i]);
        ma = max(ma, arr[i]);
    }
    sort(arr, arr + n);
    if(mi == ma) cout << ma - mi << " " << n*(n-1) / 2 << en;
    else{
        for(int i = 0; i < n; i++){
            if(arr[i] == mi) c++;
            else break;
        }
        for(int i = n; i >= 0; i--){
            if(arr[i-1] == ma) c1++;
            else break;
        }
        cout << ma - mi << " ";
        cout << c * c1 << en;
    }
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