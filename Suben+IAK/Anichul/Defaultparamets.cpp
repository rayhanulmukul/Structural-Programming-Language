#include<iostream>
using namespace std;

void display(int a=10,int b=20 )
{
	cout<<a<<" "<<b<<endl;
	
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
	display();
	display(25);
	return 0;
}