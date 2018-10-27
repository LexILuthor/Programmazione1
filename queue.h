using namespace std;

#include<iostream>

enum retval{FAIL,OK};
struct nodo{
	int item;
	nodo* next;
	};
struct queue{
	nodo* tail;
	nodo* head;
	};

void init(queue &q);
retval enqueue(int val, queue &q);
retval dequeue(int &val, queue &q);
void print(queue q);

