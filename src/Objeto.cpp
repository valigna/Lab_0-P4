#include "../include/Objeto.hh"

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

void Objeto::setPrestadoA(Ninio *PrestadoA){
    this->PrestadoA = PrestadoA;
}

Ninio* Objeto::getPrestadoA()
{
    return PrestadoA;
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




// Constructores...
Objeto::Objeto(){
    this->Nombre = "";
    this->AnioComprado = 0;
    //this->Estado = ??
    this->PrestadoA = NULL;
}

Objeto::Objeto(string Nombre, int AnioComprado, estado Estado){
    this->Nombre = Nombre;
    this->AnioComprado = AnioComprado;
    this->Estado = Estado;
    this->PrestadoA = NULL;
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

