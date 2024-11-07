#pragma once
#include <iostream>
#include <ostream>
using namespace std;
class Binary
{
private:
    int baseTen;
    string baseEight = "", baseSixteen = "", baseTwo = "";

public:
    Binary(int);
    void setNum();
    string getbaseEight();
    string getbaseSixteen();
    string getbaseTwo();
};

Binary::Binary(int num)
{
    baseTen = num;
}

string Binary::getbaseEight()
{
    int num = baseTen;
    baseEight = "";
    if (num < 8)
    {
        baseEight.insert(0, (to_string(num)));
    }
    while (num >= 8)
    {
        baseEight.insert(0, (to_string(num % 8)));
        num /= 8;
        if (num < 8)
        {
            baseEight.insert(0, (to_string(num)));
            break;
        }
    }
    return baseEight;
}

string Binary::getbaseSixteen()
{
    int num = baseTen;
    string letter;
    if (num < 16)
    {
        baseSixteen.insert(0, (to_string(num)));
    }
    while (num >= 16)
    {
        int modNum = num % 16;
        if (modNum >= 10)
        {
            switch (modNum)
            {
            case 10:
                letter = "A";
                break;
            case 11:
                letter = "B";
                break;
            case 12:
                letter = "C";
                break;
            case 13:
                letter = "D";
                break;
            case 14:
                letter = "E";
                break;
            case 15:
                letter = "F";
                break;
            }
            baseSixteen.insert(0, letter);
        }
        else
        {
            baseSixteen.insert(0, (to_string(modNum)));
        }
        num /= 16;
        if (num < 16)
        {
            baseSixteen.insert(0, (to_string(num)));
            break;
        }
    }
    return baseSixteen;
}

string Binary::getbaseTwo()
{
    int num = baseTen;
    if (num < 2)
    {
        baseTwo.insert(0, (to_string(num)));
    }
    while (num >= 2)
    {
        baseTwo.insert(0, (to_string(num % 2)));
        num /= 2;
        if (num < 2)
        {
            baseTwo.insert(0, (to_string(num)));
        }
    }
    return baseTwo;
}