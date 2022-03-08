#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a=32;
	int b=12;
	int c;

	c=a&b;
	cout<<c<<endl;

	c=a|b;
	cout<<c<<endl;

	c=a^b;
	cout<<c<<endl;

	c=a>>3;
	cout<<c<<endl;

	c=a<<3;
	cout<<c<<endl;



	
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