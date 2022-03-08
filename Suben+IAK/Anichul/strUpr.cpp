#include <iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    string str1="Rayhanul";
    string str2=" Islam";
    string str3;

    str3=str1;
    cout<<"Str3 : "<<str3<<endl;

    str3=str1+str2;
    cout<<"Str1+str2 = "<<str3<<endl;

    int len=str1.size();
    cout<<"Length of str1 : "<<len<<endl;


    return 0;
}
