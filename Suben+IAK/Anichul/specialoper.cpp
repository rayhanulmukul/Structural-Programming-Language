#include<iostream>
using namespace std;

void solve()
{
	int x,y,sum;
	sum=(x=20,y=30,sum=x+y);
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
	solve();
	return 0;
}