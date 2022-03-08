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
    int n;
    cin >> n;
    char ch[n][n];
    vector < pair <int, int >> p;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ch[i][j];
            if(ch[i][j] == '*')p.push_back({i,j});
        }
    }
    if(p[0].first == p[0].second){
        if(p[0].first == 0){
        ch[p[0].first + 1][p[0].second] = '*';
        ch[p[1].first + 1][p[1].second] = '*';
        }
        else{
            ch[p[0].first + 1][p[0].second] = '*';
            ch[p[1].first + 1][p[1].second] = '*';
        }
    }
    
    else if(p[0].second == p[1].second){
        ch[p[0].first][p[0].second + 1] = '*';
        ch[p[1].first][p[1].second + 1] = '*';
    }
    else if(p[0].first == p[1].second){
        ch[p[0].first][p[1].second] = '*';
        ch[p[1].first][p[0].second] = '*';
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ch[i][j];
        }
        cout << en;
    }
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	int t=1;
	cin>>t;
	while(t--){
		solve();}
	return 0;
}