#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "list.h"

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
    A.add(nombre,venta);//se prueba la función añadir
    count++;
  }
  leerArchivo.close();
}else{
cout << "No se pudo abrir el archivo" << endl;
}

//casos de prueba de la función find
A.find(18,19);
A.find(0,18);
A.find(19,21)
//limpiamos la lista al finalizar
A.clear();

  return 0;
}
