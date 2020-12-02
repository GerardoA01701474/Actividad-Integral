#include <iostream>
#include <cstring>
#include "graph.h"

using namespace std;

int main(int argc, char* argv[]) {
  int op;
  int start;
  int goal;
  Graph ruta;
  ruta.loadGraphList("rutas.txt", 7, 7);
  ruta.loadGraphMat("rutas.txt", 7, 7);
  cout << "mejor ruta para (0, 3):";
  cout << ruta.DFS(0, 3)<< '\n';
  cout << "mejor ruta para (2, 4):";
  cout << ruta.DFS(2, 4)<< '\n';
  cout << "mejor ruta para (1, 3):";
  cout << ruta.DFS(1, 3)<< '\n'; 
  cout << "mejor ruta para (0, 4):";
  cout << ruta.DFS(0, 4)<< '\n';
  cout << "lista de adyacencia: "<<'\n'<<ruta.printAdjList() << endl;
  
  

}
