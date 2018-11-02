//
// Created by Shehryar on 12/4/2017.
//

#include <iostream>
using namespace std;

#include "Linkedlist.h"
LinkedList::LinkedList() {
    size = 0;
    root = NULL;
}

LinkedList::~LinkedList() {
    destroy();
}
void LinkedList::destroy() {
    Nodell* prev;
    Nodell* current = root;
    while (current != NULL) {
        prev = current;
        current = current->next;
        delete prev;
    }
}
void LinkedList::insert(int val, String s) {
//    Nodell* n = new Nodell();
//    for(int i=0;i<size;i++) {
//        if (s == root[i].name) {
//            root[i].val = val;
//            return;
//        }
//    }
//    n->val = val;
//    n->next = root;
//    n->name = s;
//    root = n;
//    size++;


    for (int i=0;i<size;i++){
        if (root[i].name == s){
            root[i].val = val;
            return;
        }
    }
    Nodell* n =   new Nodell();
    n->val = val;
    n->name = s;
    if (root == NULL) {
        root = n;
        size++;
        return;
    }
    Nodell* nxt = root;
    while (nxt->next != NULL) {
        nxt = nxt->next;
    }
    size++;
    nxt->next = n;
    //delete nxt;
}

// Removes only the first element with the given value.
void LinkedList::remove(int val) {
    Nodell* prev = NULL;
    Nodell* current = root;
    while (current != NULL && current->val != val) {
        prev = current;
        current = current->next;
    }
    if (current == NULL) {
// Element not in the list.
        return;
    }
    if (prev == NULL) {
        root = current->next;
    } else {
        prev->next = current->next;
    }
    size--;
    delete current;
}
void LinkedList::print() {
    Nodell *current = root;
    cout << "{";
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << "}" << endl;
}
int LinkedList::findnum(String s) {
    Nodell* current;
    for (current = root; current != NULL; current = current->next) {
        if (s==current->name) {
            return current->val;
            break;
        }
    }
    return 0;
}

bool LinkedList::find(String s) {
    for (Nodell *current = root; current != NULL; current = current->next) {
        if (current->name == s) {
            return true;
        }
    }
    return false;
}


