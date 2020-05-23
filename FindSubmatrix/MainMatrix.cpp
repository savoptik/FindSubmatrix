//
//  MAinMatrix.cpp
//  FindSubmatrix
//
//  Created by Артём Семёнов on 16.05.2020.
//  Copyright © 2020 Артём Семёнов. All rights reserved.
//

#include "MainMatrix.hpp"
#include <algorithm>
using namespace std;

MainMatrix::MainMatrix(const unsigned int m, const unsigned int n, const unsigned int d) {
    fRows = m;
    fCols = n;
    fDeps = d;
    cells = new CellType[rows() * cols() * deps()];
}

MainMatrix::MainMatrix() { 
    fRows = 3;
    fCols = 3;
    fDeps = 3;
    cells = new CellType[27];
    for (int i = 0; i < 27; i++) {
        cells[i] = i;
    }
}

MainMatrix::~MainMatrix() { 
    delete [] cells;
}

const CellType MainMatrix::at(const UInt i, const UInt j, const UInt k) {
    return cells[cellIndex(i, j, k)];
}

