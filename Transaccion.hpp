#ifndef TRANSACCION_HPP
#define TRANSACCION_HPP

#include <string>
#include "Producto.hpp"
#include <iostream> // Para usar string

using namespace std;

// Declaración anticipada: necesaria porque Transaccion usa un puntero a Cartera
class Cartera;

class Transaccion {
private:
    string tipo;
    Producto* producto;
    int cantidad;
    double precio_unitario;
    double total;
    int dia, mes, anio;
    Cartera* cartera_asociada;

public:
    // Constructores
    Transaccion();
    Transaccion(string tipo, Producto* producto, int cantidad, double precio_unitario,
                int dia, int mes, int anio, Cartera* cartera);

    // Getters
    string getTipo() const;
    Producto* getProducto() const;
    int getCantidad() const;
    double getPrecioUnitario() const;
    double getTotal() const;
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    Cartera* getCarteraAsociada() const;
};

#endif