#include<iostream>
using namespace std;

void solve()
{
	int num;
	cin>>num;

	(num%2==0)?cout<<num<<"is even":cout<<num<<" is odd";
	
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