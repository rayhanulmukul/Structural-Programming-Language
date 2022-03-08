#include<iostream>
using namespace std;

void solve()
{
	int num1,num2,n1,n2,rem,lcm;
	cin>>num1>>num2;

	n1=num1;
	n2=num2;

	while(n2!=0)
	{
		rem=n1%n2;
		n1=n2;
		n2=rem;
	}
	cout<<"GCD "<< n1<<endl;
	
	cout<<"LCM "<<(num1*num2)/n1<<endl;
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