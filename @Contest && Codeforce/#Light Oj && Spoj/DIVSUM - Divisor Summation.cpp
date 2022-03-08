#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pi 2*acos(0.0)     /// acos(-1) , 3.14159265359
#define gap ' '
#define all(x) (x).begin(),(x).end()
#define sz(x) (int(x.size()))
#define SORT(x)  sort(x.begin(), x.end())

#define f0(b) for(int i=0;i<(b);i++)
//#define f00(b) for(int j=0;j<(b);j++)
//#define f1(b) for(int i=1;i<=(b);i++)
//#define f11(b) for(int j=1;j<=(b);j++)
//#define f2(a,b) for(int i=(a);i<=(b);i++)
//#define f22(a,b) for(int j=(a);j<=(b);j++)

int solve(ll n){
	ll sum = 1;
	if(n < 2) return 0;
	for(int i = 2; i * i <= n; ++i){
		if(i * i == n)sum += i; // 6 * 6 = 36
		else if(!(n % i))sum += i, sum += n/i;
	}
	return sum;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t=1, n;
	cin>>t;
	while(t--){
		ll n; cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}