#include<iostream>
#include<stdlib.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	for(int i=1;i<=5;i++)
	{
		int randomNumber = rand()%5+1;
		cout<<"Random Number = "<<randomNumber<<endl;

	}
	return 0;
}