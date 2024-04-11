// HW_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stroka;
    getline(cin,stroka);
    cout << stroka << endl;
    cout << stroka.length() << endl;
    cout << stroka[0] << endl;
    cout << stroka[stroka.length() - 1] << endl;
}

