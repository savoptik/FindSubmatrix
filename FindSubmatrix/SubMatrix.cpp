//
//  SubMatrix.cpp
//  FindSubmatrix
//
//  Created by Артём Семёнов on 23.05.2020.
//  Copyright © 2020 Артём Семёнов. All rights reserved.
//

#include "SubMatrix.hpp"


SubMatrix::~SubMatrix() { 
    delete [] cels;
}


const CellType SubMatrix::at(const UInt i, const UInt j, const UInt k) { 
    return *cels[cellIndex(i, j, k)];
}

