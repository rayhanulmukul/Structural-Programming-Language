#include<iostream>
using namespace std;

void solve()
{
	int num,r,rem,sum=1,s=0;
	cin>>num;
	r=num;
	while(r!=0)
	{
		rem=r%10;
		for(int i=rem;i>=1;i--)
		{
			sum=sum*i;
		}
		s=s+sum;
		r=r/10;
		sum=1;
	}
	if(s==num)
		cout<<num<<" Strong Number"<<endl;
	else
		cout<<num<<" Not Strong Number"<<endl;
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