#ifndef WINE_H
#define WINE_H

#include <string>
#include <iostream>

using namespace std;


class wine
{
public:
    string id;
    string brand;
    string varietal;
    string volume; // liters
    bool ml; // checks if vol is in mililiters or liters (mostly to print info)
    int amount;

    wine(string identificatio, string bran, string varieta, string volum, bool mili, int amou);

    void printWine();

};

#endif // WINE_H
