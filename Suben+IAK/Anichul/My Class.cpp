#include<iostream>
using namespace std;

class Student
{
	public:
		int id;
		double gpa;

		void display()
		{
			cout<< id <<" "<<gpa<<endl;
		}
	
};

int main(){
	ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	Student alim,suparna;
	alim.id=101;
	alim.gpa=3.12;
	alim.display();
	
	suparna.id=110;
	suparna.gpa=3.98;
	suparna.display();

}