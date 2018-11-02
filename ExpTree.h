//
// Created by Shehryar on 11/28/2017.
//

#ifndef PROJECT_8_INTERPRETER_A_EXPTREE_H
#define PROJECT_8_INTERPRETER_A_EXPTREE_H

//
// Created by Vallath Nandakumar on 11/15/17.
//
//#ifndef DAY22_EXPRESSIONTREE_EXPTREE_H
//#define DAY22_EXPRESSIONTREE_EXPTREE_H
#include <vector>
#include <iostream>
#include "String.h"
using namespace std;
class Node {
public:
    bool isOperand;
    int operand;
    String optr;
    Node *left;
    Node *right;

    Node(bool isOperand, int operand, String optr) {
        left = nullptr;
        right = nullptr;
        this->isOperand = isOperand;
        this->operand = operand;
        this->optr = optr;
    }

    void print() {
        if (isOperand) {
            cout << operand << endl;
        } else {
           // cout<<optr<<endl;
        }
    }
};
class ExpTree {
private:
    const int spaces_per_level = 4;
    Node *overallRoot;

    Node *add(Node *root, vector<Node *> &);
    //Node *add2(Node *root, vector<Node *> &);

    void printTree(Node *, int);

    void printSpaces(int);

    int parse(Node *);

public:
    int parse();
    //int operate(ExpTree ET);
    ExpTree(vector<Node *> &expr); // constructor
    void printTree();
};
//#endif DAY22_EXPRESSIONTREE_EXPTREE_H



#endif //PROJECT_8_INTERPRETER_A_EXPTREE_H
