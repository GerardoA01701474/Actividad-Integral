#ifndef CLASE_H_
#define CLASE_H_
#include <iostream>
#include <fstream>
#include <vector>
#include <list>
using namespace std;

template <class T>
class Clase {
private:
	void swap(std::vector<T>&, int, int);
public:
	void ordenaBurbuja(std::vector<T>&); 
  int busqBinaria(const std::vector<T>&, int num);
};

template <class T>
void Clase<T>::swap(std::vector<T> &v, int i, int j) {
	T aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}
template <class T>
void Clase<T>::ordenaBurbuja(std::vector<T>&numeros){
  for (int i = numeros.size()-1; i > 0; i--){
    for (int j = 0; j < i; j++){
      if (numeros[j] > numeros[j + 1]){
        swap(numeros, j, j + 1);
      }
    }
  }
  return;
}
template <class T>
int Clase<T>::busqBinaria(const std::vector<T>&vector, int num){
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


#endif
