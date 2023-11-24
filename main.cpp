#include "funciones.h"
#include "PlaySort.h"
#include <iostream>



using namespace std;

int main() {
    string nombreArchivo = "goals.csv";
    TreeNode* root = cargarDatosDesdeCSV(nombreArchivo);


    bool salir = false;

    while (!salir) {
        cout << "Menu:\n" << endl;
        cout << "1. Agregar jugador nuevo\n" << endl;
        cout << "2. Ordenar por nombre\n" << endl;
        cout << "3. Buscar jugador\n" << endl;
        cout << "4. Guardar los datops ordenados en un csv\n" << endl;
        cout << "5. Salir\n" << endl;
        cout << "Seleccione una opcion: " << endl;

        int opcion;
        cin >> opcion;

        if (opcion == 1) {
          agregarJugador(root);
        } else if (opcion == 2) {
          PlayerSort::mergeSort(root); 
          cout << "Base de datos ordenada por nombre:\n";
          mostrarBaseDeDatos(root); 
        } else if (opcion == 3) {
            cin.ignore(); 
            cout << "Ingrese el nombre del jugador a buscar: ";
            string nombreBuscar;
            getline(cin, nombreBuscar);
            buscarJugador(root, nombreBuscar);
          
        } else if (opcion == 4) {
          PlayerSort::mergeSort(root); 
          guardarDatosEnCSV(root, "datos_ordenados.csv");  
          eliminarArbol(root);
          cout << "Datos guardados y ordenados en 'datos_ordenados.csv'.\n" << endl;
        } else if (opcion == 5) {
            eliminarArbol(root); 
            cout << "Saliendo del programa. ¡Hasta luego!\n" << endl;
            salir = true;
        } else {
            cout << "Opción no válida. Intente de nuevo.\n" << endl;
        }
    }

    return 0;
}