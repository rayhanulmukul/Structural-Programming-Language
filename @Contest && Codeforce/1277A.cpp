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
#define en '\n'
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
    int n, c = 0, sum = 0;;
    cin >> n;
    if(n < 10) cout << n << en;
    else if(n <= 100){
        cout << n / 11 + 9 << en;
    }
    else if(n <= 1000){
        cout << n / 111 + 18 << en;
    }
    else if(n <= 10000){
        cout << n / 1111 + 27 << en;
    }
    else if(n <= 100000){
        cout << n / 11111 + 36 << en;
    }
    else if(n <= 1000000){
        cout << n / 111111 + 45 << en;
    }
    else if(n <= 10000000){
        cout << n / 1111111 + 54 << en;
    }
    else if(n <= 100000000){
        cout << n / 11111111 + 63 << en;
    }
    else if(n <= 1000000000){
        cout << n / 111111111 + 72 << en;
    }
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	int t = 1;
	cin >> t;
	while(t--){
		solve();}
	return 0;
}