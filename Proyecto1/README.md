# Actividad-Integral
# Registro de ventas de Papelería
Este programa permite mostrar las ventas de ciertos artículos en una papelería, se puede visualizar la información ordenada de forma acendende para conocer los productos que más se vendieron, además de poder filtrar las ventas en caso de querer saber los productos que se vendieron en cierto rango (limite superior e inferior)
## Especificaciones Técnicas
En este repositorio se incluyen los archivos:
- main.cpp 
-clase.h 
-archivo.txt
Se obtendrán los datos del archivo.txt para separar en dos vectores, uno con los nombres de los productos y otro con la venta que se alcanzó por cada producto. El resultado del algoritmo de ordenamiento se imprimirá en un nuevo archivo llamado "ejemplo.txt"
## Casos de prueba
*Funcion ordenaBurbuja*...... recibe ambos vectores obtenidos del archivo.txt, el de nombre y el de ventas. Toma estos vectores y los ordena con un algoritmo Bubble, para después desplegar el resultado de dicho ordenamiento en el archivo "ejemplo.txt" 
*Función busqSecuencial*..... recibe ambos vectores (nombres de productos y venta de cada producto), un límite minimo y un limite máximo. Devuelve en consola una lista con los productos que se vendieron entre el rango que el usuario ingresó.

## análisis de complejidad
*BubbleSort*..............es de complejidad O(n^2) ya que usé un for anidado, que recorre el vector de ventas hacia adelante mientras va comparando con cada valor del vector hacia atrás. Al no necesitar trabajar con muchos datos y no necesariemente de manera rápida, este resultó una buena opción como algoritmo de ordenamiento
*Busqueda secuencial*.....es de complejidad linela O(n) ya que tiene que recorrer todo el vector

