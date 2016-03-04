//
//  CBaseClass.cpp
//  bitOperation
//
//  Created by qijun chen on 3/3/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "CBaseClass.hpp"

void CBaseClass::printMessage(string message) {
    if (PRINT_DEBUG_MESSAGE) {
        cout << message << endl;
    }
}