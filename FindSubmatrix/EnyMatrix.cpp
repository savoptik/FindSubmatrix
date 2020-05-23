//
//  EnyMAtrix.cpp
//  FindSubmatrix
//
//  Created by Артём Семёнов on 16.05.2020.
//  Copyright © 2020 Артём Семёнов. All rights reserved.
//

#include "EnyMatrix.hpp"
using namespace std;

void EnyMatrix::print() {
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

const unsigned int EnyMatrix::deps() { 
    return fDeps;
}

const unsigned int EnyMatrix::cols() { 
    return fCols;
}

const unsigned int EnyMatrix::rows() { 
    return fRows;
}

EnyMatrix::EnyMatrix() { 

}

const UInt EnyMatrix::cellIndex(const UInt i, const UInt j, const UInt k) { 
    return fCols * fRows * k + i * fCols + j;
}


