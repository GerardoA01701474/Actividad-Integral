#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "heap.h"

using namespace std;

int main(){
int op;

//se crea un objeto de tipo lista
Heap<int> A(30);
A.leer();
while (op != 3){
  cout << "¿Qué quieres hacer: "<<'\n';
  cout << "1.- añadir un nuevo alumno"<<'\n';
  cout << "2.- conocer la calificación más repetida"<<'\n';
  cout << "3.- salir/terminar programa" << '\n';
  cin >> op;
  if (op == 1){
    unsigned int cal;
    string nom;
    cout << "ingresa el nombre: ";
    cin >> nom;
    cout << "ingresa la calificación: ";
    cin >> cal;
    A.push(cal);
    cout << "calificación agregada!"<<endl;
  }
  if(op == 2){
    A.repetido();
  }
}

/*la funcion toString muestra lo que hay en el arbol
luego usamos la función repetido() que te dice cuál es 
el numero que más se repite dentro de la lista de 
numeros*/
A.toString(); 
 //numero más repetido se muestra en consola
A.clear();
return 0;
}
