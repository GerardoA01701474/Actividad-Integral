#include <iostream> 
#include "disSet.h"
//#include <string>
using namespace std; 
int main() { 
  int op;
  DisjSet A(9); 
  A.leer();
  A.Union("José", "Jorge"); 
  A.Union("Rodrigo", "Fernanda"); 
  //obj.Union("g", "w"); 
  cout << A.amistad("José", "Jorge");
  cout << A.amistad("Rodrigo","Angel");
  //////////////////////////////////////
  while (op != 4){
  cout << "¿Qué quieres hacer: "<<'\n';
  cout << "1.- crear una nueva amistad"<<'\n';
  cout << "2.- consultar la amitad entre dos personas"<<'\n';
  cout << "3.- Exportar archivo con amistades consultadas" << '\n';
  cout << "4.- Salir" << '\n';
  cin >> op;
    if (op == 1){
      string uno, dos;
      cout << "nombre de la primer persona: ";
      cin >> uno;
      cout << "nombre de la segunda persona: ";
      cin >> dos;
      A.Union(uno, dos);
      //cout << "amistad creada!"<<endl;
    }
    if (op == 2){
      string uno, dos;
      cout << "nombre de la primer persona: ";
      cin >> uno;
      cout << "nombre de la segunda persona: ";
      cin >> dos;
      cout << A.amistad(uno, dos);
    }
    if (op == 3){
      A.escribir();
    }
  }
} 
