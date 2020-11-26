#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "list.h"
//#include "match.h"
using namespace std;

int main(){

//se crea un objeto de tipo lista
List A;
A.leer();

//la función find recibe un rango de busqueda(min,max)
/*esta función devuelve el resultado de la busqueda 
en la consola*/
int min, max;
cout << "Limite inferior de edades: ";
cin >> min;
cout << "Limite superior de edades: ";
cin >> max;
A.find(min,max);
//limpiamos la lista al finalizar
A.clear();

  return 0;
}
