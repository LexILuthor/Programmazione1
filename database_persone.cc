#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdlib>
using namespace std;




int main(int argc,char* argv[]){
	if(argc!=2){
		cout<<argv[0]<<" numero parametri errato!"<<endl;
		return 1;
	}
	char m[2];
	char a[6];
	cout<<"mese ";
	cin>>m;
	if(strlen(m)==1){
		m[1]=m[0];
		m[0]='0';
	}
	cout<<"anno ";
	cin>>a;
	strcat(a,m);
	long int i=0;
	int j=0;
	fstream in;
	in.open(argv[1], ios::in);
	while(i<=atoi(a) || !in.eof()){
		char parola[250];
		in.getline(parola,250,'\n');
		char *p=strrchr(parola, ' ');
		p++;
		i=atoi(p);
		i=i/100;
		if(i==atoi(a))j++;
	}
	in.close();
	cout<<"persone nate: "<<j<<endl;
	return 0;
}
