#include "Transaccion.hpp"
#include "Producto.hpp" // Para los métodos de Producto
#include "Cartera.hpp"  // Para usar el puntero a Cartera

using namespace std;

// Constructor por defecto
Transaccion::Transaccion()
    : tipo(""), producto(nullptr), cantidad(0), precio_unitario(0),
      total(0), dia(0), mes(0), anio(0), cartera_asociada(nullptr) {}

// Constructor completo
Transaccion::Transaccion(string tipo, Producto* producto, int cantidad, double precio_unitario,
                         int dia, int mes, int anio, Cartera* cartera)
    : tipo(tipo), producto(producto), cantidad(cantidad), precio_unitario(precio_unitario),
      total(cantidad * precio_unitario), dia(dia), mes(mes), anio(anio), cartera_asociada(cartera) {}

// Getters
string Transaccion::getTipo() const { return tipo; }
Producto* Transaccion::getProducto() const { return producto; }
int Transaccion::getCantidad() const { return cantidad; }
double Transaccion::getPrecioUnitario() const { return precio_unitario; }
double Transaccion::getTotal() const { return total; }
int Transaccion::getDia() const { return dia; }
int Transaccion::getMes() const { return mes; }
int Transaccion::getAnio() const { return anio; }
Cartera* Transaccion::getCarteraAsociada() const { return cartera_asociada;}