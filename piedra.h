//clases de proyecto
#include <iostream>

using namespace std; // para evitar escribir std:: antes de cout, endl, etc.

class Piedra {
private:
    int edad;
    float tamano;

public:
    Piedra(int,float); // Constructor de la clase
    void tiempo_de_vida();
    void _altura();
};

// Constructor de Vehiculo
Piedra::Piedra(int _edad, float _tamano) {
    edad = _edad;
    tamano = _tamano;
}

void Piedra::tiempo_de_vida() {
    cout << "Tengo: " << edad << " primaveras existiendo" << endl;
}

void Piedra::_altura() {
    cout << "Mido: " << (float)tamano <<" m"<< endl;
}

