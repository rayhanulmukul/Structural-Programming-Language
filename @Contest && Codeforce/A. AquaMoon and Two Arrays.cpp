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
	int n, sum1 = 0, sum2 = 0;
	cin >> n;

	vector <int> inc, dec;

	int a[n], b[n];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
	for(int i = 1; i <= n; i++){
		if(a[i] < b[i]){
			int x = b[i] - a[i];
			for(int j = 0; j < x; j++) inc.push_back(i);		// i =1 (1,1)  
				sum1 += x;
		}
		else if(a[i] > b[i]){
			int y = a[i] - b[i];
			for(int j = 0; j < y; j++) dec.push_back(i);		// i =2 (2)  i =3 (3)
				sum2 += y;
		}
	}
	if(sum1 != sum2) cout << "-1" << '\n';
	else if(sum1 == 0) cout << "0" << '\n';
	else {
		cout << sum1 << '\n';
		for(int i = 0; i < inc.size(); i++){
			cout << dec[i]  << " " << inc[i] << '\n';   
		}
	}
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