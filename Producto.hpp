#ifndef PRODUCTO_HPP
#define PRODUCTO_HPP

#include <string>
#include <iostream>

using namespace std;

// Declaración anticipada de PreciosHistoricos
class Precios_historicos; 

class Producto {
private:
    string nombre;
    double precio_actual;
    int dia_actualizacion;
    int mes_actualizacion;
    int anio_actualizacion;

public:
    // Constructores
    Producto();
    Producto(string nombre, double precio_actual, int dia_actualizacion, int mes_actualizacion, int anio_actualizacion);

    // Getters y Setters
    string getNombre() const;
    double getPrecioActual() const;
    int getDiaActualizacion() const;
    int getMesActualizacion() const;
    int getAnioActualizacion() const;
    void setPrecioActual(double nuevoPrecio);
};

#endif