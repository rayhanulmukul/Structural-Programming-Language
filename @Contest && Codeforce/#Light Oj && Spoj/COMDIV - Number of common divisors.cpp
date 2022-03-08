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
#define all(x) (x).begin(),(x).end()
#define sz(x) (int(x.size()))
#define SORT(x)  sort(x.begin(), x.end())

#define f0(b) for(int i=0;i<(b);i++)
//#define f00(b) for(int j=0;j<(b);j++)
//#define f1(b) for(int i=1;i<=(b);i++)
//#define f11(b) for(int j=1;j<=(b);j++)
//#define f2(a,b) for(int i=(a);i<=(b);i++)
//#define f22(a,b) for(int j=(a);j<=(b);j++)
int GetDivisior(int n){
	int ans = 0;
	for(int i = 1; i * i <= n; ++i){
		if(i * i == n) ans += 1;
		else if(!(n % i)) ans += 2;
	}
	return ans;
}

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t=1, a, b;
	cin>>t;
	while(t--){
		cin >> a >> b;
		int x = gcd(a, b);
		cout << GetDivisior(x) << "\n";
	}
	return 0;
}