#include "../include/Objeto.hh"
#include "Objeto.hh"

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


// Constructores...
Objeto::Objeto(){
    this->Nombre = "";
    this->AnioComprado = 0;
    //this->Estado = ??
}

Objeto::Objeto(string Nombre, int AnioComprado, estado Estado){
    this->Nombre = Nombre;
    this->AnioComprado = AnioComprado;
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
    
}

string Objeto::toStringAux() {
    return this->Nombre + ", " + std::to_string(this->AnioComprado) + ", " + this->EstadoToString() + ", ";
}

