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
	ll a,sum1=0,sum2=0;
	cin>>a;
	vector<int> num;
	if(a%2 == 0 && a%4 == 0){
		cout<<"YES"<<endl;
		for(int i=1; i<=a; i++){
			if(i%2 == 0){
				sum1 = sum1 + i;
				num.push_back(i);
			}
		}
		for(int i=1; i<=a; i++){
			if(i%2 != 0){
				num.push_back(i);
				sum2 = sum2 + i;
			}
		}
		int d = sum1 - sum2;
		num.back() = d + num.back();
		//num.back() = last + d;
		for(int i=0; i<a; i++){
			cout<<num[i]<<" ";
		}
 	}
 	else{
 		cout<<"NO"<<endl;
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