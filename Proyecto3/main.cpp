#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "heap.h"

using namespace std;

int main(){
string line;
string nombre;
int venta;
string archivo = "archivo.txt";//nombre del archivo

//se crea un objeto de tipo lista
Heap<int> A(30);

//-----------se abre el archivo---------------//
ifstream leerArchivo (archivo);
if (leerArchivo.is_open()){
  int count = 1;
  while (getline (leerArchivo, line) ){
    leerArchivo >> nombre >> venta;
    A.push(venta);//vamos registrando en el arbol A
    count++;
  }
  leerArchivo.close();
}else{
cout << "No se pudo abrir el archivo" << endl;
}

/*la funcion toString muestra lo que hay en el arbol
luego usamos la función repetido() que te dice cuál es 
el numero que más se repite dentro de la lista de 
numeros*/
cout << A.toString();
A.repetido();
A.clear();
return 0;
}
