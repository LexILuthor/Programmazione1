#include"struct_stack.h"

void init(stack &s){
	s=NULL;
	return ;
}

static bool emptyp(stack &s){
	return (s==NULL);
}


retval push(int val,stack &s){
	stack np=new (nothrow) nodo;
	if(np==NULL)return FAIL;
	np->item=val;
	np->next=s;
	s=np;
	return OK;
}


retval pop(stack &s){
	if(emptyp(s))return FAIL;
	stack tmp=s;
	s=s->next;
	delete tmp;
	return OK;
}


retval top(int &val, stack &s){
	if(emptyp(s))return FAIL;
	val=s->item;
	return OK;
}



void print(stack &s){
	if(emptyp(s))return ;
	cout<<s->item<<' ';
	print(s->next);
	return ;
}
