#include "Cuenta.hpp"
#include "Cartera.hpp" // Incluimos Cartera para poder usar el constructor y el 'new'
#include <new> 

using namespace std;

// Constructor por defecto
Cuenta::Cuenta() : id(""), correo(""), contrasenia(""), saldo(0), cartera(nullptr) {}

// Constructor completo (sin Cartera* en la firma)
Cuenta::Cuenta(string id, string correo, string contrasenia, double saldo)
    : id(id), correo(correo), contrasenia(contrasenia), saldo(saldo), cartera(nullptr) {}

// Implementación del destructor para liberar la memoria de la cartera
Cuenta::~Cuenta() {
    delete cartera; // Liberamos la memoria del objeto Cartera
}





