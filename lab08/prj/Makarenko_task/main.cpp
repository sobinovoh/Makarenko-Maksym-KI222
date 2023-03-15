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

void hexadecimal(int value){

    cout << " Hexadecimal: ";
    cout << hex << value << endl;
}

int main()
{
    system("chcp 1251");
    system("cls");





    int x, y, z, a, b, s;

    cout << "Enter x: " << endl;
    cin >> x;

    cout << "Enter y: " << endl;
    cin >> y;

    cout << "Enter z: " << endl;
    cin >> z;

    cout << "Enter a: " << endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;

    cout << s_calculation(x, y, z) << endl;

    makar_copyright();

    check(a, b);

    hexadecimal(x);
    hexadecimal(y);
    hexadecimal(z);

    return 0;
}
