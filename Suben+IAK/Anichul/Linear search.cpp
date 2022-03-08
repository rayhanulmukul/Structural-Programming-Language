#include<iostream>
using namespace std;

void solve()
{
	int num[]={1,2,3,4,5,12,23,34,65,75,37,43};

	int value,pos=-1;
	cin>>value;
	for(int i=0;i<12;i++)
	{
		if(value==num[i])
		{
			pos=i+1;
			break;
		}
	}
	if(pos==-1)
		cout<<"Not Found";
	else
		cout<<value<<" Value Postion "<<pos;
	
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