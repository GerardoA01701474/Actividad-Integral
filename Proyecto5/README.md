# Actividad integral 
# Red de amistades
Este programa ayuda a establecer conexiones entre personas, ya sea de forma directa o indirecta(o sea que tengan amigos en común), se toman los nombres de la personas de un 
archivo.txt para que después el usuario pueda establecer conexiones entre las personas registradas, de igual forma se puede conocer si ya hay una relacion existente.
Al final se genera un archivo "ejemplo.txt" en el que se escriben todas las amistades existentes en el programa.
## especificaciones tecnicas
Este repositorio incluye los archivos:
- main.cpp (interaccion con usuario)
- disSet.h (clase del disjoint set)
- archivo.txt (archivo con nombre de personas)
-prueba.cpp

## casos de prueba
El archivo prueba.cpp se encuentran casos de prueba definidos para las funciones Union y amistad, para los cuales se esperan las siguientes respuestas respectivamente:
- amistad creada!
- amistad creada!
- no hay registro de esta persona
- amistad creada!
- amistad creada!
- amistad creada!
- José y Jorge Sí son amigos
- Rodrigo y Angel No son amigos
- Mario y Fernanda No son amigos
- José y Jorge Sí son amigos
## find(): 
Recorre recursivamente todo el arreglo con los nombres hasta que haya un nodo sea su mismo padre, quiere decir que este será el nodo más representativo de esta ramificacion de la
estructura(no tiene padre). Devuelve un entero que nos dice la localidad en la que se encuentra el nodo más representativo. Esto lo convierte en complejidad O(n)
## amistad():
compara los resultados de dos llamadas a la función find; en caso de que coincidan significa que hay conexion entre los dos nodos, pero antes debe saber si exiten los nombres ingresados
por lo que también es O(n)
## Union():
Con ayuda de la funcion find() se encuentran los representativos de dos nodos, para después conectar uno al otro. Debido al uso de la función find(), es complejidad de O(n), 
aunque una vez encontrados los nodos, se unen en un solo paso.


