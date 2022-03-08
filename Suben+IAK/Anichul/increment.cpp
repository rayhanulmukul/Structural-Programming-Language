#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int x=3;
	int y=++x;

	cout<<x<<endl;

	y=--x;
	cout<<y<<endl;
	


	
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