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
    ll a, b, cnt = 0, k;
    cin >> a >> b;
    if(a > b) swap(a, b); // 1
    while(b > a){         // 2 
        bool k = 1;        //3
        if(b%8 == 0 && b/8 >= a) b /= 8, cnt++, k = 0;          // 4, 5, 6
        else if(b%4 == 0 && b/4 >= a) b /= 4, cnt++, k = 0;
        else if(b%2 == 0 && b/2 >= a) b /= 2, cnt++, k = 0;
        if(k) break;    // 7
    }
    if(a != b) cout << -1 << en;
    else cout << cnt << en;
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