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

void solve(){
	// int n,a,b,c,d,s1,s2,s3,s4;
	// cin>>n>>a>>b>>c>>d;

	int  n , b , c , d , a ; cin >> n >> a >> b >> c >> d;
	int mn = n * ( a- b);
	int mx = n * (a + b);
	if( mx < c - d || mn > c + d) cout << "NO\n";
	else cout << "YES\n";
	
	/*s1 = n*(a + b);
	s2 = n*(a - b);
	s3 = c + d;
	s4 = c - d;

	/*if(s1<s4 || s3< s2){
		cout<<"NO"<<endl;
	}*/
}
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t=1;
	cin>>t;
	while(t--){
		solve();}
	return 0;
}