#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "list.h"
//#include "match.h"
using namespace std;

int main(){
string line;
string nombre;
int venta;
string archivo = "archivo.txt";//nombre del archivo

//se crea un objeto de tipo lista
List A;

//-----------se abre el archivo---------------//
ifstream leerArchivo (archivo);
if (leerArchivo.is_open()){
  int count = 1;
  while (getline (leerArchivo, line) ){
    leerArchivo >> nombre >> venta;
    A.add(nombre,venta);//vamos registrando en la lista A
    count++;
  }
  leerArchivo.close();
}else{
cout << "No se pudo abrir el archivo" << endl;
}

//la función find recibe un rango de busqueda(min,max)
/*esta función devuelve el resultado de la busqueda 
en la consola*/
A.find(18,19);
//limpiamos la lista al finalizar
A.clear();

  return 0;
}
