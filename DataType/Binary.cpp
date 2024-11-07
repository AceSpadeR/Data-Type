#include <iostream>
#include "Binary.h"

using namespace std;

int main()
{
    int baseTen;
    string baseEight = "", baseSixteen = "", baseTwo = "";
    int num;
    string letter;
    cout << "Enter a Numer in base 10 to convert," << endl;
    cout << "Decimal: ";
    cin >> baseTen;
    Binary b(baseTen);
    cout << "Octal: " << b.getbaseEight() << endl;

    cout << "Hexademical: " << b.getbaseSixteen() << endl;

    cout << "Binary: " << b.getbaseTwo() << endl;

    return 0;
}