#include<iostream>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	if(n%4==0 && n%100!=0)
	{
		cout<<"\"Leap Year\"";
	}
	else if(n%400==0)
	{
		cout<<"\"Leap Year\"";
	}
	else
		cout<<"\"Not Leap Year\"";
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