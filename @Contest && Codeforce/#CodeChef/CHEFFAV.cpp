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
    int n, x, y;
    cin >> n;
    string s;
    cin >> s;
    bool ok = 0;
    y = n;
    x = n;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'c' && s[i+1] == 'o' && s[i+2] == 'd' && s[i+3] == 'e'){
            x = i;
            ok = 1;
        }
        if(s[i] == 'c' && s[i+1] == 'h' && s[i+2] == 'e' && s[i+3] == 'f'){
            y = i;
            ok = 1;
        }
        if(ok){
            if(x < y) cout << "AC" << en;
            else cout << "WA" << en;
            break;
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
	cin >> t;
	while(t--){
		solve();}
	return 0;
}