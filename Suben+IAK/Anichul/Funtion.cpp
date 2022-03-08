#include<iostream>
using namespace std;

void solve(int , int);

int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t=1;
	while(t--)
	solve(30,20);
	return 0;
}
void solve(int a,int b)
{
	int sum=a+b;
	cout<<sum;
	
}