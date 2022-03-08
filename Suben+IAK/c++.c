#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	 ll n, a,b;
	 cin >> n >> a>> b;
	 ll sum = n/(a+b);
	 sum*=a;
	 ll remain = n%(a+b);
	 if(remain >= a)
	 sum+=a;
	 else
	 sum+=remain;
	 cout << sum << endl;
}



