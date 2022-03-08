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
int palindrome( vector <int> &v){
    int i = 0, j = v.size() - 1, ans1 = 1;
    while(i < j){
        if(v[i] != v[j]){
            ans1 = 0;
            break;
        }
        i++;
        j--;
    }
    return ans1;

}

void solve(){
    int n, x, y;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int i = 0, j = n - 1, ans = 1;
    while(i < j){
        if(arr[i] != arr[j]){
            ans = 0;
            x = arr[i], y = arr[j];
            break;
        }
        i++;
        j--;
    }
    if(ans == 1) cout << "YES" << en;
    else {
        vector <int> v1, v2;
        for(int i = 0; i < n; i++){
            if(arr[i] != x) v1.push_back(arr[i]);
        }
        for(int i = 0; i < n; i++){
            if(arr[i] != y) v2.push_back(arr[i]);
        }
        int ans1 = palindrome(v1);
        int ans2 = palindrome(v2);
        if(ans1 == 1 || ans2 == 1) cout << "YES" << en;
        else cout << "NO" << en;
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