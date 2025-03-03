#ifndef UPDATEVALUESINVECTOR_H
#define UPDATEVALUESINVECTOR_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "wine.h"

//THis one load the values to the vector initially
void updateVals(vector<wine>& inv){
    ifstream inFile;
    string id;
    int amount;

    inFile.open("info.txt");
    if(inFile.fail()){
        cout << "Problem opening the program. Please call support" << endl;
        exit(1);
    }

    while(inFile >> id){
        inFile >> amount;

        for(vector<wine>::iterator iter = begin(inv); iter != end(inv); ++iter){
            if(id == (*iter).id){
                (*iter).amount = amount;
            }
        }
    }

    inFile.close();

}

void updateList(vector<wine> inv){
    ofstream oFile;
    oFile.open("info.txt");

    if(oFile.fail()){
        cout << "Problem opening the file call assistance" << endl;
        exit(1);
    }
    for(vector<wine>::iterator iter = begin(inv); iter != end(inv); ++iter){
        if((*iter).amount != 0){
            oFile << (*iter).id << " " << (*iter).amount << endl;
        }
    }

    oFile.close();
}

#endif // UPDATEVALUESINVECTOR_H
