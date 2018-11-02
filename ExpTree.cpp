//
// Created by Shehryar on 11/28/2017.
//
//
// Created by Vallath Nandakumar on 11/15/17.
//
#include "ExpTree.h"
#define DEBUG true
bool onlyOne = 0;



ExpTree::ExpTree(vector<Node*>& expr) { // construct from expression vector
    overallRoot = add(overallRoot, expr);
}
// private method

//Node* ExpTree::add2(Node* root, vector<Node*>& expr) { // passing expr as a reference
//    Node* first = expr[0]; // store the first element
//    expr.erase(expr.begin()); // remove the first element
//    root = first; // root points to the first token Node
//    return root;
//}


Node* ExpTree::add(Node* root, vector<Node*>& expr) { // passing expr as a reference
//    Node* first = expr[0]; // store the first element
//    expr.erase(expr.begin()); // remove the first element
//    root = first; // root points to the first token Node
////    if (String(root->optr) == "~"){
////        root->left = add(root->left,expr);
////    }
////    char* temp = first->optr;
////    if (String(temp)== "~"){
////        onlyOne = 1;
////    }
//    if (!(first->isOperand)) { // if first is an operator, add 2 operands
//        if (String(first->optr) == "~" || String(first->optr) == "!"){
//            onlyOne = 1;
//        }
//        //if (first->left != NULL) {
//        root->left = add(root->left, expr);
//        //}
//        //if (first->right != NULL) {
//        if (onlyOne){
//            root->right = nullptr;
//            onlyOne = 0;
//        }else{
//            root->right = add(root->right, expr);
//            //}
//        }
//    }
//    return root; // return the new sub-tree
//
//    Node* first = expr[0]; // store the first element
//    expr.erase(expr.begin()); // remove the first element
//    root = first; // root points to the first token Node
//    if (!(first->isOperand)) { // if first is an operator, add 2 operands
//        root->left = add(root->left, expr);
//        root->right = add(root->right, expr);
//    }
//    return root;
    Node* first = expr[0]; // store the first element
    expr.erase(expr.begin()); // remove the first element
    root = first; // root points to the first token Node
    if (!(first->isOperand)) { // if first is an operator, add 2 operands
        root->left = add(root->left, expr);
            if (!(first->optr == "!" || first->optr == "~")) {
                root->right = add(root->right, expr);

            }
    }
    return root; // return the new sub-tree

}
//void ExpTree::printTree() {
//    printTree(overallRoot, 0); // call helper method
//}
//void ExpTree::printSpaces(int level) { // print 4 spaces per level, for indentation
//    for (int i = 0; i < level*4; i++) {
//        cout << ' ';
//    }
//}
// private recursive helper method
//void ExpTree::printTree(Node* root, int level) {
//    if (root == nullptr) return;
//    printTree(root->right, level+1); // print the right sub-tree
//    printSpaces(level); // print the indentation for the root of sub-tree
//    root->print(); // print the root
//    printTree(root->left, level+1); // print the left sub-tree
//}
int ExpTree::parse() {
    return parse(overallRoot);
}
int ExpTree::parse(Node* root) {
    //if(root == nullptr) return NULL;
    if (root->isOperand) return root->operand;
    int arg1 = parse(root->left);
    int arg2=0;
    if (root->right != NULL) {
        arg2 = parse(root->right);
    }
    //int arg2 = parse(root->left);
    //return root->optr == "+" ? arg1 + arg2 : arg1 - arg2;
    String temp  = String(root->optr);
    if (String(temp) == "+"){
        return arg1+arg2;
    }
    else if (String(root->optr) =="-"){
        return arg1-arg2;
    }
    else if (String(root->optr) == "*"){
        return arg1*arg2;
    }
    else if (String(root->optr) == "/"){
        return arg1/arg2;
    }
    else if (String(root->optr) == "<"){
        if (arg1<arg2){
            return 1;
        }else
            return 0;
    }
    else if (String(root->optr) == ">"){
        if (arg1<=arg2){
            return 0;
        }else
            return 1;
    }
    else if (String(root->optr) == "=="){
        if (arg1==arg2){
            return 1;
        }else
            return 0;
    }
    else if (String(root->optr) == "!="){
        if (arg1!=arg2){
            return 1;
        }else
            return 0;
    }
    else if (String(root->optr) == "~"){
        return (-1)*arg2;
    }
    else if (String(root->optr) == "!"){
        //return !arg1;
        if (arg1 == 0){
            return 1;
        }
//        if (arg1<0){
//            return 0;
//        }
        return 0;
    }
    else if (String(root->optr) == "&&"){
//        if (arg1 != 0  && arg2 !=0){
//            return 1;
//        }
//        else{
//            return 0;
//        }
        if(arg1 ==arg2){
            return 1;
        }
        //return arg1&arg2;
        return 0;
    }
    else if (String(root->optr) == "||"){
        if (arg1 != 0  || arg2 !=0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if (String(root->optr) == "%"){
        if (arg2 == 0){
            return arg1;
        }
        return (arg1 % arg2);
    }
    else if (String(root->optr) == "<=") {
        if (arg1 <= arg2) {
            return 1;
        }else {
            return 0;
        }
    }
    else if (String(root->optr) == ">=") {
        if (arg1 >= arg2) {
            return 1;
        }else {
            return 0;
        }
    }
}