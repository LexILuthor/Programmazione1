#ifndef STRUCT_STACK_H
#define STRUCT_STACK_H
#include<iostream>
using namespace std;
enum retval{FAIL, OK};
struct nodo{
	int item;
	nodo* next;
};

typedef nodo* stack;
void init(stack &);
retval push(int ,stack &);
retval pop(stack &);
retval top(int &, stack &);
void print(stack &);
#endif
