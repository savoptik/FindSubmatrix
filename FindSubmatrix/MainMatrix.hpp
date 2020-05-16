//
//  MAinMatrix.hpp
//  FindSubmatrix
//
//  Created by Артём Семёнов on 16.05.2020.
//  Copyright © 2020 Артём Семёнов. All rights reserved.
//

#ifndef MainMatrix_hpp
#define MainMatrix_hpp

#include "EnyMAtrix.hpp"

class MainMatrix : public EnyMAtrix {
   
    
public:
    MainMatrix();
    MainMatrix(const UInt m, const UInt n = 0, const UInt d = 0);
    EnyMAtrix row(const UInt);
    EnyMAtrix col(const UInt);
    EnyMAtrix laer(const UInt);
    ~MainMatrix();
};

#endif /* MainMatrix_hpp */
