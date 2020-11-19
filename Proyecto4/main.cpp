#include <iostream>
#include <cstring>
#include "graph.h"

using namespace std;

int main(int argc, char* argv[]) {
  int start;
  int goal;
  Graph ruta;
  ruta.loadGraphList("rutas.txt", 7, 7);
  ruta.loadGraphMat("rutas.txt", 7, 7);
  cout << "¿en qué estación estás?: ";
  cin >> start;
  cout << "¿a qué estación quieres llegar?: ";
  cin >> goal;
  cout << "la mejor ruta a tomar es: " << ruta.DFS(start, goal);
  

}
