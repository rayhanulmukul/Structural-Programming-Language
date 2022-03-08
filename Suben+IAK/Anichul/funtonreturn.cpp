#include<iostream>
using namespace std;

double additon(double,double);
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t=1;
	cin>>t;
	while(t--)
	{
		cout<< additon(10.30,20.30)<<endl;
	}

}

double additon(double a,double b)
{
	double sum=a+b;
	return sum;
}