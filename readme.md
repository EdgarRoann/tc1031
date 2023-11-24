# Proyecto: Nombre de tu proyecto
Escribe aquí un overview general de tu proyecto
"FutbolData Explorer"

## Descripción del avance 1
Pega aquí la descripción de tu primer avance.
Este avance tiene lectura de archivo csv, el cual nos lo muestra, si lo indicas. Esto se hace mediante un menu, ademas cuenta con la opción de ordenar la base de datos, de quien tuvo más goles. Tambien, tiene una busqueda por nombre, donde indicas el nombre a buscar y sale su información. La razon fue para tener un control de los datos y ver lo que realmente buscamos.

## Descripción del avance 2
Escribe aquí la descripción de lo que contiene este avance. 
En este avance hicimos otra vez una la lectura de un archivo csv(fue el mismo archivo que la vez pasada), ahora guardamos la base de datos en un Árbol de Búsqueda Binaria en lugar de usar vectores como estab en el primer avance. Tiene su menu, dos puntos h y sus respectivo cpp.
EL menu consta de
Visualizar Base de Datos: 
Puedes ver la base de datos de jugadores que esta ordenada alfabéticamente por nombres.

Agregar Jugador: Tienes la capacidad de ingresar nuevos jugadores y su información en la base de datos, lo que facilita la actualización y el seguimiento de los datos.

Buscar Jugador: Puedes buscar a un jugador específico dentro de la base de datos utilizando su nombre, lo que te permite obtener detalles completos sobre su historial y estadísticas.

Salir del Programa: La opción para salir te permite cerrar la aplicación de manera controlada.

### Cambios sobre el primer avance
1. Escribe la lista de cambios realizados sobre el planteamiento original: Argumenta la razón por la que decidiste el cambio. Estos argumentos puedes retomarlos más adelante en tu argumentación de competencias.
2. Cambio 1: Menú Modificado: En esta, el menú principal se  modifico para incluir una opción adicional, "Agregar jugador nuevo" en lugar de "Mostrar base de datos". La razón detrás de este cambio es permitir a al usuarios agregar nuevos jugadores a la base de datos directamente desde la aplicación, lo que mejora la funcionalidad y la capacidad de administración de datos.
3. Cambio 2: Función Agregar Jugador: Se ha agregado la función "agregarJugador" en esta versión. Esta función permite a los usuarios ingresar detalles de un nuevo jugador, como nombre, club, posición, goles y otros atributos, y luego crea un nuevo nodo en el árbol de jugadores para reflejar la adición del nuevo jugador. La razón detrás de este cambio es facilitar la adicion  de nuevos datos a la base de datos sin la necesidad de modificar el archivo CSV directamente.
4. Cambio 3: Cambio de Vector a Árbol de Búsqueda Binaria: En esta versión, se ha reemplazado el uso de un vector para almacenar la información de los jugadores por un árbol de búsqueda binaria. La razón detrás de este cambio es mejorar la eficiencia en la búsqueda y ordenación de los jugadores.
5. Cambio 4: Cambiar el modo de ordenarlo: En la anterior version use lo goles y ahora el nombre de los jugadores para ordernalos. La razon de este cambio es que al momento de imprimir la base de datos, se omiten varios valores de informacion. Esto se puede ver al momento de prestar atencion a los valores despues de gol.

## Descripción del avance 3
Escribe aquí la descripción de lo que contiene este avance.
Se ha implementado una nueva funcionalidad: esta nueva fuencion, utiliza los  datos de la estructura del árbol binario y los manda a un archivo CSV. Esta característica permite la persistencia de datos, asegurando que la información recopilada y procesada por el programa no se pierda al terminar la ejecución

### Cambios sobre el segundo avance
1. Escribe la lista de cambios realizados sobre el planteamiento pasado: Argumenta la razón por la que decidiste el cambio. Estos argumentos puedes retomarlos más adelante en tu argumentación de competencias.
2. Cambio 1: Se agregó la funcionalidad para escribir los datos del árbol binario en un archivo CSV: Este cambio se decidió para permitir la persistencia de los datos más allá de la ejecución del programa. Al tener los datos almacenados en un archivo CSV, se facilita el acceso y la manipulación posterior de los mismos, lo cual es una práctica estándar en aplicaciones que manejan grandes volúmenes de información.
3. Cambio 2:  Se modificó el flujo del programa para que realice el ordenamiento de los datos por nombre utilizando el algoritmo de merge sort antes de escribirlos en el CSV: La razón de este cambio es mejorar la legibilidad y la facilidad de uso de los datos exportados. Los usuarios pueden querer ver los datos ordenados para una búsqueda más rápida o para realizar análisis. El ordenamiento previo al guardado asegura que el archivo CSV resultante esté inmediatamente listo para cualquier revisión o procesamiento adicional sin requerir pasos adicionales.
4. Cambio 3: Se agrego una quinta opcion al menu: Con esta opcion, podemos pasar nuestra informacion organizada de los jugadores a un archivo csv y con esto no perdiriamos la base de datos organizada, ni tampoco sobreescribir el archivo original.

## Instrucciones para compilar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`g++ main.cpp -o primer_avance` 

## Instrucciones para ejecutar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`./primer_avance` 

## Descripción de las entradas del avance de proyecto
Escribe aquí la descripción de las entradas del proyecto, por ejemplo, si de entrada se requieren varios archivos, hay que indicar el formato de cada uno de ellos, y proporcionar un ejemplo de los datos de cada archivo.

## Descripción de las salidas del avance de proyecto
Escribe aquí la descripción de los resultados de la ejecución de tu programa.
No se requieren archivos de entrada específicos, ya que la información de los jugadores se carga desde un archivo CSV llamado "goals.csv", lo cual se manejó de manera similar en la versión anterio. La única entrada necesaria es la selección del usuario en el menú.

## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
Si lograste este criterio anteriormente, copia aquí tu argumentación. Si no, ésta es una nueva oportunidad para lograrlo. Escribe aquí tu aprendizaje y tus argumentos sobre por qué consideras que ahora ya has desarrrollado este criterio y dónde se puede observar el desarrollo que mencionas.

Bueno en si no me fallo la parte de programacion, pero falle en la parte de expresarme correctamente al momento de hacer mi analisis por segunda vez. Para el proyecto se uso el merge sort en la estructura de un arbol binario. Debido a las operaciones que se realizan como por ejemplo: las llamdas recursivas, la combinacion de arboles la complejidad es de O(nlogn), y la complejidad espacial es 
O(n) debido al espacio adicional requerido para almacenar los nodos mientras se reconstruye el árbol ordenado.


#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
Si lograste este criterio anteriormente, copia aquí tu argumentación. Si no, ésta es una nueva oportunidad para lograrlo. Escribe aquí tu aprendizaje y tus argumentos sobre por qué consideras que ahora ya has desarrrollado este criterio y dónde se puede observar el desarrollo que mencionas.
Para el proyecto se uso la estructura de datos llamda Arbol binario de busqueda, que maneja las operaciones de inserción, búsqueda, y recorrido de los datos de jugadores. La eficiencia de estas operaciones depende de la altura del árbol, que está influenciada por el orden de inserción de los elementos.

Inserción:
  Mejor caso: O(logn), que ocurre cuando el árbol está balanceado y cada operación de comparación reduce a la mitad el número de nodos posibles para la inserción.
  Peor caso: O(n), que se da cuando el árbol se degrada a una lista enlazada (por ejemplo, cuando los elementos se insertan en orden ascendente o descendente).
  Búsqueda:
  Mejor caso:O(logn), si el árbol está balanceado.
  Peor caso: O(n), si el árbol está completamente desbalanceado.
  Eliminación:
  Mejor caso: O(logn), en un árbol balanceado.
  Peor caso: O(n), en un árbol desbalanceado.
Balance del Árbol: La eficiencia de un BST está altamente influenciada por su balance. Un árbol balanceado mantiene la complejidad de 
O(logn) para la mayoría de las operaciones, mientras que un árbol desbalanceado puede degradarse a O(n).

Para un árbol balanceado, la mayoría de las operaciones tendrán una complejidad temporal logarítmica, lo que es altamente eficiente. Sin embargo, en el peor de los casos, cuando el árbol está desbalanceado, las operaciones pueden degradarse a una complejidad lineal.
#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
Escribe aquí tus argumentos sobre por qué consideras que has desarrrollado esta competencia y dónde se puede observar el desarrollo que mencionas.
Ya una vez realizado el analisis de complejidad de la estructura princinpal y del algoritmo de ordenamiento, falta analizar el resto del codigo: 

Lectura de archivo:
  Apertura de archivo; tiene una complejidad de tiempo constante O(1), asumiendo que el sistema de archivos no tiene retraso significativo.
  Verificación de archivo abierto: if (!archivo.is_open()) también es O(1).
  Lectura de archivo: El bucle while (getline(archivo, linea)) se ejecuta una vez por cada línea en el archivo. La función getline tiene una complejidad de O(n) para cada línea, donde n es la longitud de la línea.
  Descomposición de la línea: Dentro del bucle, la línea se divide en partes usando istringstream y getline. Cada getline es O(m), donde m es el número de caracteres hasta la coma. Sin embargo, como todas estas operaciones dependen de la longitud de la línea, en conjunto siguen siendo O(n) por línea.

Guardar datos en csv:
  Apertura y cierre del archivo:el archivo tiene una complejidad constante O(1).
  GuardarDatosEnCSV:  es O(n) en el peor caso, donde n es el número de nodos del árbol, debido a la pila de llamadas de la recursión en un árbol desequilibrado. En el mejor de los casos, con un árbol perfectamente equilibrado, la complejidad de espacio sería O(log n) debido a la profundidad menor de la pila de llamadas.

Menu:
  Mostrar menú y recibir input (todas las iteraciones): Estas operaciones son constantes O(1)
  Agregar jugador nuevo:  Si se inserta en un árbol de búsqueda binario equilibrado, es O(log n).
  Ordenar por nombre: tendría una complejidad O(n), ya que debe recorrer todos los elementos ordenados.
  Buscar jugador:  en una búsqueda en árbol binario de búsqueda equilibrado sería O(log n).
  Guardar datos ordenados en un CSV: La complejidad de tiempo sería O(n log n) para la ordenación (si es necesario) más O(n) para el recorrido y la escritura en el archivo.

El programa tiene una complejidad temporal que puede variar significativamente con la estructura del árbol y las acciones del usuario, mientras que la complejidad espacial está principalmente ligada al tamaño del árbol de datos.
  
### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
Si lograste este criterio anteriormente, copia aquí tu argumentación. Si no, ésta es una nueva oportunidad para lograrlo. Escribe aquí tu aprendizaje y tus argumentos sobre por qué consideras que ahora ya has desarrrollado este criterio y dónde se puede observar el desarrollo que mencionas.
Seleccione el merge sort debido a su complejidad que O(n log n), en el peor de los casos. Tiene una complejidad de tiempo más eficiente y funcionará bien incluso con bases de datos grandes. Además, es un algoritmo de ordenación estable, lo que significa que si dos jugadores tienen la misma cantidad de goles, se mantendrán en el mismo orden relativo en la base de datos ordenada.

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
Si lograste este criterio anteriormente, copia aquí tu argumentación. Si no, ésta es una nueva oportunidad para lograrlo. Escribe aquí tu aprendizaje y tus argumentos sobre por qué consideras que ahora ya has desarrrollado este criterio y dónde se puede observar el desarrollo que mencionas.
Como ya habia mencionado anteriormente, un BTS nos hace más eficiente la busqueda y ordenamiento de la base de datos. Hay algunas estructuras que nos podrian a ver ayudado mas en la cuestion de ordenarlos o filtrar datos, pero me di cuenta que estas sacrificaban un poco ya sea de busqueda o ordenamiento para ser mejor en una de estas. EL BST es un punto medio. Podemos ver esto al momento de imprimir la base de datos y buscar un jugador. No se tarda tanto como en los vectores(son milisegundos).

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
Si lograste este criterio anteriormente, copia aquí tu argumentación. Si no, ésta es una nueva oportunidad para lograrlo. Escribe aquí tu aprendizaje y tus argumentos sobre por qué consideras que ahora ya has desarrrollado este criterio y dónde se puede observar el desarrollo que mencionas.
Podemos ver que el BTS es más eficiente y un poco mas rapido que los vectores. Los nodos se organizan de manera que puedas buscar jugadores por su nombre de manera eficiente.
Ademas ya teniamos agregado la funcion de buscar jugadores, pero no de agregar. Cuando tu agregas un jugador con toda la informacion que lleva la base de datos, se guarda en la misma, se ordena por su nombre y lo puedes buscar en funcion de buscarjugadores.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
Si lograste este criterio anteriormente, copia aquí tu argumentación. Si no, ésta es una nueva oportunidad para lograrlo. Escribe aquí tu aprendizaje y tus argumentos sobre por qué consideras que ahora ya has desarrrollado este criterio y dónde se puede observar el desarrollo que mencionas.
La lectura de archivos ya la habia implementado en la version anterior, esta comptencia la puedo argumentar debido a que se puede visualizar los datos del csv, ademas podemos modficar esto sin la necesidad de modificar el csv directamente.

### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta
Escribe aquí tus argumentos sobre por qué consideras que has desarrrollado esta competencia y dónde se puede observar el desarrollo que mencionas.
Al momento de que uno selecciona la opcion 5, se crea un nuevo csv donde aparecen los jugadores ordenados alfabeticamente. El archivo nuevo se va a llama "datos_ordenados.csv" y el original es "goals.csv"