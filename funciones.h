#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct Jugador {
    string nombre;
    string club;
   string posicion;
    string goles;
    //int goles;
   string piernaDerecha;
    string piernaIzquierda;
    string cabeza;
    string otros;
    string insideArea;
    string outsideArea;
    string penalties;
    string partidosJugados;
};
struct TreeNode {
    Jugador data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(const Jugador& jugador) : data(jugador), left(nullptr), right(nullptr) {}
};

TreeNode* cargarDatosDesdeCSV(const string& nombreArchivo);
void mostrarBaseDeDatos(TreeNode* root);
void agregarJugador(TreeNode*& root);
void buscarJugador(TreeNode* root, const string& nombre);
void insertarNodo(TreeNode*& root, TreeNode* newNode);
void eliminarArbol(TreeNode*& root);
void guardarDatosEnCSV(TreeNode* root, const string& nombreArchivo);
void guardarDatosEnCSVHelper(TreeNode* node, std::ofstream& archivo);


#endif // FUNCIONES_H_INCLUDED
