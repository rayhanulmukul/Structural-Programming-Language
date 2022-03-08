#include<iostream>
using namespace std;

void display(int num)

{
	num=20;
	
}
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int x=10;
	cout<<"Before calling the function x = "<<x<<endl;

	display(x);
	cout<<"After calling the function x = "<<x<<endl;
	return 0;
}