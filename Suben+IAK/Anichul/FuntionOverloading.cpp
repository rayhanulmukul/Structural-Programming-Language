#include<iostream>
using namespace std;

void solve(int a,int b)
{
	int sum=a+b;
	cout<<sum<<endl;
	
}
void solve(int a,int b,int c)
{
	int sum=a+b+c;
	cout<<sum<<endl;
	
}
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t=1;
	while(t--)
	solve(20,30);
	solve(20,30,40);
	return 0;
}