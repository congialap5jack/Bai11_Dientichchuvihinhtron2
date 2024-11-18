// Bai11_Dientichchuvihinhtron2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
    cout << "Tinh DIEN TICH CHU VI HINH TRON:\n";
    double bankinh, chuvi, dientich, pi;
    pi = 3.14;

    cout << "Nhap ban kinh:"; cin >> bankinh;

    chuvi = 2 * pi * bankinh;
    dientich = pi * bankinh * bankinh;

    cout << "Chu vi: " << chuvi << endl;
    cout << "Dien tich: " << dientich << endl;

    return 0;
}