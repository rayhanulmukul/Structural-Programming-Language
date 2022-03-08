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
    int n, x;
    cin >> n;
    vector<int> v1, v2, v3;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x < 0)v1.pb(x);
        else if(x > 0)v2.pb(x);
        else v3.pb(x);
    }
    if(v2.size() == 0){
        v2.pb(v1[v1.size() - 1]);
        v1.pop_back();
        v2.pb(v1[v1.size() - 1]);
        v1.pop_back();
    }
    if(v1.size() % 2 == 0){
        v3.pb(v1[v1.size() - 1]);
        v1.pop_back();
    }
    cout << v1.size() << " ";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << en;
    cout << v2.size() << " ";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << en;
    cout << v3.size() << " ";
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << en;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	int t = 1;
	//cin >> t;
	while(t--){
		solve();}
	return 0;
}