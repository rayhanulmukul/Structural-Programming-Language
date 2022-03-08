#include<iostream>
using namespace std;

void solve()
{
	int num,tem,sum=0;
	cin>>num;
	while(num!=0)
	{
		tem=num%10;
		sum=sum*10+tem;
		num=num/10;
	}
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