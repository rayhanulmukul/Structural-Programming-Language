#include<iostream>
using namespace std;

void solve()
{
	int a[30],n;
	cout<<"Enter the number of terms : ";
	cin>>n;
	a[0]= 0;
	a[1]=1;

	for(int i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
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