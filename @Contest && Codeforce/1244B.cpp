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
    int n, i, j, l, one = 0, zero = 0, value = 10000;
    cin >> n;
    string s;
    cin >> s;
    l = n / 2;
    for(i = 0; i < n; i++){
        if(s[i] == '1'){
            one++;
            value = min(value,min(i + 1,(n - i)));
        }
        else zero++;
    }
    if(one == n) cout << 2 * n << en;
    else if(zero == n) cout << n << en;
    else if(s[0] == '1' || s[n-1] == '1') cout << 2 * n << en;
    else {
        //value += 1;
        int sum = n - value + 1;
        //cout << (n*2 - (sum * 2)) << en;
        cout << sum * 2 << en;
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