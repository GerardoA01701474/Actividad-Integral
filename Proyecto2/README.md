# Actividad Integral
# Registro de edades de alumnos
Este programa ayuda a llevar el registro de edades de un grupo de alumnos. Se extraen los datos del archivo.txt para después agregarlos a una lista ligada con ayuda de la función add(despues explicaré su funcionamiento) y se pueden conocer a los alumnos que tienen cierto rango de edades definido por el usuario. El resultado de este filtro se muestra en la consola
## Especificaiones tecnicas
En este repositorio se encuentran los archivos:
- main.cpp
- archivo.txt
- list.h 
- exception.h
- prueba.cpp (casos de prueba predefinidos).

Favor de compilar con g++ -Wno-deprecated main.cpp
**en el main es donde se llama a la función leer() para extraer los datos del archivo.txt usando un loop while**
## Casos de prueba
- A continuación se muestran los resultado esperados de los casos de prueba en el prueba.cpp:
1. A.find(18,19); Resultado esperado: Antonio Gerardo Andrea Fernando Ivanna Juan Graciela Fernanda Roberto Miguel Luis
2. A.find(0,18); Resultado esperado: Andrea Fernando Graciela Fernanda Miguel
3. A.find(19,21); Resultado esperado: Antonio Gerardo Felipe Ivanna Carlos María Juan Carmen Jose Angel Roberto Luis Juana
- El usuario puede interactuar con el programa usando el main.cpp, el programa le pedirá que ingrese un rango y después desplegará el resultado en un nuevo archivo de texto 
llamado "ejemplo.txt"

## análisis de complejidad
- *Función add*.....Es de complejidad O(n) debido a que se agrega el nuevo valor al final de la lista, por lo tanto recorre todas las localidades
Esta función crea un nuevo objeto y lo coloca al final de la lista, dicho objeto contiene un nombre y  una edad 
- *Función find*....Es de complejidad O(n) porque puede darse el caso en el que el valor a buscar esté al final de la lista o ni siquiera esté, por lo tanto debe recorrerla toda
Esta función recorre la lista y compara cada uno de los valores en ella contra el rango que el usuario proporciona,
al final devuelve los nombres de las personas que entran en el rango dado. 
