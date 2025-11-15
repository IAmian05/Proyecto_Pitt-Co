#include "Producto.hpp"
#include "PreciosHistoricos.hpp"

#include <iostream>

using namespace std;

// Constructor por defecto
Producto::Producto() : nombre(""), precio_actual(0.0), dia_actualizacion(1), mes_actualizacion(1), anio_actualizacion(1900) {}

// Constructor completo
Producto::Producto(string nombre, double precio_actual, int dia_actualizacion, int mes_actualizacion, int anio_actualizacion)
    : nombre(nombre), precio_actual(precio_actual), dia_actualizacion(dia_actualizacion), mes_actualizacion(mes_actualizacion), anio_actualizacion(anio_actualizacion) {}

// Getters
string Producto::getNombre() const { return nombre; }
double Producto::getPrecioActual() const { return precio_actual; }
int Producto::getDiaActualizacion() const { return dia_actualizacion; }
int Producto::getMesActualizacion() const { return mes_actualizacion; }
int Producto::getAnioActualizacion() const { return anio_actualizacion; }

// Setter
void Producto::setPrecioActual(double nuevoPrecio) {
    precio_actual =nuevoPrecio;
}