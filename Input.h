//
// Created by Shehryar on 11/16/2017.
//

#ifndef PROJECT_8_INTERPRETER_A_INPUT_H
#define PROJECT_8_INTERPRETER_A_INPUT_H

void set_input(const char* file_name);
void skip_line(void);
static bool IS_NUMBER(char c);
static bool IS_LETTER(char c);
static bool IS_SPACE(char c);
void read_next_token(void);
const char* next_token(void);
const char* peek_next_token(void);
#endif //PROJECT_8_INTERPRETER_A_INPUT_H
