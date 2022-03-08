#include<iostream>
using namespace std;

void solve()
{
	int num;
	cin>>num;

	if(num<0)
	{
		cout<<(-num);
	}
	else{
		cout<<num;
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