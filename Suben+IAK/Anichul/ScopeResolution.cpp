#include<iostream>
using namespace std;

int x=10;
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	//int x=10;
	:: x = 20;
	cout<< x <<<<endl; //cout<<:: x <<<<endl;

}