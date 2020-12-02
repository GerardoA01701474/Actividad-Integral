#ifndef DISJOINSET_H_
#define DISJOINSET_H_

#include <iostream> 
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
using namespace std; 


class DisjSet { 
  private:
    int *rank;
    int *parent;
    string *personas;
    int num; 
  public: 
    DisjSet(int);
    void limpiar();
    int find(int);
    void Union(string, string);
    void leer();
    void escribir();
    string amistad(string, string);
    bool existir(string);
};
// Constructor to create and 
// initialize sets of n items 
DisjSet::DisjSet(int n) { 
    rank = new int[n]; 
    parent = new int[n]; 
    personas = new string[n];
    num = n; 
    limpiar(); 
} 

// Creates n single item sets 
void DisjSet::limpiar() { 
    for (int i = 0; i < num; i++) { 
        parent[i] = i; 
    } 
} 

// Finds set of given item x 
int DisjSet::find(int x){ 

  // Finds the representative of the set 
  // that x is an element of 
  if (parent[x] != x) { 

    // if x is not the parent of itself 
    // Then x is not the representative of 
    // his set, 
    //parent[x] = find(parent[x]); 
    find(parent[x]);

    // so we recursively call Find on its parent 
    // and move i's node directly under the 
    // representative of this set 
  } 

  return parent[x]; 
} 

bool DisjSet::existir(string per){
  for (int i = 0; i < num; i++){
    if (personas[i] == per){
      return true;
    }
  }
  return false;
}
void DisjSet::Union(string uno, string dos) {
    // Find the representatives
    // (or the root nodes) for the set
    // that includes i
    int i,j;
    if (existir(uno) && existir(dos)){

      for (int c = 0; c < num; c++){
        if (personas[c] == uno){
          i = c;
        }
        if (personas[c] == dos){
          j = c;
        }
      }
      int irep = this->find(i);

      // And do the same for the set 
      // that includes j    
      int jrep = this->find(j);

      // Make the parent of i’s representative
      // be j’s  representative effectively 
      // moving all of i’s set into j’s set)
      this->parent[irep] = jrep; 
      cout << "amistad creada!"<<endl;
    }else{
      cout << "no hay registro de esta persona"<< endl;
    }

}
void DisjSet::leer(){
  string line;
  string nombre;
  string archivo = "archivo.txt";//nombre del archivo
  //-----------se abre el archivo---------------//
  ifstream leerArchivo (archivo);
  if (leerArchivo.is_open()){
  int count = 0;
  while (getline (leerArchivo, line) ){
    leerArchivo >> nombre;
    //nombre >> line;
    //cout << count;
    personas[count] = nombre; 
       
    count++;
  }
  leerArchivo.close();
  }else{
cout << "No se pudo abrir el archivo" << endl;
  }
}

string DisjSet::amistad(string uno, string dos){
  stringstream aux;
  bool name_one;
  bool name_two;
  int num_one;
  int num_two;
  for (int i = 0; i < num; i++){
    //cout << "personas: "<< personas[i] << " uno: "<< uno
      //   << " dos: " << dos << endl;;
    if (personas[i] == uno){
      //name_one = personas[i];
      name_one = true;
      num_one = i;
    }
    if(personas[i] == dos){
      //name_two = personas[i];
      name_two = true;
      num_two = i;
    }
    
  }
  if (!name_one || !name_two){
    aux << "no hay registro de esta persona";
  }
  else if (this->find(num_one) == this->find(num_two)) 
      aux <<uno <<" y "<<dos<< " Sí son amigos\n"; 
  else
      aux <<uno <<" y "<<dos<< " No son amigos\n";
  return aux.str();
}

void DisjSet::escribir(){
	std::stringstream aux;
  for (int i = 0; i < num; i++){
    for (int j = num-1; j >= 0; j--){
      if (personas[i] != personas[j]){
        if (find(i) == find(j)){
          aux << personas[i] << " y "<< personas[j] 
              << " son amigos" << endl;
        }
      }
    }
  }
  ofstream myfilein ("ejemplo.txt");
  if (myfilein.is_open()){
    myfilein << aux.str();
    myfilein.close();
  }else{ 
  cout << "No se puede abrir el archivo";
  }
  //cout << aux.str();
}




#endif
