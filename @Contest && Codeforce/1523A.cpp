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
    int n, m, count = 0;
    cin >> n >> m;
    string s, t;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == '1')count++;
    }
    if(count == 0){
        cout << s << en;
        return;}
    else{
        t = s;
        while(m--){
            for(int i = 0; i < n; i++){
                if(s[i] == '0'){
                    if(s[i + 1] == '1' && i == 0 && i + 1 < n) t[i] = '1';
                    if(s[i - 1] == '1' && i == n -1 && i - 1 >= 0) t[i] = '1';
                    if(s[i - 1] == '1' && s[i + 1] == '1')continue;
                    else if(s[i - 1] == '1' || s[i + 1] == '1') t[i] = '1';
                }
            }
            if(s == t) break;
            else s = t;
        }
    }
    cout << t << en;
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