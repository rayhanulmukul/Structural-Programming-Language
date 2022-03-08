#include<iostream>
using namespace std;

void solve()
{
	int num,r,rem,sum=0;
	cin>>num;
	r=num;
	while(r!=0)
	{
		rem=r%10;
		sum=sum+rem*rem*rem;
		r=r/10;
	}
	if(sum==num)
		cout<<num<<" Armstrong Number"<<endl;
	else
		cout<<num<<" Not Armstrong Number"<<endl;
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