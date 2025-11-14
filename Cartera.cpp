#include "Cartera.hpp"
#include "Cuenta.hpp" // Necesario para acceder a los métodos de la Cuenta
#include <iostream>
#include <fstream>

using namespace std;

// Constructor por defecto
Cartera::Cartera() : nombre("") {}

// Constructor con nombre
Cartera::Cartera(string nombre) : nombre(nombre) {}

// El getter string Cartera::getNombre() const { return nombre; } se ha movido
// completamente a Cartera.hpp para evitar redefinición.

/**
 * Registra una transacción de compra de un producto y actualiza el saldo de la cuenta asociada.
 * @param producto Puntero al producto a comprar.
 * @param cantidad Cantidad de unidades.
 * @param dia Día de la transacción.
 * @param mes Mes de la transacción.
 * @param anio Año de la transacción.
 * @param precios Referencia a la base de datos de precios históricos.
 * @param cuentaAsociada Referencia a la cuenta desde donde se pagará la compra.
 */




