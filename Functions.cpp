#include <iostream>
#include <string>
#include <fstream>
#include "Functions.h"

void encodePrint(std::string Message, int Key , int numbChar)
{
    std::ofstream outfile;
    std::string passname;
    std::string outputname;
    std::cout << "What do you want to name the text file :";
    std::cin >> passname;
    outputname = passname + ".txt";
    outfile.open(outputname.c_str());
    outfile << "Key :" << Key <<std::endl;
    outfile << "Number :" << numbChar <<std::endl;
    outfile << "EnPassword :" << Message <<std::endl;
}

void encoder ()
{
    int numb;
    std::string encodeMss;
    std::cout << "Enter how many characters you want to encode :";
    std::cin >> numb;
    char a[numb];
    int b;
    std::cout << "Enter the key :";
    std::cin >> b;
    for (int i=0; i < numb; i++)
    {
        std::cout << "Enter the" << i << "character to encode: ";
        std::cin >> a[i];
        char k = a[i] + b;
        //char g = k-b;
        //cout << k << " decode is " << g<<endl;
        encodeMss +=k;

    }
    std::cout << "The encoded message is: " << encodeMss <<std::endl;
    int decision;
    std::cout << "Do you want the key and encoded message in a text file 1 for yes 2 for no :";
    std::cin >>decision;
    if (decision==1)
        encodePrint(encodeMss, b,numb);
    decision =0;
    std::cout << "Do you want to do another encryption 1 for yes 2 for no:";
    std::cin >> decision;
    if (decision==1)
        encoder();
}

void decryptor ()
{
    int key;
    int numb;
    std::string decodeMess;
    std::cout << "Enter your security key";
    std::cin >> key;
    std::cout << "Enter how many characters you want to decrypt" <<std::endl;
    std::cin >> numb;
    char a[numb];
    for (int i=0; i < numb; i++)
    {
        std::cout << "Enter the " << i << "character to decode";
        std::cin >> a[i];
        char k = a[i] - key;
        decodeMess += k;
    }
    std::cout << "The decoded message is " << decodeMess <<std::endl;
}

void DecryptFromFile ()
{
    fstream infile;
    std::string filename;
    std::string Open;
    std::string DecodeMess;
    std::string garbage;
    char gar;
    int key;
    int numbChar;
    cout << "Enter the name of the file that you want to decrypt from :";
    cin >> filename;
    Open = filename + ".txt";
    infile.open(Open.c_str());
    infile >> garbage >> gar >> key;
    infile >> garbage >> gar >> numbChar;
    char a[numbChar];
    for (int i=0; i < numbChar; i++)
    {
        infile >> a[i];
        char k = a[i] - Key;
        DecodeMess += k;
    }
    std::cout << "The decoded message is " << DecodeMess << std::endl;
}
