#include<iostream>
using namespace std;

void solve()
{
	int n,sum=0;
	cin>>n;
	int students[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>students[i];
		sum=sum+students[i];
	}

	float average=(float) sum/n;
	cout<<average<<endl;
	
	int max = students[0];
	int min=students[0];

	for(int i=1;i<n;i++)
	{
		if(max<students[i])
		{
			max=students[i];
		}
		if(min>students[i])
		{
			min=students[i];
		}
	}

	cout<<"Max students : "<<max<<endl;
	cout<<"Min students : "<<min<<endl;
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