#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,sum=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter any number: ";
		cin>>x;
		long long m = sqrt(x);
		if((m*m)!=x){
			sum++;
		}
	}
	if(sum>0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}