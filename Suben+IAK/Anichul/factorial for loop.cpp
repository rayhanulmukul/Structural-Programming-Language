#include<iostream>
using namespace std;

void solve()
{
	int n,sum=1;
	cin>>n;
	for(int i=n;i>=1;i--)
	{
	  sum=sum*i;
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