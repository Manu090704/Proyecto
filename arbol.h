//clases de proyecto
#include <iostream>

using namespace std; // para evitar escribir std:: antes de cout, endl, etc.

class Arbol {
private:
    int edad;
    float tamano;

public:
    Arbol(int,float); // Constructor de la clase
    void anos_de_vida();
    void altura();
};

// Constructor de Vehiculo
Arbol::Arbol(int _edad, float _tamano) {
    edad = _edad;
    tamano = _tamano;
}

void Arbol::anos_de_vida() {
    cout << "Tengo: " << edad << " primaveras existiendo" << endl;
}

void Arbol::altura() {
    cout << "Mido: " << (float)tamano <<" m"<< endl;
}

