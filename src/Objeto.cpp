#include "../include/Objeto.hh"

// Implementacion de las funciones auxiliares para manipular el link...
Ninio* Objeto::getPrestadoA() {    
    return this->PrestadoA;
}

void Objeto::setPrestadoA(Ninio *ninio) {
    this->PrestadoA = ninio;
}

void Objeto::delPrestadoA(){
    this->PrestadoA->removePrestadoA(this);
    this->PrestadoA = NULL;
}

// Constructores...
Objeto::Objeto(string Nombre, int AnioComprado, estado Estado){
    this->Nombre = Nombre;
    this->AnioComprado = AnioComprado;
    this->Estado = Estado;
    this->PrestadoA = NULL;
}

// Implementacion del Destructor...
Objeto::~Objeto() {
    this->delPrestadoA();    
}

// Setters y Getters...
string Objeto::getNombre()  
{
    return Nombre;
}

int Objeto::getAnio()
{
    return AnioComprado;
}

estado Objeto::getEstado() 
{
    return Estado;
}

void Objeto::setNombre(string nombre){
    this->Nombre = nombre;
}

void Objeto::setAnio(int anio){
    this->AnioComprado = anio;
}

void Objeto::setEstado(estado Estado){
    this->Estado = Estado;
}


// Funciones Auxiliares...
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

string Objeto::toString() {return "";}