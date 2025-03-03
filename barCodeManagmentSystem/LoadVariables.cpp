#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

#include "wine.h"


using namespace std;



void loadVector(vector<wine> &inventor){
    string action;
    wine *ptr;

    //see if can store dynamically classes inside the vector and then itinarate the vector
    //Other wise use a dynamically stored data with a pointer being the header.

    ptr = new wine("0110048162000411", "Domine D'or", "white", "4", false, 0);
    inventor.push_back(*ptr);
    ptr = new wine("0120048162003853", "Peller Family Vinyards", "Rose", "1.5", false, 0);
    inventor.push_back(*ptr);
    ptr = new wine("0150048162019459", "Peller Family Reserve", "Charmat Rose", "750", true, 0);
    inventor.push_back(*ptr);
    ptr = new wine("0150048162013006", "Trius", "Sauvignon Blanc", "750", true, 0);
    inventor.push_back(*ptr);

    cout << "Load Succesfully" << endl;
}
