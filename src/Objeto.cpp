#include "../include/Objeto.hh"

// Implementacion de las operaciones auxiliares para manipular el link...
Ninio* Objeto::getPrestadoA() {    
    return this->PrestadoA;
}

void Objeto::setPrestadoA(Ninio *ninio) {
    this->PrestadoA = ninio;
}

void Objeto::delPrestadoA() {
    if(this->PrestadoA != NULL) {
        this->PrestadoA->removePrestadoA(this);
        this->PrestadoA = NULL;
    }
}

// Implementacion de los Constructores...
Objeto::Objeto(string Nombre, int AnioComprado, estado Estado) {
    this->Nombre = Nombre;
    this->AnioComprado = AnioComprado;
    this->Estado = Estado;
    this->PrestadoA = NULL;
}

// Implementacion del Destructor...
Objeto::~Objeto() {
    this->delPrestadoA();    
}

// Implementacion de los Getters y Setters...
string Objeto::getNombre(){return Nombre;}

estado Objeto::getEstado(){return Estado;}

// Implementacion de las demas operaciones...
string Objeto::toString() {return "";}
string Objeto::EstadoToString(){
    switch (this->Estado)
    {
    case Nuevo:
        return "Nuevo";
    case BienConservado:
        return "Bien Conservado";
    case Roto:
        return "Roto";
    }
    return "";
}

string Objeto::toStringAux() {
    return this->Nombre + ", " + std::to_string(this->AnioComprado) + ", " + this->EstadoToString() + ", ";
}