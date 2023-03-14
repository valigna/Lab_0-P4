#include "../include/Ninio.hh"

//Constructores
Ninio::Ninio() {
    this->Nombre = "";
    this->Edad = 0;
    this->Direccion = "";
    this->Telefono = "";
}

Ninio::Ninio(string Nombre, int Edad, string Direccion, string Telefono){
    this->Nombre = Nombre;
    this->Edad = Edad;
    this->Direccion = Direccion;
    this->Telefono = Telefono;
}

//Setters y Getters
void Ninio::setNombre(string nombre) {this->Nombre = nombre;}
void Ninio::setEdad(int edad) {this->Edad = edad;}
void Ninio::setDireccion(string direccion) {this->Direccion = direccion;}
void Ninio::setTelefono(string telefono) {this->Telefono = telefono;}

string Ninio::getNombre() {return this->Nombre;}
int Ninio::getEdad() {return this->Edad;}
string Ninio::getDireccion() {return this->Direccion;}
string Ninio::getTelefono() {return this->Telefono;}


//Otras Funciones
string* Ninio::listarObjetosPrestados() {}
