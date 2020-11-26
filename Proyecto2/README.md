# Actividad Integral
# Registro de edades de alumnos
Este programa ayuda a llevar el registro de edades de un grupo de alumnos. Se extraen los datos del archivo.txt para después agregarlos a una lista ligada con ayuda de la función add(despues explicaré su funcionamiento) y se pueden conocer a los alumnos que tienen cierto rango de edades definido por el usuario. El resultado de este filtro se muestra en la consola



Recibe un archivo .txt en el que se encuentra un listado de nombres y edades...
Compilar con g++ -Wno-deprecated main.cpp
Hay un archivo llamado prueba.cpp en el que se muestran varios casos de prueba de las siguientes funciones:
## Función add: 
Es de complejidad O(n) debido a que se agrega el nuevo valor al final de la lista, por lo tanto recorre todas las localidades
Esta función crea un nuevo objeto y lo coloca al final de la lista, dicho objeto contiene un nombre y  una edad 
## Función find:
Es de complejidad O(n) porque puede darse el caso en el que el valor a buscar esté al final de la lista o ni siquiera esté, por lo tanto debe recorrerla toda
Esta función recorre la lista y compara cada uno de los valores en ella contra el rango que el usuario proporciona,
al final devuelve los nombres de las personas que entran en el rango dado. 
