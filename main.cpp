//
// Created by Shehryar on 14/26/18.
// SHEHRYAR AHMED
// sa43897
// have a good day!
//
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Input.h"
#include "Parse.h"
#include "String.h"
#include <string>
#include <iostream>
#include "ExpTree.h"
//String("text");
#include "Linkedlist.h"


using namespace std;
LinkedList LL;
String s;
void run();
void run2();
void output();
void var();
void set();
void text();
void IF();
void d0();
void ELSE();
int doit(vector<String> stuff);
void doTheDo(vector<String>& workInDo, int& length);


int operate(ExpTree ET){
    ET.parse();
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////
//////////////////////                  PROJECT 8 STUFF STARTS HERE
//////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////


int isOpertor(String s){
    if (String(s) == "+" || String(s) == "-" || String(s) == "*" || String(s) == "/" || String(s) == "<" ||
         String(s) == ">" || String(s) == "==" || String(s) == "~" || String(s) == "!=" || String(s) == "!"){
        return 1;
    }
    return 0;
}


void text(){
    read_next_token();
    cout << next_token(); //prints out text
    read_next_token();
    s = next_token();
    return;
}

void set(){
    read_next_token();
    s=next_token();
    read_next_token();
    if (next_token_type == NUMBER){
        if (LL.find(s) == 0){
            cout<<"WARNING, variable \"";
            printf(s.c_str());
            cout<<"\" has not yet been created"<<endl;




            vector<Node *> exp;
            String nameofvar = s;
            while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type ==
                                                                             NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
                if (s == "text" || String(s) == "var" || String(s) == "set" ||String(s)=="//") {
                    break;
                }
//                if (String(s) == "+" || String(s) == "-" || String(s) == "*" || String(s) == "/" || String(s) == "<" ||
//                    String(s) == ">" || String(s) == "==" || String(s) == "~" || String(s) == "!=" ||
//                    String(s) == "!")
                if (next_token_type == SYMBOL) {
                    // char* temp = s;
                    //read_next_token();
                    //c = next_token_type;String(s) == "+" ||

                    String temp = String(next_token());
                    //same(temp,next_token()); //makes a deep copy of next_token in temp
                    Node *n = new Node(false, 0, temp);
                    exp.push_back(n);
                    //delete(n);
                    //exp.push_back(n[i]);
                    //cout << n[i]->optr<<endl;
                    // n->print();//JUST TO CHECK
                } else {
                    Node *n;
                    if (LL.find(s) == 1) {
                        n = new Node(true, LL.findnum(s), "\0");
                    } else {
                        n = new Node(true, token_number_value, "\0");
                    }
                    // exp.push_back(n[i]);
                    //cout << n[i]->optr<<endl;
                    exp.push_back(n);
                    //delete(n);
                    // n->print(); //JUST TO CHECK
                }
                // i++;
                read_next_token();
                s = next_token();
                //  c=next_token_type;
                //exp.push_back(n[i]);

                // cout << n[i]->optr<<endl;
                // n[i]->print(); //JUST TO CHECK
            }
            ExpTree ET(exp);    //create tree with exp
            int sum = ET.parse();  //does add,subt,mult,div on Eexpression Tree
            LL.insert(sum, nameofvar);







            while(s != "text"&&s != "output"&&s != "set"&&s != "var"&& s != "//") {
                read_next_token();
                s=next_token();
            }
            return;
            return;
        }
        LL.insert(token_number_value,s);
        run();
    }else {// if (next_token_type == SYMBOL) {
        if (next_token_type == SYMBOL) {
            String temp2 = String(s);
            s = next_token();
            vector<Node *> exp;
            int i = 0;
            while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type == NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
                if (s == "text" || String(s) == "var" || String(s) == "set") {
                    break;
                }
//                if (String(s) == "+" || String(s) == "-" || String(s) == "*" || String(s) == "/" || String(s) == "<" ||
//                    String(s) == ">" || String(s) == "==" || String(s) == "~" || String(s) == "!=" ||
//                    String(s) == "!") {
                if (next_token_type == SYMBOL){
                    // char* temp = s;
                    //read_next_token();
                    //c = next_token_type;String(s) == "+" ||

                    String temp = String(next_token());
                    //same(temp,next_token()); //makes a deep copy of next_token in temp
                    Node *n = new Node(false, 0, temp);
                    exp.push_back(n);
                    //7 delete(n);
                    //exp.push_back(n[i]);
                    //cout << n[i]->optr<<endl;
                    // n->print();//JUST TO CHECK
                } else {
                    if(s=="output"){
                        break;
                    }
                    Node *n;
                    if (LL.find(s) == 1) {
                        n = new Node(true, LL.findnum(s), "\0");
                    } else {
                        n = new Node(true, token_number_value, "\0");
                    }
                    // exp.push_back(n[i]);
                    //cout << n[i]->optr<<endl;
                    exp.push_back(n);
                    //delete(n);
                    // n->print(); //JUST TO CHECK
                }
                // i++;
                read_next_token();
                s = next_token();
                //  c=next_token_type;
                //exp.push_back(n[i]);

                // cout << n[i]->optr<<endl;
                // n[i]->print(); //JUST TO CHECK
            }
            ExpTree ET(exp);    //create tree with exp
            int sum = ET.parse();
            //int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
            LL.insert(sum,temp2);
            return;
        }
    }
}

void var(){
    read_next_token();
    s=next_token();
    if (LL.find(s) == true){
        cout<<"WARNING, this variable has already been created and has value: "<<LL.findnum(s)<<endl;

        s=next_token();
        while(s != "text"&&s != "output"&&s != "set"&&s != "var"&& s != "//") {
        read_next_token();
            s=next_token();
        }
        return;
    }
    read_next_token();
    String nameofvar = String(s);
    if (next_token_type != NUMBER) {
        vector<Node *> exp;

        while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type ==
                                                                         NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
            if (s == "text" || String(s) == "var" || String(s) == "set" ||String(s)=="//") {
                break;
            }
//                if (String(s) == "+" || String(s) == "-" || String(s) == "*" || String(s) == "/" || String(s) == "<" ||
//                    String(s) == ">" || String(s) == "==" || String(s) == "~" || String(s) == "!=" ||
//                    String(s) == "!")
            if (next_token_type == SYMBOL) {
                // char* temp = s;
                //read_next_token();
                //c = next_token_type;String(s) == "+" ||

                String temp = String(next_token());
                //same(temp,next_token()); //makes a deep copy of next_token in temp
                Node *n = new Node(false, 0, temp);
                exp.push_back(n);
                //delete(n);
                //exp.push_back(n[i]);
                //cout << n[i]->optr<<endl;
                // n->print();//JUST TO CHECK
            } else {
                Node *n;
                if (LL.find(s) == 1) {
                    n = new Node(true, LL.findnum(s), "\0");
                } else {
                    n = new Node(true, token_number_value, "\0");
                }
                // exp.push_back(n[i]);
                //cout << n[i]->optr<<endl;
                exp.push_back(n);
                //delete(n);
                // n->print(); //JUST TO CHECK
            }
            // i++;
            read_next_token();
            s = next_token();
            //  c=next_token_type;
            //exp.push_back(n[i]);

            // cout << n[i]->optr<<endl;
            // n[i]->print(); //JUST TO CHECK
        }
        ExpTree ET(exp);    //create tree with exp
        int sum = ET.parse();  //does add,subt,mult,div on Eexpression Tree
        LL.insert(sum, nameofvar);




//        read_next_token();
//        if (next_token_type == SYMBOL) {
//            vector<Node *> exp;
//            int i = 0;
//            while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type == NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
//                if (s == "text" || String(s) == "var" || String(s) == "set") {
//                    break;
//                }
////                if (String(s) == "+" || String(s) == "-" || String(s) == "*" || String(s) == "/" || String(s) == "<" ||
////                    String(s) == ">" || String(s) == "==" || String(s) == "~" || String(s) == "!=" ||
////                    String(s) == "!")
//                     if (next_token_type == SYMBOL) {
//                    // char* temp = s;
//                    //read_next_token();
//                    //c = next_token_type;String(s) == "+" ||
//
//                    String temp = String(next_token());
//                    //same(temp,next_token()); //makes a deep copy of next_token in temp
//                    Node *n = new Node(false, 0, temp);
//                    exp.push_back(n);
//                    //delete(n);
//                    //exp.push_back(n[i]);
//                    //cout << n[i]->optr<<endl;
//                    // n->print();//JUST TO CHECK
//                } else {
//                    Node *n;
//                    if (LL.find(s) == 1) {
//                        n = new Node(true, LL.findnum(s), "\0");
//                    } else {
//                        n = new Node(true, token_number_value, "\0");
//                    }
//                    // exp.push_back(n[i]);
//                    //cout << n[i]->optr<<endl;
//                    exp.push_back(n);
//                    //delete(n);
//                    // n->print(); //JUST TO CHECK
//                }
//                // i++;
//                read_next_token();
//                s = next_token();
//                //  c=next_token_type;
//                //exp.push_back(n[i]);
//
//                // cout << n[i]->optr<<endl;
//                // n[i]->print(); //JUST TO CHECK
//            }
//            ExpTree ET(exp);    //create tree with exp
//            int sum = ET.parse();  //does add,subt,mult,div on Eexpression Tree
//            LL.insert(sum,s);
//        }
    }else {
        LL.insert(token_number_value, s);
        read_next_token();
        s=next_token();
        return;
    }
}

void output() {
    //ExpTree ET(); // else stores operator and numbers into tree then evaluates
    //read_next_token();
    if (next_token_type == NUMBER) {
        cout << next_token();
        read_next_token();
        s=next_token();
        return;
    }
        read_next_token();
    if (next_token_type == SYMBOL || next_token_type == NAME) {
        //const char* s = next_token();
        s = next_token();
        if (next_token_type == NAME) {
            cout << LL.findnum(s);
            read_next_token();
            s= next_token();
            return;
        }
        //Node* n[10];
        vector<Node *> exp;
        int i = 0;
        //TokenType c = next_token_type;
        while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type == NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
            if (s == "text" || String(s) == "var" || String(s) == "set") {

                ExpTree ET(exp);    //create tree with exp
                int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
                cout << sum << endl;    //prints sum of tree
                return;//run2();
            }



//            if (String(s) == "+" || String(s) == "-" || String(s) == "*" || String(s) == "/" || String(s) == "<" ||
//                String(s) == ">" || String(s) == "==" || String(s) == "~" || String(s) == "!=" || String(s) == "!") {
            if (next_token_type == SYMBOL){
                String temp = String(next_token());
                Node *n = new Node(false, 0, temp);
                exp.push_back(n);


                // char* temp = s;
                //read_next_token();
                //c = next_token_type;String(s) == "+" ||

                //String temp = String(next_token());

                //same(temp,next_token()); //makes a deep copy of next_token in temp

                //Node *n = new Node(false, 0, temp);
                //exp.push_back(n);

                /// / delete(n);
                //exp.push_back(n[i]);
                //cout << n[i]->optr<<endl;
                // n->print();//JUST TO CHECK
            }
                if(s=="output"){
                    break;
                }
            else {
                Node *n;
                if (LL.find(s) == 1) {
                    n = new Node(true, LL.findnum(s), "\0");
                } else {
                    n = new Node(true, token_number_value, "\0");
                }
                exp.push_back(n);


                // exp.push_back(n[i]);
                //cout << n[i]->optr<<endl;

                //delete(n);
                // n->print(); //JUST TO CHECK
            }
            // i++;
            read_next_token();
            s = next_token();
            //  c=next_token_type;
            //exp.push_back(n[i]);

            // cout << n[i]->optr<<endl;
            // n[i]->print(); //JUST TO CHECK


        }
//                        for(int j=0;j<i;j++){ //add nodes to expr
//                            n[i]->print();
//                            exp.push_back(n[j]);
//                        }
        ExpTree ET(exp);    //create tree with exp
        int sum = ET.parse();  //does add,subt,mult,div on Eexpression Tree
        cout << sum;    //prints sum of tree
        return;
    }
}





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////
//////////////////////                  PROJECT 9 STUFF STARTS HERE
//////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////


void same(char* go, const char* input){
    int i=0;
    while(input[i] !=  '\0'){
        go[i] = input[i];
        i++;
    }
    go[i] = '\0';
}

bool command(){
    if (s == "text" ||s == "var" ||s == "set" ||s == "output" ||s == "do" ||s == "if" ||s=="else"){
        return true;
    }
    else
        return false;
}

bool isVar(String boi){
    if (LL.find(boi)){
        return true;
    }else
        return false;
}

int parseIF(vector<String>& stuff, int& length){
    vector<Node *> exp;
    while ((stuff[0] != "text" &&stuff[0] != "var" &&stuff[0] != "set" &&stuff[0] != "output" &&stuff[0] != "do" &&stuff[0] != "if")&& length!=0){
        // while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type == NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
        if (stuff[0] == "text" || stuff[0]  == "var" || stuff[0]  == "set"||stuff[0] =="output") {
            ExpTree ET(exp);    //create tree with exp
            int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
            cout << sum << endl;    //prints sum of tree
            //run2();
        }
        if (stuff[0] == "+" || stuff[0]  == "-" || stuff[0] == "*" || stuff[0]  == "/" || stuff[0] == "<" ||
            stuff[0]  == ">" || stuff[0] == "==" || stuff[0]  == "~" || stuff[0] == "!=" ||stuff[0]  == "!") {
            // char* temp = s;
            //read_next_token();
            //c = next_token_type;String(s) == "+" ||

            //String temp = String(next_token());
            //same(temp,next_token()); //makes a deep copy of next_token in temp
            Node *n = new Node(false, 0, stuff[0]);
            exp.push_back(n);
            stuff.erase(stuff.begin());
            length--;
            // delete(n);
            //exp.push_back(n[i]);
            //cout << n[i]->optr<<endl;
            // n->print();//JUST TO CHECK
        } else {
            Node *n;
            if (LL.find(stuff[0]) == 1) {
                n = new Node(true, LL.findnum(stuff[0]), "\0");
                stuff.erase(stuff.begin());
            } else {
                n = new Node(true, stuff[0].stringToInt(stuff[0]), "\0");
                stuff.erase(stuff.begin());
            }
            // exp.push_back(n[i]);
            //cout << n[i]->optr<<endl;
            exp.push_back(n);
            length--;
            // delete(n);
            // n->print(); //JUST TO CHECK
        }
        // i++;
//            read_next_token();
//            s = next_token();
        //  c=next_token_type;
        //exp.push_back(n[i]);

        // cout << n[i]->optr<<endl;
        // n[i]->print(); //JUST TO CHECK
    }
    ExpTree ET(exp);    //create tree with exp
    int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
    //cout << sum << endl;    //prints sum of tree
    //run2();
    return sum;
}

void textIF(){
    read_next_token();
    cout << next_token() << endl;
    read_next_token();
    s=next_token();
    return;
}

void outputIF(){

    //ExpTree ET(); // else stores operator and numbers into tree then evaluates
    read_next_token();
    if (next_token_type == NUMBER) {
        cout << next_token() << endl;
        //read_next_token();
        return;
    } else if (next_token_type == SYMBOL || next_token_type == NAME) {
        //const char* s = next_token();
        s = next_token();
        if (next_token_type == NAME) {
            cout << LL.findnum(s) << endl;
            // read_next_token();
            return;
        }
        //Node* n[10];
        vector<Node *> exp;
        int i = 0;
        //TokenType c = next_token_type;
        while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type == NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
            if (s == "text" || String(s) == "var" || String(s) == "set") {
                ExpTree ET(exp);    //create tree with exp
                int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
                cout << sum << endl;    //prints sum of tree
                return;
            }
            if (String(s) == "+" || String(s) == "-" || String(s) == "*" || String(s) == "/" || String(s) == "<" ||
                String(s) == ">" || String(s) == "==" || String(s) == "~" || String(s) == "!=" || String(s) == "!") {
                // char* temp = s;
                //read_next_token();
                //c = next_token_type;String(s) == "+" ||

                String temp = String(next_token());
                //same(temp,next_token()); //makes a deep copy of next_token in temp
                Node *n = new Node(false, 0, temp);
                exp.push_back(n);
                // delete(n);
                //exp.push_back(n[i]);
                //cout << n[i]->optr<<endl;
                // n->print();//JUST TO CHECK
            } else {
                Node *n;
                if (LL.find(s) == 1) {
                    n = new Node(true, LL.findnum(s), "\0");
                } else {
                    n = new Node(true, token_number_value, "\0");
                }
                // exp.push_back(n[i]);
                //cout << n[i]->optr<<endl;
                exp.push_back(n);
                //delete(n);
                // n->print(); //JUST TO CHECK
            }
            // i++;
            read_next_token();
            s = next_token();
            //  c=next_token_type;
            //exp.push_back(n[i]);

            // cout << n[i]->optr<<endl;
            // n[i]->print(); //JUST TO CHECK
        }
//                        for(int j=0;j<i;j++){ //add nodes to expr
//                            n[i]->print();
//                            exp.push_back(n[j]);
//                        }
        ExpTree ET(exp);    //create tree with exp
        int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
        cout << sum << endl;    //prints sum of tree
        return;
    }
}

void varIF(){
    read_next_token();
    s=next_token();
    if (LL.find(s) == true){
        cout<<"WARNING, this variable has already been created and has value: "<<LL.findnum(s)<<endl;
        read_next_token();
        return;
    }
    read_next_token();
    if (next_token_type != NUMBER){
        read_next_token();
        if (next_token_type == SYMBOL) {
            vector<Node *> exp;
            int i = 0;
            while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type == NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
                if (s == "text" || String(s) == "var" || String(s) == "set") {
                    return;
                }
                if (String(s) == "+" || String(s) == "-" || String(s) == "*" || String(s) == "/" || String(s) == "<" ||
                    String(s) == ">" || String(s) == "==" || String(s) == "~" || String(s) == "!=" ||
                    String(s) == "!") {
                    // char* temp = s;
                    //read_next_token();
                    //c = next_token_type;String(s) == "+" ||

                    String temp = String(next_token());
                    //same(temp,next_token()); //makes a deep copy of next_token in temp
                    Node *n = new Node(false, 0, temp);
                    exp.push_back(n);
                    //delete(n);
                    //exp.push_back(n[i]);
                    //cout << n[i]->optr<<endl;
                    // n->print();//JUST TO CHECK
                } else {
                    Node *n;
                    if (LL.find(s) == 1) {
                        n = new Node(true, LL.findnum(s), "\0");
                    } else {
                        n = new Node(true, token_number_value, "\0");
                    }
                    // exp.push_back(n[i]);
                    //cout << n[i]->optr<<endl;
                    exp.push_back(n);
                    //delete(n);
                    // n->print(); //JUST TO CHECK
                }
                // i++;
                read_next_token();
                s = next_token();
                //  c=next_token_type;
                //exp.push_back(n[i]);

                // cout << n[i]->optr<<endl;
                // n[i]->print(); //JUST TO CHECK
            }
            ExpTree ET(exp);    //create tree with exp
            int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
            LL.insert(sum,s);
            return;
        }
    }else {
        LL.insert(token_number_value, s);
        return;
    }
}

void setIF(){
    read_next_token();
    s=next_token();
    read_next_token();
    if (next_token_type == NUMBER){
        if (LL.find(s) == 0){
            cout<<"WARNING, variable \"";
            printf(s.c_str());
            cout<<"\" has not yet been created"<<endl;
            return;
        }
        LL.insert(token_number_value,s);
        return;
    }else {// if (next_token_type == SYMBOL) {
        if (next_token_type == SYMBOL) {
            String temp2 = String(s);
            s = next_token();
            vector<Node *> exp;
            int i = 0;
            while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type == NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
                if (s == "text" || String(s) == "var" || String(s) == "set") {
                    return;
                }
                if (String(s) == "+" || String(s) == "-" || String(s) == "*" || String(s) == "/" || String(s) == "<" ||
                    String(s) == ">" || String(s) == "==" || String(s) == "~" || String(s) == "!=" ||
                    String(s) == "!") {
                    // char* temp = s;
                    //read_next_token();
                    //c = next_token_type;String(s) == "+" ||

                    String temp = String(next_token());
                    //same(temp,next_token()); //makes a deep copy of next_token in temp
                    Node *n = new Node(false, 0, temp);
                    exp.push_back(n);
                    //7 delete(n);
                    //exp.push_back(n[i]);
                    //cout << n[i]->optr<<endl;
                    // n->print();//JUST TO CHECK
                } else {
                    if(s=="output"){
                        break;
                    }
                    Node *n;
                    if (LL.find(s) == 1) {
                        n = new Node(true, LL.findnum(s), "\0");
                    } else {
                        n = new Node(true, token_number_value, "\0");
                    }
                    // exp.push_back(n[i]);
                    //cout << n[i]->optr<<endl;
                    exp.push_back(n);
                    //delete(n);
                    // n->print(); //JUST TO CHECK
                }
                // i++;
                read_next_token();
                s = next_token();
                //  c=next_token_type;
                //exp.push_back(n[i]);

                // cout << n[i]->optr<<endl;
                // n[i]->print(); //JUST TO CHECK
            }
            ExpTree ET(exp);    //create tree with exp
            int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
            LL.insert(sum,temp2);
            return;
        }
    }
}

void doIF(){
    vector<String> scentence;
    read_next_token();
    s=next_token();
    while (!command()){
        //read_next_token();
        //s=next_token();
        scentence.push_back(s);
        read_next_token();
        s=next_token();
//        if (next_token_type == NAME){
//            //run2();
//        }
    }
    String save = s;
    vector<String> workInDo;
    int length;
    int checkDoLoop;
    while (s!="od"){
        if (s=="//"){
            skip_line();
        }else if (s=="do"){
            checkDoLoop++;
            workInDo.push_back("do");
            length++;
        }else if(s=="od" && checkDoLoop != 0){
            checkDoLoop--;
        }
        else if (s=="od" && checkDoLoop == 0){
            break;
        }
        workInDo.push_back(s);
        read_next_token();
        s=next_token();
        length++;
    }
    vector<String> tempwork = workInDo;
    int templen = length;
    while(doit(scentence)){
        doTheDo(workInDo, length);
        workInDo = tempwork;
        length = templen;
    }
    read_next_token();
    s=next_token();
    return;

}

void IFrec(){
    read_next_token();
    s = next_token();
    vector<String> checkIF;
    int count = 0;
    while (!command()) {
        checkIF.push_back(s);
        count++;
        read_next_token();
        s = next_token();
    }
    if (parseIF(checkIF, count)){
        while (s != "fi" || s != "else") {
            if (s == "//") {
                skip_line();
            } else if (s == "text") {
                textIF();
            } else if (s == "var") {
                varIF();
            } else if (s == "output") {
                outputIF();
            } else if (s == "set") {
                setIF();
            } else if (s == "do") {
                IFrec();
            }
            else if(s=="if") {
                doIF();
            }
            else if (s == "else") {
//                while(s!="fi"){
//                    read_next_token();
//                    s=next_token();
//                }
                break;
            } else if (s == "fi") {
                break;
            }

        }if(s=="else"){
            while(s!="fi"){
                read_next_token();
                s=next_token();
            }
        }
        if(s=="fi"){
            read_next_token();
            s=next_token();
            return;
        }

    }else{
        while(s!="else"){
            read_next_token();
            s=next_token();
        }
        read_next_token();
        s=next_token();
        while(s!="fi"){
            if (s == "//") {
                skip_line();
            } else if (s == "text") {
                textIF();
            } else if (s == "var") {
                varIF();
            } else if (s == "output") {
                outputIF();
            } else if (s == "set") {
                setIF();
            } else if (s == "do") {
                doIF();
            }
        }

    }
    read_next_token();
    s=next_token();
    return;
}

void ELSE(){
    while (s!="else" && s!= "fi"){
//            while(s!="fi"){
//                    read_next_token();
//                    s=next_token();
//                }
        read_next_token();
        s=next_token();

    }
    if (s=="fi"){
        read_next_token();
        s=next_token();
        run2();
    }
//        while(s!="else"){
//            if (s=="fi"){
//               // break;
//                run();
//            }
//            read_next_token();
//            s=next_token();
//        }
    read_next_token();
    s=next_token();
    while(s!="fi"){
        if (s == "//") {
            skip_line();
        } else if (s == "text") {
            textIF();
        } else if (s == "var") {
            varIF();
        } else if (s == "output") {
            outputIF();
        } else if (s == "set") {
            setIF();
        } else if (s == "do") {
            doIF();
        }
        else if (s == "if") {
            doIF();
        }
    }

    return;
}

void IF() {
    vector<String> checkIF;
    read_next_token();
    s= next_token();
    int count = 0;
    while (!command()) {
        checkIF.push_back(s);
        count++;
        read_next_token();
        s = next_token();
    }
    //int ifCount = parseIF(checkIF,count);
    if(s == "else"){
        ELSE();
        read_next_token();
        s = next_token();
        return;
    }
    int ifCount = parseIF(checkIF,count);
    int ifelsecheck = 0;
    if (ifCount !=0){
        while (s != "fi" && s != "else") {
            if (s == "//") {
                skip_line();
                ifelsecheck++;
            } else if (s == "text") {
                textIF();
                ifelsecheck++;
            } else if (s == "var") {
                varIF();
                ifelsecheck++;
            } else if (s == "output") {
                outputIF();
                ifelsecheck++;
            } else if (s == "set") {
                setIF();
                ifelsecheck++;
            } else if (s == "do") {
                IFrec();
                ifelsecheck++;
            } else if (s == "if") {
                doIF();
            }
        }
//            if (String(peek_next_token()) == "else") {}
            if (s == "else") {
                while (s != "fi") {
                    read_next_token();
                    s = next_token();
                }
                read_next_token();
                s = next_token();
                return;
            }
//        while(s!="fi"){
//            read_next_token();
//            s=next_token();
//        }
//        read_next_token();
//        s=next_token();
//        return;

    }
    else{//WILL TAKE THE ELSE STATEMENT
        while (s!="else" && s!= "fi"){
//            while(s!="fi"){
//                    read_next_token();
//                    s=next_token();
//                }
            read_next_token();
            s=next_token();

        }
        if (s=="fi"){
            read_next_token();
            s=next_token();
            return;
        }
//        while(s!="else"){
//            if (s=="fi"){
//               // break;
//                run();
//            }
//            read_next_token();
//            s=next_token();
//        }
        read_next_token();
        s=next_token();
        while(s!="fi"){
            if (s == "//") {
                skip_line();
            } else if (s == "text") {
                textIF();
            } else if (s == "var") {
                varIF();
            } else if (s == "output") {
                outputIF();
            } else if (s == "set") {
                setIF();
            } else if (s == "do") {
                doIF();
            }
            else if (s == "if") {
                doIF();
            }
        }

    }
    read_next_token();
    s=next_token();
    return;
}

int finalDo(String op, String var, int num){
    vector<Node *> a;
    Node* n[3];
    n[0] = new Node(false, 0, op);
    n[1] = new Node(true,LL.findnum(var),"\0");
    n[2] = new Node(true, num, "\0");
    for (int i=0;i<3;i++){
        a.push_back(n[i]);
    }
//    for(int i=0;i<3;i++){
//        delete(n[i]);
//    }
    //delete(n);
    ExpTree doTree(a);
    return doTree.parse();

}

int finalDo(String op, int num1, int num2){
    vector<Node *> a;
    Node* n[3];
    n[0] = new Node(false, 0, op);
    n[1] = new Node(true, num1,"\0");
    n[2] = new Node(true, num2, "\0");
    for (int i=0;i<3;i++){
        a.push_back(n[i]);
    }
//    for(int i=0;i<3;i++){
//        delete(n[i]);
//    }
   // delete(n);
    ExpTree doTree(a);
    return doTree.parse();
}

int doit(vector<String> thing){
    String first = thing[0];
    thing.erase(thing.begin());
    int thing1 = 0;
    int thing2=0;
    String var;
    if (isVar(thing[0])){
        var = thing[0];
        thing.erase(thing.begin());
        thing2 = thing[0].stringToInt(thing[0]);
        thing.erase(thing.begin());
        return finalDo(first, var, thing2);
    }
    else {
        thing1 = thing[0].stringToInt(thing[0]);
        thing.erase(thing.begin());
        thing2 = thing[0].stringToInt(thing[0]);
        thing.erase(thing.begin());
        return finalDo(first,thing1,thing2);
    }


    return 1;
}

void text(vector<String>& stuff, int& length){
    while (stuff[0] != "text" &&stuff[0] != "var" &&stuff[0] != "set" &&stuff[0] != "output" &&stuff[0] != "do" &&stuff[0] != "if"){
        cout<<stuff[0].c_str()<<' ';
        stuff.erase(stuff.begin());
        length--;
    }
}

void output(vector<String>& stuff, int& length){
    vector<Node *> exp;
    if (LL.find(stuff[0]) == true){
        cout<<endl;
        cout<<LL.findnum(stuff[0])<<endl;
        stuff.erase(stuff.begin());
        length--;
        return;
    }
    while (stuff[0] != "text" &&stuff[0] != "var" &&stuff[0] != "set" &&stuff[0] != "output" &&stuff[0] != "do" &&stuff[0] != "if"){
       // while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type == NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
            if (stuff[0] == "text" || stuff[0]  == "var" || stuff[0]  == "set"||stuff[0] =="output") {
                ExpTree ET(exp);    //create tree with exp
                int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
                cout << sum << endl;    //prints sum of tree
                //run2();
            }
            if (stuff[0] == "+" || stuff[0]  == "-" || stuff[0] == "*" || stuff[0]  == "/" || stuff[0] == "<" ||
                    stuff[0]  == ">" || stuff[0] == "==" || stuff[0]  == "~" || stuff[0] == "!=" ||stuff[0]  == "!") {
                // char* temp = s;
                //read_next_token();
                //c = next_token_type;String(s) == "+" ||

                //String temp = String(next_token());
                //same(temp,next_token()); //makes a deep copy of next_token in temp
                Node *n = new Node(false, 0, stuff[0]);
                exp.push_back(n);
                stuff.erase(stuff.begin());
                length--;
               // delete(n);
                //exp.push_back(n[i]);
                //cout << n[i]->optr<<endl;
                // n->print();//JUST TO CHECK
            } else {
                Node *n;
                if (LL.find(stuff[0]) == 1) {
                    n = new Node(true, LL.findnum(s), "\0");
                    stuff.erase(stuff.begin());
                } else {
                    n = new Node(true, stuff[0].stringToInt(stuff[0]), "\0");
                    stuff.erase(stuff.begin());
                }
                // exp.push_back(n[i]);
                //cout << n[i]->optr<<endl;
                exp.push_back(n);
                length--;
               // delete(n);
                // n->print(); //JUST TO CHECK
            }
            // i++;
//            read_next_token();
//            s = next_token();
            //  c=next_token_type;
            //exp.push_back(n[i]);

            // cout << n[i]->optr<<endl;
            // n[i]->print(); //JUST TO CHECK
        }
//                        for(int j=0;j<i;j++){ //add nodes to expr
//                            n[i]->print();
//                            exp.push_back(n[j]);
//                        }
//        ExpTree ET(exp);    //create tree with exp
//        int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
//        cout << sum << endl;    //prints sum of tree
//        run();
   // }
    ExpTree ET(exp);    //create tree with exp
    int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
    cout << sum;    //prints sum of tree
    //run2();
}

void set(vector<String>& stuff, int& length){
    String var =  stuff[0];
    stuff.erase(stuff.begin());
    length--;
    vector<Node *> exp;
    while ((stuff[0] != "text" &&stuff[0] != "var" &&stuff[0] != "set" &&stuff[0] != "output" &&stuff[0] != "do" &&stuff[0] != "if") && length != 0){
        // while (next_token_type == SYMBOL || next_token_type == NUMBER || next_token_type == NAME) {//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
        if (stuff[0] == "text" || stuff[0]  == "var" || stuff[0]  == "set"||stuff[0] =="output") {
            ExpTree ET(exp);    //create tree with exp
            int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
            //cout << sum << endl;    //prints sum of tree
            //run2();
            LL.insert(sum,var);
        }
        if (stuff[0] == "+" || stuff[0]  == "-" || stuff[0] == "*" || stuff[0]  == "/" || stuff[0] == "<" ||
            stuff[0]  == ">" || stuff[0] == "==" || stuff[0]  == "~" || stuff[0] == "!=" ||stuff[0]  == "!") {
            // char* temp = s;
            //read_next_token();
            //c = next_token_type;String(s) == "+" ||

            //String temp = String(next_token());
            //same(temp,next_token()); //makes a deep copy of next_token in temp
            length--;
            Node *n = new Node(false, 0, stuff[0]);
            exp.push_back(n);
            stuff.erase(stuff.begin());
            //delete(n);
            //exp.push_back(n[i]);
            //cout << n[i]->optr<<endl;
            // n->print();//JUST TO CHECK
        } else {
            Node *n;
            if (LL.find(stuff[0]) == 1) {
                n = new Node(true, LL.findnum(stuff[0]), "\0");
                stuff.erase(stuff.begin());

            } else {
                n = new Node(true, stuff[0].stringToInt(stuff[0]), "\0");
                stuff.erase(stuff.begin());

            }
            // exp.push_back(n[i]);
            //cout << n[i]->optr<<endl;
            length--;
            exp.push_back(n);
            //delete(n);
            // n->print(); //JUST TO CHECK
        }

    }
    ExpTree ET(exp);    //create tree with exp
    int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
    //cout << sum << endl;    //prints sum of tree
    //run2();
    LL.insert(sum,var);
}


void IF(vector<String>& stuff, int& length){
    vector<String> things;
//    int count = 0;
    while ((stuff[0] != "text" &&stuff[0] != "var" &&stuff[0] != "set" &&stuff[0] != "output" &&stuff[0] != "do" &&stuff[0] != "if") && length != 0) {
        things.push_back(s);
        length++;
//        read_next_token();
//        s = next_token();
    }
    if (parseIF(stuff, length)){
        while (stuff[0] != "fi" || stuff[0] != "else") {
            if (s == "//") {
                skip_line();
            } else if (stuff[0]  == "text") {
                text(things,length);
            } else if (stuff[0]  == "var") {
                varIF();
            } else if (stuff[0]  == "output") {
                output(things,length);
            } else if (stuff[0]  == "set") {
                set(things,length);
            } else if (stuff[0]  == "do") {
                d0();
            } else if (stuff[0]  == "else") {
//                while(s!="fi"){
//                    read_next_token();
//                    s=next_token();
//                }
                break;
            } else if (stuff[0]  == "fi") {
                break;
            }

        }if(stuff[0] =="else"){
            while(s!="fi"){
                stuff.erase(stuff.begin());
                length--;
            }
        }
        if(stuff[0] =="fi"){
            stuff.erase(stuff.begin());
            length--;
            return;
        }

    }else{
        while(s!="else"){

        }

        while(stuff[0]!="fi"){
            if (stuff[0] == "//") {
                skip_line();
            } else if (stuff[0] == "text") {
                text(things,length);
            } else if (stuff[0] == "var") {
                varIF();
            } else if (stuff[0] == "output") {
                output(things,length);
            } else if (stuff[0] == "set") {
                set(things,length);
            } else if (stuff[0] == "do") {
                doIF();
            }
        }

    }

    return;
}

void doTheDo(vector<String>& stuff, int& length){
    while (length != 0){
        if (stuff[0] == "text"){
            stuff.erase(stuff.begin());
            length--;
            text(stuff, length);
        }else if (stuff[0] == "output"){
            stuff.erase(stuff.begin());
            length--;
            output(stuff, length);
        }else if(stuff[0] == "set"){
            stuff.erase(stuff.begin());
            length--;
            set(stuff,length);
        }else if (stuff[0] == "if"){
            stuff.erase(stuff.begin());
            length--;
            IF(stuff,length);
        }
    }

}

void d0(){
    vector<String> scentence;
    read_next_token();
    s=next_token();
    while (!command()){
        //read_next_token();
        //s=next_token();
        scentence.push_back(s);
        read_next_token();
        s=next_token();
//        if (next_token_type == NAME){
//            //run2();
//        }
    }
    String save = s;
    vector<String> workInDo;
    int length;
    int checkDoLoop;
    while (s!="od"){
        if (s=="//"){
            skip_line();
        }else if (s=="do"){
            checkDoLoop++;
            workInDo.push_back("do");
            length++;
        }else if(s=="od" && checkDoLoop != 0){
            checkDoLoop--;
        }
        else if (s=="od" && checkDoLoop == 0){
            break;
        }
        workInDo.push_back(s);
        read_next_token();
        s=next_token();
        length++;
    }
    vector<String> tempwork = workInDo;
    int templen = length;
    while(doit(scentence)){
        doTheDo(workInDo, length);
        workInDo = tempwork;
        length = templen;
    }
    read_next_token();
    s=next_token();
    return;
}


//
//void run3(){
//    if (next_token_type == END){
//        exit(0);
//    }
//    while(next_token_type != END) {
//
//        if (s == "text") {
//            text();
//        }
//
//        if (s == "var") {
//            var();
//        }
//        if (s == "output") {
//            output();
//        }
//        if (s == "set") {
//            set();
//        }
//    }
//}
//

void run2(){
    if (next_token_type == END){
        exit(0);
    }
    while(next_token_type != END) {

        if (s == "text") {
            text();
        }

        if (s == "var") {
            var();
        }
        if (s == "output") {
            output();
        }
        if (s == "set") {
            set();
        }
        if(s=="do"){
            d0();
        }if(s=="if"){
            IF();
        }
    }
}

void run() {
    if (next_token_type == END){
        return;
    }
    read_next_token();
    s= next_token();
     while (next_token_type != END) {
//         if (s == "text") {
//             text();
//         }
//
//         if (s == "var"){
//             var();
//         }
//         if (s == "output"){
//             output();
//         }
//        read_next_token();
//         s= next_token();
        if (s == "//" ) {
            skip_line();
            read_next_token();
            s=next_token();
        }
         else if (next_token_type == END){
             exit(0);
         }
        else if (next_token_type == NAME) {
            if (s == "text") {
                text();
            }
            else if (s == "set") {
                set();
            }
            else if (s == "var"){
                var();
            }
            else if (s == "output"){
                output();
            }
            else  if (s=="do"){
                 d0();
             }
            else if(s=="if"){
                 IF();
             }else {
                read_next_token();
                s=next_token();
            }

                //const char* s  = next_token();
//            s = String(next_token());
//                //String boi = StringCreate(s);
//
//
//            if (s == "text") {
//                text();
//            }
//
//            if (s == "var"){
//                var();
//            }
//
//
//            if (s == "output"){
//                output();// if jsut a number, prints it out
//                    //ExpTree ET(); // else stores operator and numbers into tree then evaluates
//                read_next_token();
//                if (next_token_type == NUMBER){
//                    cout << next_token()<<endl;
//                }
//                else if (next_token_type == SYMBOL){
//                    //const char* s = next_token();
//                    s=next_token();
//                    if (next_token_type == NAME){
//                        cout<< LL.findnum(s)<<endl;
//                    }
//                    //Node* n[10];
//                    vector<Node*> exp;
//                    int i=0;
//                    //TokenType c = next_token_type;
//                    while (next_token_type == SYMBOL|| next_token_type == NUMBER || next_token_type == NAME){//&& (String(s) != "text" || String(s) != "var" || String(s) != "text" || String(s)!= "set")){ //Creates new nodes
//                        if(s == "text" || String(s) == "var" || String(s)== "set") {
//                            break;
//                        }
//                        if (String(s) == "+" || String(s) == "-" ||String(s) == "*" ||String(s) == "/" ||String(s) == "<" ||String(s) == ">" ||String(s) == "==" ||String(s) == "~" ||String(s) == "!=" ||String(s) == "!" ){
//                                 // char* temp = s;
//                                //read_next_token();
//                                //c = next_token_type;String(s) == "+" ||
//
//                            String temp = String(next_token());
//                            //same(temp,next_token()); //makes a deep copy of next_token in temp
//                            Node* n =  new Node(false,0,temp);
//                            exp.push_back(n);
//                                //exp.push_back(n[i]);
//                                //cout << n[i]->optr<<endl;
//                           // n->print();//JUST TO CHECK
//                        }
//                        else {
//                             Node* n;
//                             if (LL.find(s) == 1){
//                                 n  = new Node(true,LL.findnum(s),"\0");
//                             }else {
//                                 n = new Node(true, token_number_value, "\0");
//                             }
//                                // exp.push_back(n[i]);
//                                //cout << n[i]->optr<<endl;
//                            exp.push_back(n);
//                                // n->print(); //JUST TO CHECK
//                        }
//                            // i++;
//                        read_next_token();
//                        s = next_token();
//                            //  c=next_token_type;
//                            //exp.push_back(n[i]);
//
//                            // cout << n[i]->optr<<endl;
//                            // n[i]->print(); //JUST TO CHECK
//                    }
////                        for(int j=0;j<i;j++){ //add nodes to expr
////                            n[i]->print();
////                            exp.push_back(n[j]);
////                        }
//                    ExpTree ET(exp);    //create tree with exp
//                    int sum = operate(ET);  //does add,subt,mult,div on Eexpression Tree
//                    cout<<sum<<endl;    //prints sum of tree

//                       Node* opt = new Node(false,0,s);
//                      read_next_token();
//                      Node* num1 = new Node(true, token_number_value,'\0');
//                      read_next_token();
//                      Node* num2 = new Node(true, token_number_value,'\0');

                //}

            }
        else {
            read_next_token();
            s = next_token();
        }
        }

    }

int main(){
    //cout<<"MAKE SURE TO DO SET INPUT TO CORRECT FILE MR/MS GRADER"<<endl;
    set_input("test6.blip");
    run();
    return 0;
}
