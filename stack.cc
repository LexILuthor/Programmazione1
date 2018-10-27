#include"stack.h"

static bool emptyp();
static bool fullp();
static bool cancella();
static bool aggiungi();

static const int dim=100;
static int indice,stack[dim];


static bool aggiungi(){
	if(!fullp()){
		indice ++;
		return true;
	}
	return false;	
}


static bool cancella(){
	if(!emptyp()){
		indice-=1;
		return true;
	}
	return false;
}

static bool fullp(){
	return(indice==dim);
	}



static bool emptyp(){
	return(indice==0);
}

void init(){
	indice = 0;
	}

retval pop(){
	if(!emptyp()){
		cout<<"l'elemento estratto e' :"<<stack[indice-1]<<endl;
		cancella();
		return OK;
	}
	return FAIL;
}





retval push(){
	if(!fullp()){
		cout<<"inserisci l'elemento"<<endl;	
		cin>>stack[indice];
		aggiungi();
		return OK;
	}
	return FAIL;
}




retval top(){
	if(!emptyp()){
		cout<<"l'ultimo elemento inserito e' :"<<stack[indice-1]<<endl;
		return OK;
	}
	return FAIL;


	}


void print(){
	for(int i=0;i<indice;i++)cout<<stack[i]<<' ';
	cout<<endl;
}
