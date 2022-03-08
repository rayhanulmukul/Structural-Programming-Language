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
#define endl '\n'
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
    char ch[500][500];
    vector < pair<int,int>> v;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ch[i][j];
            if(ch[i][j] == '*'){
                v.push_back({i,j});
                
            }
        }
    }
    
    if(v[0].first == v[1].first){
        if(v[0].first == 0){
            ch[v[0].first + 1][v[0].second] = '*';
            ch[v[1].first + 1][v[1].second] = '*';
        }
        else{
            ch[0][v[0].second] = '*';
            ch[0][v[1].second] = '*';
        }
    }
    else if(v[0].second == v[1].second){
        if(v[0].second == 0){
            ch[v[0].first][v[0].second + 1] = '*';
            ch[v[1].first][v[1].second + 1] = '*';
        }
        else{
            ch[v[0].first][0] = '*';
            ch[v[1].first][0] = '*';
        }
    }
    else{
        sort(v.begin(),v.end());
        ch[v[0].first][v[1].second] = '*';
        ch[v[1].first][v[0].second] = '*';
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ch[i][j];
        }
        cout << '\n';
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