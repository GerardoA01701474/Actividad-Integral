#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "clase.h"
using namespace std;

int main () {
string line;
string nombre;
int venta;
string archivo = "archivo.txt";

std::vector<int> numeros;
std::vector<string> nombres;

ifstream leerArchivo (archivo);
if (leerArchivo.is_open()){
  int count = 1;
  while (getline (leerArchivo, line) ){
    leerArchivo >> nombre >> venta;
    cout << "nombre: " <<nombre << " venta: " << venta << '\n';
    numeros.resize(count,venta);
    nombres.resize(count, nombre);
    count++;
  }
  leerArchivo.close();
}else{
cout << "No se pudo abrir el archivo" << endl;
}

for (int i = 0; i < numeros.size(); i++){
  cout << numeros[i] << " " << '\n';
  cout << nombres[i] << " " << '\n';
}
///////777777777777777777777777777777777
Clase<int> A;
A.ordenaBurbuja(numeros);
cout << A.busqBinaria(numeros, 8);

ofstream myfilein ("ejemplo.txt");
if (myfilein.is_open()){
  for (int i = 0; i < numeros.size(); i++){
    myfilein << numeros[i] << '\n';
    myfilein << nombres[i] << '\n';
  }
  myfilein.close();
}else{
  cout << "No se puede abrir el archivo";
}
return 0; 
}  
