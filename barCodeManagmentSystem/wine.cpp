#include "wine.h"
#include "functions.cpp"

wine::wine(string identificatio, string bran, string varieta, string volum, bool mili, int amou){
    id = identificatio;
    brand = bran;
    varietal = varieta;
    volume = volum;
    ml = mili;
    amount = amou;
}

void wine::printWine(){
    cout << brand << " " << varietal << endl;
}
