#pragma once

#include "ofMain.h"

class LRule {
public:
    
    LRule(string pre, string succ);
    void print();
    
    friend bool operator == (LRule &rule1, LRule &rule2);
    
    string predecessor;
    string successor;
};
