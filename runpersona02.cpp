#include <string>
#include "persona.h"
#include "persona.cpp"
using namespace std;

int main(){
    int numero;
    cout << "Ingrese el numero de personas en la lista: "; cin >> numero ; cout << endl;
    Persona *lista = new Persona[numero];
    for (int i=0; i<numero; i++){
        lista[i].ingresar();
    }
    for (int i=0; i<numero; i++){
        lista[i].imprimir();
    }
    return 0;
}