//clases de proyecto
#include <iostream>

using namespace std; // para evitar escribir std:: antes de cout, endl, etc.

class Vehiculo {
private:
    int llantas;
    float modelo;

public:
    Vehiculo(int, float); // Constructor de la clase
    void num_de_llantas();
    void anos_de_vida();
};

// Constructor de Vehiculo
Vehiculo::Vehiculo(int _llantas, float _anosdevida) {
    llantas = _llantas;
    modelo = _anosdevida;
}

void Vehiculo::num_de_llantas() {
    cout << "Tengo: " << llantas << " llantas" << endl;
}

void Vehiculo::anos_de_vida() {
    cout << "Existo desde el: " << (int)modelo << endl;
}

