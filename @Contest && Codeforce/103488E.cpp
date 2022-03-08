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
    int n, k, ans = 0,m = 100000000, Nmin = 0, g, c = 0;
        cin >> n >> k;
        int arr[n];
        vector <int> v;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            m = min(arr[i], m);
        }
        for(int i = 0; i < n; i++){
            if(arr[i] != m) Nmin++;
        }
        if(k == 1 && Nmin == 0) cout << 0 << en;
        else if(k == 1 && Nmin != 0) cout << -1 << en;
        else{
            for(int i = 0; i < n; i++){
                if(arr[i] != m){
                    g = 0;
                    ans++;
                    for(int j = i; j < n; j++){
                        g++;
                        if(arr[j] != m)c++;
                        arr[j] = m;
                        if(g == k)break;
                    }
                   if(c == k) ans++;
                }
            }
            cout << ans << en;
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
	cin >> t;
	while(t--){
		solve();}
	return 0;
}