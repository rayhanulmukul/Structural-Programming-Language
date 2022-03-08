#include<iostream>
using namespace std;

void solve()
{
	char ch;
	cin>>ch;

	ch= tolower(ch);

	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		  cout<<"Vowel";
		  break;

		default:
		cout<<"Consonant";


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