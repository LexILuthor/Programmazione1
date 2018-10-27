#include"stack.h"
using namespace std;

int main()
{
    int scelta;
	init();
	cout << "Cosa vuoi fare ?\n 1 : Crea la Pila\n 2 : Inserisci un elemento\n"
    << " 3 : Estrai un elemento\n 4 : Visualizza l'elemento piu' recente\n 5 : Svuota la pila\n 6 : Stampa la pila\n 7 : ESCI\n";
    while(scelta!=7)
    {
    cout << "Scelta : ";
    cin >> scelta;
    switch(scelta)
    {
                  case 1:
                       {
                                  init();
                                  break;
                       }
                  case 2:
                       {
                                  
                                  push();
                                  break;
                       }
                  case 3:
                       {
                                  pop();
                                  break;
                       }
                  case 4:
                       {
                                  top();
                                  break;
                       }
                  case 5:
                       {
                                  init();
                                  break;
                       }
                  case 6:
                       {
                                  print();
                                  break;                     
                       }
                  default:
                          {
                                  cout << "Hai sbagliatoooo !!!!" << endl;
                                  break;
                          
                          } 
    }
}                         
    
	return 0;
}

////////////////////////////////////////////////////////////////////////////////
