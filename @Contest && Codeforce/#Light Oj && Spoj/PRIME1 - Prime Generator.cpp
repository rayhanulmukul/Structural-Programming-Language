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
#define MAX 32000

#define f0(b) for(int i=0;i<(b);i++)
//#define f00(b) for(int j=0;j<(b);j++)
//#define f1(b) for(int i=1;i<=(b);i++)
//#define f11(b) for(int j=1;j<=(b);j++)
//#define f2(a,b) for(int i=(a);i<=(b);i++)
//#define f22(a,b) for(int j=(a);j<=(b);j++)
vector<int> primes;

void sieve(){
	bool isPrime[MAX];
	for(int i = 0; i < MAX; ++i) isPrime[i] = true;
	for(int i = 3; i * i <= MAX; i += 2){
		if(isPrime){
			for(int j = i * i; j <= MAX; j += i){
				isPrime[j] = false;
			}
		}
	}
	primes.push_back(2);
	for(int i = 3; i < MAX; i += 2){
		if (isPrime[i]) primes.push_back(i);
	}
}
void segSieve (ll l, ll r){
	bool isPrime[r-l+1];
	for(int i = 0; i < r - l  + 1; ++i) isPrime[i] = true;
	if(l == 1) isPrime[0] = false;
	for(int i = 0; primes[i]*primes[i] <= r; ++i){
		int currentPrime = primes[i];
		ll base = (l/currentPrime)*currentPrime;
		if(base < l) base += currentPrime;
		for(ll j = base; j <= r; j += currentPrime){
			isPrime[j-l] = false;
		}
		if(base == currentPrime) isPrime[base - l] = true;
	}
	for(int i = 0; i < r - l + 1; ++i){
			if(isPrime[i]) cout << (i+l) << endl;
		}
}

int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	sieve();
	int t=1;
	cin>>t;
	while(t--){
		ll l, r;
		cin >> l >> r;
		segSieve(l,r);

	}
	return 0;
}
