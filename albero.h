#include<iostream>
using namespace std;

enum retval {FAIL,OK};
enum boolean {FALSE,TRUE};


struct node;

typedef node * tree;

struct node {  
  int item;  
  tree left;  
  tree right;
};

void init(tree &);
retval insert(tree & ,int);
tree & cerca(tree&, int);
bool nullp(tree &);
void print_ord(tree &);
void print_indented(tree &);
void print_preordered(const tree &);
void print_postordered(const tree &);
retval remove(tree &, int);
