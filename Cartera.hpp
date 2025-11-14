#ifndef CARTERA_HPP
#define CARTERA_HPP

#include <string>
#include <vector>
#include <iostream>
#include "Transaccion.hpp"
#include "Producto.hpp"
#include "PreciosHistoricos.hpp"

// Declaración anticipada de Cuenta para evitar dependencias circulares y usarla en comprarProducto
class Cuenta;

using namespace std;

class Cartera {
private:
    string nombre;
    vector<Transaccion> transacciones;

public:
    // Constructores
    Cartera();
    Cartera(string nombre);
    
    // Getter
    string getNombre() const { return nombre; } // Añadido getter para usar en Cuenta::mostrar



};

#endif