#include<iostream>
using namespace std;

void solve()
{
	int x=5;
	int *p;
	p=&x;
	cout<<x<<endl;
	cout<<&x<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;

	
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