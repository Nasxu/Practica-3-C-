#include <string>
#include "persona.h"
#include "persona.cpp"
using namespace std;

int main(){
    FILE *archivo;
    archivo = fopen("personas.dat","wb");
    if (archivo == NULL){
        cout << "ERROR: EL ARCHIVO NO PUDO ABRIRSE." << endl; cin.get();
        exit(0);
    }
    int numero;
    cout << "Ingrese el numero de personas en la lista: "; cin >> numero ; cout << endl;
    Persona *lista = new Persona[numero];
    for (int i=0; i<numero; i++){
        lista[i].ingresar();
    }
    fwrite(lista, sizeof(Persona),numero,archivo);

    for (int i=0; i<numero; i++){
        lista[i].imprimir();
    }
    fclose(archivo);
    return 0;

}