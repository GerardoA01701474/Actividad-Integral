#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "list.h"
//#include "match.h"
using namespace std;

int main(){
int op;
//se crea un objeto de tipo lista
List A;
A.leer();
while (op != 3){
  cout << "¿Qué quieres hacer: "<<'\n';
  cout << "1.- agregar nueva edad"<<'\n';
  cout << "2.- Filtrar las edades por rango"<<'\n';
  cout << "3.- salir/terminar programa" << '\n';
  cin >> op;
  if (op == 1){
    int edad;
    string nombre;
    cout << "ingresa el nombre: ";
    cin >> nombre;
    cout << "ingresa la edad: ";
    cin >> edad;
    A.add(nombre,edad);
  }
  if (op == 2){
    int min, max;
    cout << "Limite inferior de edades: ";
    cin >> min;
    cout << "Limite superior de edades: ";
    cin >> max;
    A.find(min,max);
  }
}

//la función find recibe un rango de busqueda(min,max)
/*esta función devuelve el resultado de la busqueda 
en la consola*/

//limpiamos la lista al finalizar
A.clear();

  return 0;
}
