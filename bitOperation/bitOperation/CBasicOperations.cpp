//
//  CBasic.cpp
//  bitOperation
//
//  Created by qijun chen on 3/3/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "CBasicOperations.hpp"

void CBasicOperations::runTest() {
    printMessage("running test...");
    
    testComputeSignOfIntegers();
    testIsOppositeSigns();
    testComputeAbsoluteValue();
    testComputeMax();
    testComputeMin();
    testIsPowerOfTwo();
}

int CBasicOperations::computeSignOfIntegers(int number) {
    int sign = (number > 0) - (number < 0);
    return sign;
}

void CBasicOperations::testComputeSignOfIntegers() {
    printMessage("*************************************************************");
    printMessage("testing compute sign of integers");
    vector<int> testCase = {
        1, 2, 3, -1, -2, -3, 0
    };
    for(int i = 0; i < testCase.size(); i++) {
        printMessage("\ntest case : " + to_string(i));
        int sign = computeSignOfIntegers(testCase[i]);
        int correctAnswer = testCase[i] > 0 ? 1 : (testCase[i] == 0 ? 0 : -1);
        string result = (sign == correctAnswer ? "right" : "wrong");
        result += ", input: " + to_string(testCase[i]) + ", output: " + to_string(sign);
        printMessage(result);
    }
    printMessage("*************************************************************");
}

bool CBasicOperations::isOppositeSigns(int number1, int number2) {
    int xorOfInput = number1 ^ number2;
    if (xorOfInput < 0) {
        return true;
    } else {
        return false;
    }
}

void CBasicOperations::testIsOppositeSigns() {
    printMessage("*************************************************************");
    printMessage("testing is oppositesigns");
    vector<pair<int, int>> testCase = {
        {1, 1},
        {1, -1},
        {0, -1},
        {1, 0}
    };
    for (int i = 0; i < testCase.size(); i++) {
        pair<int, int> testInput = testCase[i];
        int x = testInput.first;
        int y = testInput.second;
        bool output = isOppositeSigns(x, y);
        bool rightAnswer = ((x ^ y) < 0); // true iff x and y have opposite signs
        string result = (output == rightAnswer ? "right" : "wrong");
        result += ", input: " + to_string(x) + ", " + to_string(y) + ", output: " + to_string(output);
        printMessage(result);
    }
    printMessage("*************************************************************");

}

int CBasicOperations::computeAbsoluteValue(int number) {
    return 0;
}

void CBasicOperations::testComputeAbsoluteValue() {
    
}

int CBasicOperations::computeMax(int number1, int number2) {
    return 0;
}

void CBasicOperations::testComputeMax() {
    
}

int CBasicOperations::computeMin(int number1, int number2) {
    return 0;
}

void CBasicOperations::testComputeMin() {
    
}

bool CBasicOperations::isPowerOfTwo(int number) {
    return 0;
}

void CBasicOperations::testIsPowerOfTwo() {
    
}