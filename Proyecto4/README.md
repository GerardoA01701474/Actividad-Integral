# explicación 
El programa recibe un archivo de texto con una lista de cada parada de autobús y las paradas a las que puedes llegar, el formato del archivo es el siguiente:
"(parada inicial, parada meta)"
# Al correr el main:
se toman los datos del archivo de rutas.txt para almacenarlos en una lista de adyacencia y una matriz de adyacencia, luego le pregunta al usuario la parada de autobús en la 
que está y a la que quiere llegar. Entonces la función DFS, con ayuda de printPath, despleja el orden en el que tiene que tomar cada ruta para llegar en los menos autobuses posibles.
## casos de prueba:
En prueba.cpp se implementan casos de prueba y estas son las resupestas esperadas:
- mejor ruta para 0, 3: 0 3
- mejor ruta para 2, 4: 2 0 3 4
- mejor ruta para 1, 3: 1 4 3
- mejor ruta para 0, 4: 0 3 4
- lista de adyacencia: 
vertex 0 : 1 2 3 vertex 1 : 0 2 3 4 vertex 2 : 0 1 2 2 3 4 vertex 3 : 0 1 2 4 vertex 4 : 1 2 3 vertex 5 : vertex 6 : 
## La función DFS:
Usada para recorrer todos los nodos del grafo. Es de complejidad O(vertice * arco) ya que recorre todos los arcos de cada uno de los vertices 
## printPath:
imprime los nodos que se requieren para hacer el recorrido. Es de complejidad O(n) porque imprime cada uno de los miembros del stack auxiliar
## loadAdjMat:
recorre cada linea del archivo de texto y luego con ayuda de una función auxiliar (Matrix) incluye cada numero en la matriz de adyacencia, esto lo hace de complejidad O(n)
## loadAdjList:
recorre cada linea del archivo de texto y luego con ayuda de una función auxiliar (List) incluye cada numero en la matriz de adyacencia, esto lo hace de complejidad O(n)
## PrintMatriz:
imprime la matriz, recorre la matriz con dos for loops, esto lo convierte en O(n^2)
## PrintList:
imprime la lista, recorre la lista con dos for loops, esto lo convierte en O(n^2)
