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
    string s;
    cin >> s;
    char ch[] = {'a', 'b', 'c'};
    vector <char> v;

    for(int i = 0; i < s.length(); i++){
        v.push_back(s[i]);
    }
    for(int i = 0; i < s.length(); i++){
        if(v[i] == '?'){
            for(int j = 0; j < 3; j++){
                if(v[i - 1] != ch[j] & v[i + 1] != ch[j]) v[i] = ch[j];
            }
        }
    }
    for(int i = 0; i < v.size() - 1; i++){
        if(v[i] == v[i + 1]){
            cout << -1 << en;
            return;
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
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
	cin >> t;
	while(t--){
		solve();}
	return 0;
}