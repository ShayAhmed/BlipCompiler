//
// Created by Shehryar on 12/4/2017.
//

#ifndef PROJECT_8_INTERPRETER_A_LINKEDLIST_H
#define PROJECT_8_INTERPRETER_A_LINKEDLIST_H

#include <iostream>
#include "String.h"
using namespace std;
typedef struct nodell {
    String name;
    int val;
    struct nodell* next;
} Nodell;

class LinkedList {
private:
    int size;
    Nodell* root;
    void destroy();
public:
    LinkedList();
    ~LinkedList();
    void insert(int val,String s);
    void remove(int val);

    bool find(String s);
    int findnum(String s);
    void print();
};

#endif //PROJECT_8_INTERPRETER_A_LINKEDLIST_H
