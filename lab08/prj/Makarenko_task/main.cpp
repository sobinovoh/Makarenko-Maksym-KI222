#include <iostream>
#include "ModulesMakarenko.h"
using namespace std;

void makar_copyright(){
    cout << "Makarenko Maxim ©" << endl;
    }

void check(int a, int b){
    if (a + 1 >= b)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}


void hexadecimal(int x, int y, int z){
    cout << "Decimal x-> ";
    cout << dec << x << endl;
    cout << "Hexadecimal x-> ";
    cout << hex << x << endl;
    cout << "Decimal y-> ";
    cout << dec << y << endl;
    cout << "Hexadecimal y-> ";
    cout << hex << y << endl;
    cout << "Decimal z-> ";
    cout << dec << z << endl;
    cout << "Hexadecimal z-> ";
    cout << hex << z << endl;
}

int main()
{
    system("chcp 1251");
    system("cls");


    int x, y, z;
    double s, a, b;

    cout << "Enter integer x: " << endl;
    cin >> x;

    cout << "Enter integer y: " << endl;
    cin >> y;

    cout << "Enter integer z: " << endl;
    cin >> z;

    cout << "Enter a: " << endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;

    cout << "s = " << s_calculation(x, y, z) << endl;

    makar_copyright();

    check(a, b);

    hexadecimal(x, y, z);


    return 0;
}
