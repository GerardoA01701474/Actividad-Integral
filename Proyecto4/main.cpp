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
  while (op != 4){
    cout << "¿Qué quieres hacer: "<<'\n';
    cout << "1.- Conocer la mejor ruta"<<'\n';
    cout << "2.- Crear nueva ruta/conexion"<<'\n';
    cout << "3.- Generar lista de adyacencia" << '\n';
    cout << "4.- salir"<< '\n';
    cin >> op;
    if (op == 1){

      cout << "¿en qué estación estás?: ";
      cin >> start;
      cout << "¿a qué estación quieres llegar?: ";
      cin >> goal;
      cout << "la mejor ruta a tomar es: " << ruta.DFS(start, goal);
    }
    else if (op == 2){
      int inicio, fin;
      cout << "agregar numero de identificación (0-9): ";
      cin >> inicio;
      cout << "¿a qué estación está directamente conectada?: ";
      cin >> fin;
      ruta.List(inicio, fin);
    }
    else if(op == 3){
      cout << ruta.printAdjList() << endl;
    }
  }
  
  
  

}
