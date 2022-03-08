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
    bool one = 0;
    int n, m, r, c, count = 0;
    cin >> n >> m >> r >> c;
    char arr[n][m], ch;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(i == r - 1 && j == c - 1) ch = arr[i][j];
            if(arr[i][j] == 'B') count++;
        }
    }
    if((n == 1 && m == 1 && ch == 'W') || count == 0) cout << -1 << en;
    else if(ch == 'B') cout << 0 << en;
    else{
        for(int i = r - 1; i < r; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == 'B') one = 1;
            }
        }
        for(int i = c - 1; i < c; i++){
            for(int j = 0; j < n; j++){
                if(arr[j][i] == 'B') one = 1;
            }
        }
        if(one) cout << 1 << en;
        else cout << 2 << en;
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