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
string archivo = "archivo.txt";


List<int> A;

//std::vector<int> numeros;
std::vector<string> nombres;
//-----------se abre el archivo---------------//
ifstream leerArchivo (archivo);
if (leerArchivo.is_open()){
  int count = 1;
  while (getline (leerArchivo, line) ){
    leerArchivo >> nombre >> venta;
    //cout << "nombre: " <<nombre << " venta: " << venta << '\n';
    //numeros.resize(count,venta);
    nombres.resize(count, nombre);

    A.add(venta);
    count++;
  }
  leerArchivo.close();
}else{
cout << "No se pudo abrir el archivo" << endl;
}

A.find(18,19);
A.clear();

  return 0;
}
