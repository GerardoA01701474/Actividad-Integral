#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <string>
#include <sstream>
#include "exception.h"
#include <iostream>
using namespace std;


class List;

//la clase link contiene los datos extraidos del archivo
//o sea el nombre y la edad
class Link {
private:
	Link(string, int);
	Link(string, int, Link*);
	Link(const Link&);
	int	    value;
  string nombre;
	Link *next;
	friend class List;
};

//contructores de link
Link::Link(string nom, int val) : value(val), next(0), nombre(nom) {}


Link::Link(string nom ,int val, Link* nxt) : value(val), next(nxt), nombre(nom) {}


Link::Link(const Link &source) : value(source.value), next(source.next) {}

//la clase lista es la que liga cada link
class List {
public:
	List();
	List(const List&) throw (OutOfMemory);
	~List();
	void add(string, int) throw (OutOfMemory);
	void find(int, int);
	std::string toString() const;
  void clear();
  void addFirst(string, int) throw (OutOfMemory);
  void printBusqueda(std::vector<int>&);
  void leer();

private:
	Link *head;
	int 	size;
};

//constructores y destructor
List::List() : head(0), size(0) {}
List::List(const List &source) throw (OutOfMemory) {
  head = source.head;
  size = source.size;
  
}
List::~List() {
  clear();
}


//función que añade un nuevo link a la lista,
//de esta manera podemos pasar del archivo a la lista
void List::add(string nom, int value) throw (OutOfMemory) {
  Link *p, *newLink;
  newLink = new Link(nom, value);
	if (newLink == 0) {
		throw OutOfMemory();
	}
  if (head == 0){
    addFirst(nom, value);
    return;
  }
  p = head;
  while (p->next != 0){
    p = p->next;
  } 
  newLink->next = 0;
  p->next = newLink;
  size ++;
}


//función que ayuda a buscar los valores que caen en el 
//rango dado
void List::find(int min, int max) {
  std::vector<int> aux(size);
  Link *p;
  p = head;
  int count = 0;
  int pos = 0;
  while (p->next != 0){
    if (p->value >= min && p->value <= max ){
      aux[count] = pos;
      count ++;
    }
    p = p->next;
    pos++;
  }
  /*el vector aux contiene las posiciones en las que 
  se encontró valores dentro del rango*/
  aux.resize(count);
  printBusqueda(aux);
}

//este método ayuda a mostrar el resultado de la busqueda
void List::printBusqueda(std::vector<int> &aux){
  std::stringstream auxi;
  Link *p;
  auxi << "Las personas de la edad buscada son: "<<'\n';
  for (int i = 0; i < aux.size(); i++){
  int pos = 0;
  p = head; 
    while (p != 0) {
			if (p->next != 0 && pos == aux[i]) {
        auxi << p->nombre << '\n';
			}
			p = p->next;
      pos ++;
		}
  }
  ofstream myfilein ("ejemplo.txt");
  if (myfilein.is_open()){
    myfilein << auxi.str();
    myfilein.close();
  }else{ 
  cout << "No se puede abrir el archivo";
  }
  cout << auxi.str();
}
//clear recorre la lista y borra los valores que contiene cada link
void List::clear() {
	Link *p, *q;

	p = head;
	while (p != 0) {
		q = p->next;
		delete p;
		p = q;
	}
	head = 0;
	size = 0;
}


/*en caso de que la lista esté vacía, se manda llamar
addfirst, para evitar que se busque acceder a un 
espacio no válido en la memoria*/
void List::addFirst(string nom,int val) throw (OutOfMemory) {
	Link *newLink;

	newLink = new Link(nom,val);
	if (newLink == 0) {
		throw OutOfMemory();
	}
	newLink->next = head;
	head = newLink;
	size++;
}

void List::leer(){
string archivo = "archivo.txt";
string line;
string nombre;
int venta;
  //-----------se abre el archivo---------------//
ifstream leerArchivo (archivo);
if (leerArchivo.is_open()){
  int count = 1;
  while (getline (leerArchivo, line) ){
    leerArchivo >> nombre >> venta;
    add(nombre,venta);//vamos registrando en la lista A
    count++;
  }
  leerArchivo.close();
}else{
cout << "No se pudo abrir el archivo" << endl;
}

}


#endif  /* LINKEDLIST_H_ */
