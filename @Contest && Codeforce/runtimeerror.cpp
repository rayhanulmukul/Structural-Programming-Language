#include <bits/stdc++.h>
#include <stdlib.h>
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
#define EL '\n'
#define all(x) (x).begin(),(x).end()
#define sz(x) (int(x.size()))
#define SORT(x)  sort(x.begin(), x.end())

#define f0(b) for(int i=0;i<(b);i++)
//#define f00(b) for(int j=0;j<(b);j++)
//#define f1(b) for(int i=1;i<=(b);i++)
//#define f11(b) for(int j=1;j<=(b);j++)
//#define f2(a,b) for(int i=(a);i<=(b);i++)
//#define f22(a,b) for(int j=(a);j<=(b);j++)

int binary_search(int arra[n], int n, int x){
	int left, right, mid;
	left = 0;
	right = n - 1;
	while(left <= right){
		mid = (left + right)/2;
		if(ara[mid] == x){
			return mid;
		}
		if(ara[mid] < x){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
		return -1;
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
		int n,x;
		cin >> n >> x;
		int arra[n];
		for(int i = 0; i < n; i++){
			cin >> arra[i];
		}
		binary_search(arra[], x, n);
	}
	return 0;
}
