//
//  EnyMAtrix.hpp
//  FindSubmatrix
//
//  Created by Артём Семёнов on 16.05.2020.
//  Copyright © 2020 Артём Семёнов. All rights reserved.
//

#ifndef EnyMAtrix_hpp
#define EnyMAtrix_hpp

#include <iostream>

#define CellType int
#define UInt unsigned int

class EnyMAtrix {
protected:
    CellType *cells;
    UInt fRows;
        UInt fCols;
        UInt fDeps;
    
public:
    EnyMAtrix();
    inline const CellType at(const UInt i, const UInt j = 0, const UInt k = 0);
    void print();
    const UInt rows();
        const UInt cols();
    const UInt deps();
};

#endif /* EnyMAtrix_hpp */
