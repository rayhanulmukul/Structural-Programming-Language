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
bitset<10000007> bs;
vector<ll> prime;

void sieve(long long upper_bonund){
	bs.set();
	bs[0] = bs[1] = 0;
	prime.push_back(2);
	for(ll i = 3; i <= upper_bonund + 1; i +=2){
		if(bs[i]){
			for(ll j = i * i; j <= upper_bonund + 1; j += i){
				bs[j] = 0;
				prime.push_back(i);
			}
		}
	}
}
 
void primeFactorize( ll n){
	for(int i = 0; prime[i] * prime[i] <= n; i++){
		if(n % prime[i] == 0){
			while(n % prime[i] == 0){
				n /= prime[i];
				cout << " " << prime[i] << endl;
			}
		}
	}
	if(n > 1) cout << " " << n << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	sieve(10000007);
	ll x;
	while(scanf("%lld", &x) && x != -1){
		if(x < 0) x *= (-1);
		primeFactorize(x);
		cout<<endl;
	}
	return 0;
}