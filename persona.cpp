/*
ARCHIVO : persona.cpp
AUTOR   : Fernando Vizcarra
Fecha   : 24/03/22
DESCRIPCION: Definicion de los metodos de la clase Persona.
*/
#include <iostream>
#include <string>
#include "persona.h"
using namespace std;

void Persona::ingresar(){
    cout << "\tINGRESO DE DATOS\n";
    cout << "DNI\t: "; cin >> dni; cout << endl; cin.ignore(256,'\n');
    cout << "Nombre\t: "; getline(cin,nombre);cout << endl;
    cout << "Genero\t: "; cin >> genero; cout << endl;
    cout << "Edad\t: "; cin >> edad; cout << endl;
    cout << "Estatura: "; cin >> estatura; cout << endl;
}
void Persona::imprimir(){
    cin.ignore(256,'\n'); cout << "\tDatos de Persona\n" << "Nombre: " << nombre << endl << "DNI: " << dni << endl << "Genero: " << genero << endl << "Edad: " << edad << endl << "Estatura: " << estatura << endl; cin.get();
}