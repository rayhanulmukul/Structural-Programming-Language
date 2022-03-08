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
	ll n,a,s1=0,s2=0,s3=0,s4=0,m_taxi=0,s=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		if(a==4)m_taxi++;
		else if(a==3)s3++;
		else if(a==2)s2++;
		else s1++;
	}
	if(s1>s3){
		s1-=s3;
	}
	else s1 = 0;
	m_taxi += s2/2;
	s = s1 + (s2%2)*2;
	if(s%4>0){
		s = s/4 + 1;
	}
	else s = s/4;
	cout<<(s+s3+m_taxi)<<endl;


}
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t=1;
	//cin>>t;
	while(t--){
		solve();}
	return 0;
}