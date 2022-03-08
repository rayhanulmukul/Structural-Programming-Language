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
    int arr[n][5];
    for(int i = 0; i < n; i++){
        for(int j = 0; j <5; j++){
            cin >> arr[i][j];
        }
    }
    int a, b, ab;
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j <5; j++){
            a = 0, b = 0, ab = 0;
            for(int k = 0; k < n; k++){
                if(arr[k][i] == 1 && arr[k][j] == 1) ab++;
                else {
                    if(arr[k][i] == 1) a++;
                    if(arr[k][j] == 1) b++;
                }
            }
            if(a + b + ab == n & a + ab >= n / 2 & b + ab >= n / 2){
                cout << "YES" << en;
                return;
            }
        }
    }
    cout << "NO" << en;
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