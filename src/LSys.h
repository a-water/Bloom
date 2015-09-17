#pragma once


#include "ofMain.h"
#include "LRule.h"

class LSys {
    
public:
    
    LSys();
    void addVariable(string var);
    void removeVariable(string var);
    void printVariables();
    
    void addConstant(string cons);
    void removeConstant(string cons);
    void printConstants();
    
    void addRule(LRule rule);
    void removeRule(LRule rule);
    void printRules();
    
    void setStart(string start);
    void printStart();
    
    string getNextLevel();
    string getLevel(int level);
    
    vector<string> variables;
    vector<string> constants;
    vector<LRule> rules;
    
    string start;
    
    int level;
    string curString;
};
