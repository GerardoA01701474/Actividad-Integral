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
//-----------se abre el archivo---------------//
ifstream leerArchivo (archivo);
if (leerArchivo.is_open()){
  int count = 1;
  while (getline (leerArchivo, line) ){
    leerArchivo >> nombre >> venta;
    //cout << "nombre: " <<nombre << " venta: " << venta << '\n';
    numeros.resize(count,venta);
    nombres.resize(count, nombre);
    count++;
  }
  leerArchivo.close();
}else{
cout << "No se pudo abrir el archivo" << endl;
}

// ------------Se crea un objeto y ordena los vectores----//
Clase A;
A.ordenaBurbuja(numeros, nombres);

//---------------Se busca dentro del vector ordenado, recibe un rango---//
A.busqSecuencial(numeros, nombres, 50, 2000);

//------------El vector ordenado se escribe en un archivo nuevo
ofstream myfilein ("ejemplo.txt");
if (myfilein.is_open()){
  for (int i = 0; i < numeros.size(); i++){
    myfilein << numeros[i] << ' ';
    myfilein << nombres[i] << ' ' << '\n';
  }
  myfilein.close();
}else{ 
  cout << "No se puede abrir el archivo";
}
return 0; 
}  
