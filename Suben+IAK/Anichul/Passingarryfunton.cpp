#include<iostream>
using namespace std;

void displayArry(int num[],int arrysize)
{
	//for(int i=0;i<arrysize;i++)
	for(int i=0;i<5;i++)
		cout<<num[i]<<" ";
	
}
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	int number[5]={12,14,15,16,18};
	displayArry(number,5);

	return 0;
}