#include "funciones.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>


using namespace std;

TreeNode* cargarDatosDesdeCSV(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);

    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo: " << nombreArchivo << endl;
        return nullptr;
    }

    string linea;
    TreeNode* root = nullptr;

    while (getline(archivo, linea)) {
        istringstream ss(linea);
        Jugador jugador;
        getline(ss, jugador.nombre, ',');
        getline(ss, jugador.club, ',');
        getline(ss, jugador.posicion, ',');
        getline(ss, jugador.goles, ',');
        //ss >> jugador.goles;
        getline(ss, jugador.piernaDerecha, ',');
        getline(ss, jugador.piernaIzquierda, ',');
        getline(ss, jugador.cabeza, ',');
        getline(ss, jugador.otros, ',');
        getline(ss, jugador.insideArea, ',');
        getline(ss, jugador.outsideArea, ',');
        getline(ss, jugador.penalties, ',');
        getline(ss, jugador.partidosJugados, ',');

        TreeNode* newNode = new TreeNode(jugador);
        insertarNodo(root, newNode);
    }

    archivo.close();
    return root;
}

void mostrarBaseDeDatos(TreeNode* root) {
    if (root) {
        mostrarBaseDeDatos(root->left);
        Jugador jugador = root->data;
        cout << "Nombre: " << jugador.nombre << ", Goles: " <<   jugador.goles << endl;
        mostrarBaseDeDatos(root->right);
    }
}

void agregarJugador(TreeNode*& root) {
    Jugador nuevoJugador;

    cout << "Ingrese el nombre del jugador: " << endl;
    cin.ignore(); 
    getline(cin, nuevoJugador.nombre);

    cout << "Ingrese el club del jugador: "<< endl;
    getline(cin, nuevoJugador.club);

    cout << "Ingrese la posición del jugador: "<< endl;
    getline(cin, nuevoJugador.posicion);

    cout << "Ingrese la cantidad de goles del jugador: "<< endl;
    cin >> nuevoJugador.goles;

    cout << "Ingrese el tipo de gol con pierna derecha: "<< endl;
    cin.ignore();
    getline(cin, nuevoJugador.piernaDerecha);

    cout << "Ingrese el tipo de gol con pierna izquierda: "<< endl;
    getline(cin, nuevoJugador.piernaIzquierda);

    cout << "Ingrese el tipo de gol con cabeza: "<< endl;
    getline(cin, nuevoJugador.cabeza);

    cout << "Otros tipos de goles (opcional): "<< endl;
    getline(cin, nuevoJugador.otros);

    cout << "Ubicación del gol dentro del área: "<< endl;
    getline(cin, nuevoJugador.insideArea);

    cout << "Ubicación del gol fuera del área: "<< endl;
    getline(cin, nuevoJugador.outsideArea);

    cout << "Penalties: "<< endl;
    getline(cin, nuevoJugador.penalties);

    cout << "Partidos jugados: "<< endl;
    getline(cin, nuevoJugador.partidosJugados);

    TreeNode* newNode = new TreeNode(nuevoJugador);
    insertarNodo(root, newNode);

    cout << "El nuevo jugador ha sido agregado a la base de datos." << endl;
}


void buscarJugador(TreeNode* root, const string& nombre) {
    if (root) {
        if (nombre < root->data.nombre) {
            buscarJugador(root->left, nombre);
        } else if (nombre > root->data.nombre) {
            buscarJugador(root->right, nombre);
        } else {
            Jugador jugador = root->data;
            cout << "Jugador encontrado:\n";
            cout << "Nombre: " << jugador.nombre << " Club: " << jugador.club << " Posicion: " << jugador.posicion
                 << ", Goles: " << jugador.goles << ", Tipo de Gol: " << jugador.piernaDerecha
                 << ", Tipo de Gol: " << jugador.piernaIzquierda << ", Tipo de Gol: " << jugador.cabeza
                 << ", Tipo de Gol: " << jugador.otros << ", Ubicación del Gol: " << jugador.insideArea
                 << ", Ubicación del Gol: " << jugador.outsideArea << ", Ubicación del Gol: " << jugador.penalties
                 << ", Partidos Jugados: " << jugador.partidosJugados << endl;
        }
    } else {
        cout << "Jugador no encontrado." << endl;
    }
}

void insertarNodo(TreeNode*& root, TreeNode* newNode) {
    if (root == nullptr) {
        root = newNode;
    } else if (newNode->data.nombre < root->data.nombre) {
        insertarNodo(root->left, newNode);  
    } else {
        insertarNodo(root->right, newNode); 
    }
}


void eliminarArbol(TreeNode*& root) {
    if (root == nullptr) {
        return;
    }

    eliminarArbol(root->left);
    eliminarArbol(root->right);
    delete root;
    root = nullptr;
}

void guardarDatosEnCSV(TreeNode* root, const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo para escribir: " << nombreArchivo << endl;
        return;
    }
    guardarDatosEnCSVHelper(root, archivo);
    archivo.close();
}


void guardarDatosEnCSVHelper(TreeNode* node, ofstream& archivo) {
    if (node) {
        guardarDatosEnCSVHelper(node->left, archivo);
        Jugador jugador = node->data;
        
        archivo << jugador.nombre << "," << jugador.club << "," << jugador.posicion << ","
                << jugador.goles << "," << jugador.piernaDerecha << "," << jugador.piernaIzquierda << ","
                << jugador.cabeza << "," << jugador.otros << "," << jugador.insideArea << ","
                << jugador.outsideArea << "," << jugador.penalties << "," << jugador.partidosJugados << endl;
        guardarDatosEnCSVHelper(node->right, archivo);
    }
}