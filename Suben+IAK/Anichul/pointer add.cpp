#include<iostream>
using namespace std;

void solve()
{
	int num1=10;
	int num2=20;

	int *p1,*p2;
	p1=&num1;
	p2=&num2;

	int sum= *p1+*p2;

	cout<<sum;

	
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
	solve();
	return 0;
}