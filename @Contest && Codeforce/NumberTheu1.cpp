#include <bits/stdc++.h>
#include<vector>
#define M 1000000
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

bool marked[M];

bool isPrime(int n){
    if(n<2) return false;
    return marked[n] == false;
}

void sieve(int n){
    isPrime(n);
    for(int i=2; i<n; i++){
        if(marked[i]==false){
            for(int j=i+i; j<=n; j++){
                marked[i]=true;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<sieve(n);
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