#include<iostream>
using namespace std;

void solve()
{
	int num,count=0;
	cin>>num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}

	cout<<count;
	
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