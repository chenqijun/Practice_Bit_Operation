//
//  CBasic.hpp
//  bitOperation
//
//  Created by qijun chen on 3/3/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef CBasicOperations_hpp
#define CBasicOperations_hpp

#include <stdio.h>
#include <string>
#include "config.h"
#include <iostream>
#include "CBaseClass.hpp"

using namespace std;

class CBasicOperations : public CBaseClass {
public:
    void runTest() override;
    
    int computeSignOfIntegers(int number);
    void testComputeSignOfIntegers();
    
    bool isOppositeSigns(int number1, int number2);
    void testIsOppositeSigns();
    
    int computeAbsoluteValue(int number);
    void testComputeAbsoluteValue();
    
    int computeMax(int number1, int number2);
    void testComputeMax();
    
    int computeMin(int number1, int number2);
    void testComputeMin();
    
    bool isPowerOfTwo(int number);
    void testIsPowerOfTwo();
    
private:
    
};
#endif /* CBasicOperations_hpp */
