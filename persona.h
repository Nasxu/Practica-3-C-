/*
ARCHIVO : persona.h
AUTOR   : Fernando Vizcarra
Fecha   : 24/03/22
DESCRIPCION: Declaracion de la clase persona.
*/


#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona{
    private:
        int dni;
        string nombre;
        char genero;
        int edad;
        float estatura;
    public:
        void ingresar();
        void imprimir();
};