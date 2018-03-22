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
        int option1;
        cout << "Do you want to decrypt from file (1 for this option) or just decrypt from manual input instead (2 for this option) :";
        cin >> option1;
        if (option1 == 1)
            DecryptFromFile();
        else if (option1 ==2)
            decryptor();
        goto back1;
    }
    else if (a==3)
    return 0;
}
