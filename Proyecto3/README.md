# Actividad Integral
# Registro de Calificaciones de alumnos de Grupo2 Estructuras de datos
Este programa facilita la visualización de las calificaciones de un grupo de alumnos. Se toman los datos de un archivo.txt para después almacenarlos en un árbol heap. 
Se puede conocer la moda de los datos (calificación que más se repitió) y cuántas veces es que se repite dicha calificación.

## Especificaciones Tecnicas
este repositorio incluye los archivos:
- main.cpp
- heap.h
- archivo.txt
- pruebas.cpp
se genera un nuevo archivo ejemplo.txt con el resultado de la busqueda ingresada
## casos prueba: 
En este caso las funciones las ejemplifiqué en el archivo prueba.cpp y estos son los resultados que se esperan:
- *A.toString()*....en un nuevo archivo llamado "ejemplo.txt" se escribe lo siguiente:
**arbol heap: 
[63 80 69 86 91 91 73 90 91 97 93 100 95 87 91 100 91 91 100 98 97].**
*******************************************************
- *A.repetido()*....En consola se muestra la moda de la lista de registros de calificaciones, en este caso se espera la siguiente salida:
**el número 91 se repite 6 veces**
# toString:
es de complejidad lineal, imprime dato por dato, o sea que recorre todo el árbol
# repetido:
es de complejidad O(n^2) porque toma cada uno de los datos y lo compara con el resto de los datos con ayuda de la función auxiliar "contar"
