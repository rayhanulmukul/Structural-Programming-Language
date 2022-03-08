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
    int x1, p1, x2 , p2;
    cin >> x1 >> p1 >> x2 >> p2;
    if(p1 >= p2){
        int l = p1 - p2;
        ll m = x1 * pow(10, l);
        if(m > x2) cout << '>' << en;
        else if(m == x2) cout << '=' << en;
        else cout << '<' << en;
    }
    else if(p1 < p2){
        int l = p2 - p1;
        ll m = x2 * pow(10, l);
        if(x1 < m) cout << '<' << en;
        else if(m == x2) cout << '=' << en;
        else cout << '>' << en;
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