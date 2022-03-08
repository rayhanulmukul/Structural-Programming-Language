#include<iostream>
using namespace std;

void solve()
{
	int array1[30],array2[20],i,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>array1[i];
	}
	cout<<"Print array1 : ";
	for(int i=0;i<n;i++)
	{
		cout<<array1[i]<<" ";
	}
	for(int i=0;i<n;i++)
	{
		array2[i]=array1[i];
	}
	cout<<endl<<"Print arr1 copy array2 : ";
	for(int i=0;i<n;i++)
	{
		cout<<array2[i]<<" ";
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