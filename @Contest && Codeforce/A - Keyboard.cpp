#include<iostream>
#include<ctype.h>
using namespace std;
int main(void)

{
    char S,T;
    cin >> S;
    cin >> T;

    if(S == 'Y')
    {
        T = toupper(T);
    }
    else if(S == 'N')
    {
        T= tolower(T);
    }
    cout << T << endl;
    return 0;

}
