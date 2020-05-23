//
//  EnyMAtrix.hpp
//  FindSubmatrix
//
//  Created by Артём Семёнов on 16.05.2020.
//  Copyright © 2020 Артём Семёнов. All rights reserved.
//

#ifndef EnyMatrix_hpp
#define EnyMatrix_hpp

#include <iostream>

typedef unsigned int UInt;
typedef int CellType;


class EnyMatrix {
protected:
    UInt fRows = 0;
        UInt fCols = 0;
        UInt fDeps = 0;
    const UInt cellIndex(const UInt i, const UInt j, const UInt k);

public:
    EnyMatrix();
    virtual const CellType at(const UInt i, const UInt j = 0, const UInt k = 0)=0;
    void print();
    const UInt rows();
        const UInt cols();
    const UInt deps();
};

#endif /* EnyMatrix_hpp */
