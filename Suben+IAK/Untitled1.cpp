/***💞MRM💞***/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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
	int n,r;
	cin>>n;
	string s;
	cin>>s;

	if(s[0]=='1'){
		r=2;}
	else r=1;
	cout<<"1";

	for(int i=1;i<n;i++){
		if(s[i] + 1 != r){
			cout<<"0";
			r=1;
		}

		else{
			cout<<"1";
			r=2;

		}

	}

}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();}
	return 0;
}
