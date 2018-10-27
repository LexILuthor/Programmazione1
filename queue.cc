#include<iostream>
using namespace std;

#include"queue.h"
static bool emptyp(const queue &q);


void init(queue &q){
	q.head=NULL;
}

static bool emptyp(const queue &q){
	return(q.head==NULL);
}	


retval enqueue(int val,queue &q){
	nodo* np=new (nothrow) nodo;
	if(np==NULL)return FAIL	;
	np->item=val;
	np->next=NULL;
	if(emptyp(q)){
		q.head=q.tail=np;
	}
	else{	
		q.tail->next=np;
		q.tail=np;
	}
	return OK;
}

retval dequeue(int &val,queue &q){
	if(emptyp(q)){
		return FAIL;
	}
	val=q.head->item;
	nodo* tmp=q.head;
	q.head=q.head->next;
	delete tmp;
	return OK;
}





void print(queue q){
	nodo* tmp=q.head;
	if(!emptyp(q)){
		
		while(tmp!= NULL){
			cout<<tmp->item<<' ';
			tmp=tmp->next;
		}
	cout<<endl<<endl;
	}



	return ;
}
