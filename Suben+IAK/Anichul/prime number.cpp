#include<iostream>
using namespace std;

void solve()
{
	int num,count=0;
	cin>>num;
	for(int i=2;i<num;i++)
	{
		if(num%i==0){
			count++;
		}

	}
	if(count==0)
		cout<<"prime number"<<endl;
	else
		cout<<"Not prime number"<<endl;
	
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