#include<iostream>
using namespace std;

void solve(int x)
{
	
	cout<<x<<endl;
	
}
void solve(double x)
{
	cout<<x<<endl;
	
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
	solve(20);
	solve(30.478);
	return 0;
}