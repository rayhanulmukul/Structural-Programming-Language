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
    int d, sT, sum = 0, x, y, dif = 0, sum1 = 0;
    cin >> d >> sT;
    int a[d], b[d];
    F0R(i, d){
        cin >> a[i] >> b[i];
        sum += b[i];
        sum1 += a[i];
    }
    //cout << sum1 << sum;
    if(sT < sum1 || sT > sum) cout << "NO" << en;
    else{
        cout << "YES" << en;
        dif = sT - sum1;
        F0R(i, d){
            if(dif > b[i] - a[i]){
                cout << b[i] << " ";
                dif -= b[i] - a[i];
            }
            else{
                cout << a[i] + dif << " ";
                dif = 0;
            }
        }
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