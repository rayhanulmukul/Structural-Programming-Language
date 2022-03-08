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
    int a, b, c;
    cin >> a >> b >> c;
    int m = max({a, b, c});
    if(m == 0) cout << a + 1 << " " << b + 1 << " " << c + 1 << en;
    else {
        if(m == a & m == b) cout << m - a + 1 << " " << m - b + 1 << " " << m - c + 1 << en;
        else if(m == a & m == c) cout << m - a + 1 << " " << m - b + 1 << " " << m - c + 1 << en;
        else if(m == b & m == c) cout << m - a + 1 << " " << m - b + 1 << " " << m - c + 1 << en;

        else if(m == a) cout << 0 << " " << m - b + 1 << " " << m - c + 1 << en;
        else if(m == b) cout << m - a + 1 << " " << 0 << " " << m - c + 1 << en;
        else cout << m - a + 1 << " " << m - b + 1 << " " << 0 << en;
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