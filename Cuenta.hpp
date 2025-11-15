#ifndef CUENTA_HPP
#define CUENTA_HPP

#include <string>
#include <iostream>

// Declaración anticipada de Cartera
class Cartera; 

using namespace std;

class Cuenta {
private:
    string id;
    string correo;
    string contrasenia;
    double saldo;
    // La cuenta tiene una relación con una cartera (agregación)
    Cartera* cartera; 

public:
    // Constructores
    Cuenta();
    // Constructor completo - YA NO necesita pasar Cartera*
    Cuenta(string id, string correo, string contrasenia, double saldo);

    // DESTRUCTOR: Es necesario para liberar la memoria de la Cartera que se crea con 'new'
    ~Cuenta(); 

    // Getters
    Cartera* getCartera() const { return cartera; }
    double getSaldo() const { return saldo; } // Getter para el saldo
    string getId() const { return id; }
    string getCorreo() const { return correo; }
};

#endif