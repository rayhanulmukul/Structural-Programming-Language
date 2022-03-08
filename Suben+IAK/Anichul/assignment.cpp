#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int x=3;
	int y=2;
	x+=2;
	cout<<x<<endl;

	x-=2;
	cout<<x<<endl;

	x*=2;
	cout<<x<<endl;

	x%=2;
	cout<<x<<endl;

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