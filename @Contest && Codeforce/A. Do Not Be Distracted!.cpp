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
	int n,b;
	cin>>n;
	string s;
	cin >> s;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(s[i] == s[j] && s[j] != s[j+1]){
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";



/*	for(char c = 'A'; c <= 'Z'; c++){
		int first = n;
		int last = -1;

		for(int i = 0; i< n; i++){
			if(s[i] == c){
				first = min(first, i);
				last = max(last, i);
			}
		}
		for(int i = first; i <= last; i++){
			if(s[i] != c){
				cout << "NO" << '\n';
				return;
			}
		}
		
	}
	cout << "YES\n";*/
	
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