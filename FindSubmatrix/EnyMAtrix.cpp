//
//  EnyMAtrix.cpp
//  FindSubmatrix
//
//  Created by Артём Семёнов on 16.05.2020.
//  Copyright © 2020 Артём Семёнов. All rights reserved.
//

#include "EnyMAtrix.hpp"
using namespace std;

const CellType EnyMAtrix::at(const unsigned int i, const unsigned int j, const unsigned int k) {
    return cells[fCols * fRows * k + i * fCols + j];
}

void EnyMAtrix::print() {
    for (int k = 0; k < deps(); k++) {
        for (int i = 0; i < rows(); i++) {
            for (int j = 0; j < cols(); j++) {
                cout << at(i, j, k) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

const unsigned int EnyMAtrix::deps() { 
    return fDeps;
}

const unsigned int EnyMAtrix::cols() { 
    return fCols;
}

const unsigned int EnyMAtrix::rows() { 
    return fRows;
}

EnyMAtrix::EnyMAtrix() { 

}



