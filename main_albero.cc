using namespace std;
#include <iostream>
#include "albero.h"

int main() {
  char option,val;
  tree t, tmp;
  retval res;
  init(t);
  do {
    cout << "\nOperazioni possibili:\n"
         << "Inserimento (i)\n" 
         << "Ricerca (r)\n" 
         << "Stampa ordinata (s)\n"
	 << "Stampa pre-ordinata (p)\n"
	 << "Stampa post-ordinata (o)\n"    
         << "Stampa indentata (e)\n"
         << "Cancella (c)\n"
         << "Fine (f)\n";
    cin >> option;
    switch (option) {
    case 'i':
      cout << "Val? : ";
      cin >> val;
      res = insert(t,val);
      if (res == FAIL) {
        cout << "spazio insufficiente!\n";
      }
      break;
    case 'r':
      cout << "Val? : ";
      cin >> val;
      tmp=cerca(t,val);
      if (!nullp(tmp)) {
        cout << "Valore trovato!: " << val << endl;
      } else {
        cout << "Valore non trovato!\n";
      }
      break;
    case 's':
      cout << "Stampa ordinata:\n";
      print_ord(t);
      break;
    case 'p':
      cout << "Stampa pre-ordinata:\n";
      print_preordered(t);
      break;
    case 'o':
      cout << "Stampa post-ordinata:\n";
      print_postordered(t);
      break;
    case 'e':
      cout << "Stampa indentata:\n";
      print_indented(t);
      break;
    case 'c':
      cout << "Val? : ";
      cin >> val;
      res = remove(t,val);
      if (res == OK) {
        cout << "Valore cancellato!: " << val << endl;
      } else {
        cout << "Valore non trovato!\n";
      }
      break;
    case 'f':
      break;
    default:
      cout << "Optione errata\n";
    }
  } while (option != 'f');
}
