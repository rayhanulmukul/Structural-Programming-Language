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
    string s;
    cin >> s;
    string l;
    l = s;
    reverse(l.begin(), l.end());
    if(l == s) cout << "Yes";
    else {
        int k, count = 0, count1 = 0;
        string m, p;
        m = s;
        k = s.size();
        for(int i = k - 1; i >= 0; i--){
            if(m[i] == 'a'){
                count++;
                m.pop_back();
            }
            else break;
        }
        reverse(m.begin(), m.end());
        k = m.size();
        for(int i = k - 1; i >= 0; i--){
            if(m[i] == 'a'){
                count1++;
                m.pop_back();
            }
            else break;
        }
        p = m;
        reverse(m.begin(), m.end());    
        if(count1 > count) cout << "No";
        else if(p == m) cout << "Yes";
        else cout << "No";

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