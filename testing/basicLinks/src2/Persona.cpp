#include "../include2/Persona.hh"

// Implementacion de los constructores...
Persona::Persona(): Prestados() {
    this->Nombre = " ";
    this->Cedula = " ";
    this->Edad = 0;
    this->Telefono = 0;
}

Persona::Persona(string Nombre, string Cedula, int edad, int Telefono): Prestados() {
    this->Nombre = Nombre;
    this->Cedula = Cedula;
    this->Edad = edad;
    this->Telefono = Telefono;
}

// Implementacion del destructor...
Persona::~Persona() {

}

// Implementacion de los getters y setters...