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
		void setValue(int x,double y)
		{
			id = x;
			gpa = y;
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
	alim.setValue(101,3.75);
	alim.display();
	
	suparna.setValue(111,3.98);
	suparna.display();

}