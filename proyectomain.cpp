#include"Vehiculo.h"
#include"Arbol.h"
#include"piedra.h"
#include<iostream>

int main() {
    Vehiculo miVehiculo(4, 2018); // Crear un objeto Vehiculo con 4 llantas y año de modelo 2018
    miVehiculo.num_de_llantas(); // Imprimir el número de llantas
    miVehiculo.anos_de_vida();   // Imprimir el año de modelo

    cout<<endl;
    Arbol clasico(15,1.78);
    clasico.anos_de_vida();
    clasico.altura();

    cout<<endl;
    Piedra cuarzo(100,0.15);
    cuarzo.tiempo_de_vida();
    cuarzo._altura();

    return 0;
}
