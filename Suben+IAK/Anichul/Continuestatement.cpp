#include<iostream>
using namespace std;

void solve()
{
	int i;
	for(i=1;i<=100;i+=2)
	{
		if(i==10)
		{
			continue;
		}
		cout<<i<<endl;
	}
	
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