#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "heap.h"

using namespace std;

int main(){


//se crea un objeto de tipo lista
Heap<int> A(30);
A.leer();
/*la funcion toString muestra lo que hay en el arbol
luego usamos la función repetido() que te dice cuál es 
el numero que más se repite dentro de la lista de 
numeros*/
A.toString(); 
A.repetido(); //numero más repetido se muestra en consola
A.clear();
return 0;
}
