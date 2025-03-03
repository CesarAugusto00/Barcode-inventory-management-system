#ifndef FILLVALUES2_H
#define FILLVALUES2_H

#include <iostream>
#include <vector>
#include <string>
#include "wine.h"

using namespace std;

void fillVector2(vector<wine> & vecInventory){
    wine *ptr;

    //see if can store dynamically classes inside the vector and then itinarate the vector
    //Other wise use a dynamically stored data with a pointer being the header.

    ptr = new wine("0110048162000411", "Domine D'or", "white", "4", false, 0);
    vecInventory.push_back(*ptr);
    ptr = new wine("0120048162003853", "Peller Family Vinyards", "Rose", "1.5", false, 0);
    vecInventory.push_back(*ptr);
    ptr = new wine("0150048162019459", "Peller Family Reserve", "Charmat Rose", "750", true, 0);
    vecInventory.push_back(*ptr);
    ptr = new wine("0150048162013006", "Trius", "Sauvignon Blanc", "750", true, 0);
    vecInventory.push_back(*ptr);
    ptr = nullptr;
}


void removeId(string id_Scanner, vector<wine> & inv){

    for(vector<wine>::iterator iter = begin(inv); iter != end(inv); ++iter){
        if(id_Scanner == (*iter).id){
            if((*iter).amount > 0){
                (*iter).amount -= 1;
            }
        }
    }

}
#endif // FILLVALUES2_H
