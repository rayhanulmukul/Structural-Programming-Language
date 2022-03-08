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

typedef vector<int> vi;
typedef pair<int,int> PI;
const int N = (int)1e6 + 7;
template<typename T>
ostream& operator<<(ostream &os, const vector<T> &v)
{
    os << '{';
    for (const auto &x : v) os << " " << x;
    return os << '}';
    cout<<endl;
}

void solve(){
	int n,d;
	cin>>n>>d;
	int a[n];
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(a[n-1]<=d || a[0]+a[1]<=d){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	// std::vector<int> a(n);
	// for(int& x : a){
	// 	cin>>x;
	// }
	// sort(a.begin(),a.end());
	// cout<<(a.back()<=d || a[0]+a[1]<=d ? "YES" : "NO")<<endl;
	
}
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
    solve();
	}
	return 0;
}