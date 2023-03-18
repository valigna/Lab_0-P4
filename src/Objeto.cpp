#include "../include/Objeto.hh"

// Implementacion de las operaciones auxiliares para manipular el link...
Ninio* Objeto::getPrestadoA() {    
    return this->PrestadoA;
}

void Objeto::setPrestadoA(Ninio *ninio) {
    this->PrestadoA = ninio;
}

void Objeto::delPrestadoA() {
    this->PrestadoA->removePrestadoA(this);
    this->PrestadoA = NULL;
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
void Objeto::setNombre(string nombre){this->Nombre = nombre;}

int Objeto::getAnio(){return AnioComprado;}
void Objeto::setAnio(int anio){this->AnioComprado = anio;}

estado Objeto::getEstado(){return Estado;}
void Objeto::setEstado(estado Estado){this->Estado = Estado;}

// Implementacion de las demas operaciones...
string Objeto::toString() {return "";}

// Implementacion de las Operaciones Auxiliares...
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