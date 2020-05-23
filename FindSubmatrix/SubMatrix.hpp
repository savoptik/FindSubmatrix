//
//  SubMatrix.hpp
//  FindSubmatrix
//
//  Created by Артём Семёнов on 23.05.2020.
//  Copyright © 2020 Артём Семёнов. All rights reserved.
//

#ifndef SubMatrix_hpp
#define SubMatrix_hpp

#include "EnyMatrix.hpp"

class SubMatrix : public EnyMatrix {
    CellType **cels;
    
public:
    SubMatrix(const CellType **date, const UInt m, const UInt n = 0, const UInt o = 0);
    virtual const CellType at(const UInt i, const UInt j, const UInt k);
    ~SubMatrix();
};

#endif /* SubMatrix_hpp */

