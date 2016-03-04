//
//  CBaseClass.hpp
//  bitOperation
//
//  Created by qijun chen on 3/3/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef CBaseClass_hpp
#define CBaseClass_hpp

#include <stdio.h>
#include "config.h"
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>

using namespace std;

class CBaseClass {
public:
    void printMessage(string message);
    virtual void runTest() = 0;
};

#endif /* CBaseClass_hpp */
