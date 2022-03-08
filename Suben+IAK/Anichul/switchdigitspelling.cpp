#include<iostream>
using namespace std;

void solve()
{
	int digit;
	cin>>digit;

	switch(digit)
	{
		case 0:
		cout<<"Zero";
		break;
		case 1:
		cout<<"one";
		break;
		case 2:
		cout<<"Two";
		break;
		case 3:
		cout<<"Three";
		break;
		case 4:
		cout<<"Four";
		break;
		case 5:
		cout<<"Five";
		break;
		case 6:
		cout<<"Six";
		break;
		case 7:
		cout<<"Seven";
		break;
		case 8:
		cout<<"Eight";
		break;
		case 9:
		cout<<"Nine";
		break;
		default:
		cout<<"Not digit";


	}
	
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