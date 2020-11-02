#ifndef HEAP_H_
#define HEAP_H_

#include <string>
#include <sstream>
#include <vector>
#include <iostream>

template <class T>
class Heap {
private:
	T *data;
	unsigned int lenght;
	unsigned int count;
	unsigned int parent(unsigned int) const;
	unsigned int left(unsigned int) const;
	unsigned int right(unsigned int) const;
	void heapify(unsigned int);
	void swap(unsigned int, unsigned int);
   
public:
	Heap(unsigned int);
	~Heap();
	bool empty() const;
	bool full() const;
	void clear();
	std::string toString() const;
  void pop();
  int size();
  int top();
  void push(unsigned int);
  int repetido(); 
  int contar(int);
  
};
template <class T>
Heap<T>::Heap(unsigned int sze) {
	lenght = sze;
	data = new T[lenght];
	count = 0;
}
template <class T>
Heap<T>::~Heap() {
	delete [] data; data = 0;
	lenght = 0; count = 0;
}

template <class T>
bool Heap<T>::empty() const {
	return (count == 0);
}
template <class T>
bool Heap<T>::full() const {
	return (count == lenght);
} 
template <class T>
unsigned int Heap<T>::parent(unsigned int pos) const {
	return (pos - 1) / 2;
}

template <class T>
unsigned int Heap<T>::left(unsigned int pos) const {
	return ((2 * pos) + 1);
}

template <class T>
unsigned int Heap<T>::right(unsigned int pos) const {
	return ((2 * pos) + 2);
}

template <class T>
void Heap<T>::swap(unsigned int i, unsigned int j) {
	T aux = data[i];
	data[i] = data[j];
	data[j] = aux;
}


///////////////////////////////////////////////////////////
template <class T>
std::string Heap<T>::toString() const {
	std::stringstream aux;
	aux << "[";	for (unsigned int i = 0; i < count; i++) {
		if (i != 0) {
			aux << " ";
		} aux << data[i];
	} aux << "]";
	return aux.str();
}

template<class T>
void Heap<T>::push(unsigned int val){  
  int pos;
  if (!full()){
	pos = count;
	count++;
	while (pos > 0 && val < data[parent(pos)]) {
		data[pos] = data[parent(pos)];
		pos = parent(pos);
	}
	data[pos] = val;
  }
}
template<class T>
void Heap<T>::pop(){
  count --;
  data[0] = data[count];
  heapify(0);
}

template<class T>
int Heap<T>::size(){
  return count;
}
template<class T>
int Heap<T>::top(){
  return data[0];
}
template<class T>
void Heap<T>::heapify(unsigned int pos){
  int le = left(pos);
  int ri = right(pos);
  int min = pos;

  if (le <= count && data[le] < data[min]){
    min = le; 
  }
  if (ri <= count && data[ri] < data[min]){
    min = ri;
  }
  if (min != pos){
    swap(pos, min);
    heapify(min);
  }
}

template<class T>
void Heap<T>::clear(){
  count = 0;
}

template<class T>
int Heap<T>::repetido(){
  int maxrep = 0;
  int temp = 0;
  int n = 0;
  for (int i = 0; i < count; i++){
    temp = contar(data[i]);
    if (temp >= maxrep){     
      maxrep = temp;
      n = data[i];
    }
  }
  std::cout << "el número "<<n<<" se repite "<< 
              maxrep<<" veces"<<'\n';
  return n;
}
template<class T>
int Heap<T>::contar(int num){
  int x = 0;
  for (int i = 0; i < count; i++){
    if (num == data[i]){
      x += 1;
    }
  }
  return x;
}


#endif 
