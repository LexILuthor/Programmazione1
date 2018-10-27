#include"albero.h"

bool nullp(tree & t){
	if(t==NULL)return TRUE;
	return FALSE;
}


void init(tree & t) {
	t=NULL;
}


retval insert(tree &t ,int val) {
	if(t==NULL){
		t=new (nothrow) node;
		if(t==NULL)return FAIL;
		t->left=t->right=NULL;
		t->item=val;
		return OK;
	}
	if(val<=t->item)return insert(t->left, val);
	return insert(t->right, val);
}

tree & cerca(tree &t, int val){
	if(t==NULL)return t;
	if(t->item==val)return t;
	if(t->item<val)return cerca(t->left, val);
	return cerca(t->right,val);
}



void print_ord(tree &t){
	if (t==NULL)return ;
	print_ord(t->left);
	cout<<t->item<<' ';
	print_ord(t->right);
	return ;
}
static void stampa_spazi(int &val){
	for(int i=0;i<val;i++)cout<<' ';
	return ;
}

void print_indented(tree &t){
	if (t==NULL)return ;
	static int i=-1;
	i ++;
	print_indented(t->left);
	stampa_spazi(i);
	cout<<t->item<<endl;
	print_indented(t->right);
	i--;
	return ;
}


void print_preordered(const tree & t) {
  if (!nullp(t)) {
    cout << t->item << endl;
    print_preordered(t->left);
    print_preordered(t->right);
  }
}

void print_postordered(const tree & t) {
  if (!nullp(t)) {
    print_postordered(t->left);
    print_postordered(t->right);
    cout << t->item << endl;
  }
}



int size(tree &t){
	if(nullp(t))return 0;
	return 1 + size(t->left) + size(t->right);
}

int &max(tree &t){
	if(nullp(t) || nullp(t->right))return t->item;
	return max(t->right);
}


int &min(tree&t){
	if(nullp(t) || nullp(t->left))return t->item;
	return min(t->left);
}


retval remove(tree& t, int c){
	tree tmp=cerca(t,c);
	














}
