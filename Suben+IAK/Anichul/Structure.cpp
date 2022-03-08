#include <bits/stdc++.h>
using namespace std;

struct myStruct {
    string name;
    int age;
    double heigh;
};
int main(){
    int x;
    struct myStruct s1;
    struct myStruct s2;

    s1.age = 32;
    s2.age = 10;
    s1.name = "dipta";
    s2.name = "arnob";
    cout << s1.name << ' ' << s1.age << endl;
    cout << s2.name << ' ' << s2.age << endl;


    return 0;
}
