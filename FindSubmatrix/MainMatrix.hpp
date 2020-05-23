//
//  MAinMatrix.hpp
//  FindSubmatrix
//
//  Created by Артём Семёнов on 16.05.2020.
//  Copyright © 2020 Артём Семёнов. All rights reserved.
//

#ifndef MainMatrix_hpp
#define MainMatrix_hpp

#include "EnyMatrix.hpp"
#include "SubMatrix.hpp"

class MainMatrix : public EnyMatrix {
   CellType *cells;
    
public:
    MainMatrix();
    MainMatrix(const UInt m, const UInt n = 0, const UInt d = 0);
    virtual const CellType at(const UInt i, const UInt j, const UInt k);
    SubMatrix row(const UInt);
    SubMatrix col(const UInt);
    SubMatrix laer(const UInt);
    ~MainMatrix();
};

#endif /* MainMatrix_hpp */
