#ifndef CLASE_H_
#define CLASE_H_
#include <iostream>
#include <fstream>
#include <vector>
#include <list>
using namespace std;


class Clase {
private:
	void swap(std::vector<int>&, int, int);
  void swapText(std::vector<string>&, int, int);
  void printBusq(std::vector<int>&, std::vector<string>&, int);
public:
  Clase();
	void ordenaBurbuja(std::vector<int>&, std::vector<string>&); 
  int busqBinaria(const std::vector<int>&, int num);
  void busqSecuencial(const std::vector<int>&,std::vector<string>&, int, int);
};
Clase::Clase(){
}
void Clase::printBusq(std::vector<int>&aux, std::vector<string>&nombre, int tam){
  cout << "los productos que buscas son: "<<'\n';
  for (int i = 0; i < tam; i++){
    cout << aux[i];
    cout << nombre[aux[i]] << '\n';
  }

}

void Clase::swap(std::vector<int> &v, int i, int j) {
	int aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

void Clase::swapText(std::vector<string> &v, int i, int j){
  string aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

void Clase::ordenaBurbuja(std::vector<int>&numeros, std::vector<string>&nombre){
  for (int i = numeros.size()-1; i > 0; i--){
    for (int j = 0; j < i; j++){
      if (numeros[j] > numeros[j + 1]){
        swap(numeros, j, j + 1);
        swapText(nombre, j, j + 1);
      }
    }
  }
  return;
}

int Clase::busqBinaria(const std::vector<int>&vector, int num){
  int mid;
  int high = vector.size() - 1;
  int low = 0;

  while (low < high){
    mid = (high + low) / 2;
    if (num == vector[mid]){
      return mid;
    }else if (num < vector[mid]){
      high = mid - 1;
    }else if (num > vector[mid]){
      low = mid + 1; 
    }
  }
  return low; 
}

void Clase::busqSecuencial(const std::vector<int>&numero,std::vector<string>&nombre , int min, int max){
  int tam = 0;
  int count = 0;
  std::vector<int> aux(numero.size());
  for (int i = 0; i <= numero.size() - 1; i++){
    //cout << numero[i] << '\n';
    if (numero[i] >= min && numero[i] <= max){
      aux[count] = i;
      count ++;
      tam ++;
    }
  }
  printBusq(aux, nombre, tam);
}


#endif
