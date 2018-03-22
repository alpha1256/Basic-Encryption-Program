#include <iostream>
#include <string>
#include <fstream>

#include "Functions.h"
using namespace std;

int main()
{
    /*char a='b';
    a= a + 5;
    string b;
    b +=a;
    cout << b << endl;*/
    back1:
    int a;
    cout << "Enter 1 for Encoding, 2 for decoding and 3 to exit";
    cin >> a;
    if (a==1)
    {
        encoder();
        goto back1;
    }
    else if (a==2)
    {
        decryptor();
        goto back1;
    }
    else if (a==3)
    return 0;
}
