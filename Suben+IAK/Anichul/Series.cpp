#include<iostream>
#include<cmath>
using namespace std;

void solve()
{
	int sum=0,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+pow(i,5);
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