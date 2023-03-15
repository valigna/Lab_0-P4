#include "../include/Ninio.hh"

// Funciones auxiliares para el manejo del link...
void Ninio::addPrestadoA(Objeto obj) {
    this->PrestadoA.push_back(obj);
    //obj.setPrestadoA(*Ninio);
    //obj.setPrestadoA(this);
}
// void addPrestado(const Objeto &obj)
// this->PrestadoA.push_back(*obj)


void Ninio::removePrestadoA(Objeto obj){
    
}
//void addPrestadoA();
//void removePrestadoA(Objeto obj);

//Constructores
Ninio::Ninio(): PrestadoA() {
    this->Nombre = "";
    this->Edad = 0;
    this->Direccion = "";
    this->Telefono = "";
}

Ninio::Ninio(string Nombre, int Edad, string Direccion, string Telefono): PrestadoA() {
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
void Ninio::listarObjetosPrestados(){
    int i = 0;
    while(i < PrestadoA.size()){
        cout << i;
        //cout << PrestadoA[i].toStringAux();
        i++;
    }
}
