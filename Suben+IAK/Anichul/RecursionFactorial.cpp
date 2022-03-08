 #include<iostream>
using namespace std;

int fact(int x)
{
	if(x==1)
		return 1;
	else
		return x * fact(x-1);
	
}
int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
    cin>>n;
    int factorail = fact(n);
    cout<<factorail;

}