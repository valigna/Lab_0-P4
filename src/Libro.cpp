#include "../include/Libro.hh"

// Implementacion de los Constructores...
Libro::Libro(string Nombre, int AnioComprado, estado Estado, string autor, int CantPaginas) : Objeto(Nombre, AnioComprado, Estado){
    this->Autor = autor;
    this->CantPaginas = CantPaginas;
}

// Implementacion del Destructor...
Libro::~Libro(){}

// Implementacion de los Getters...
string Libro::getAutor() {return this->Autor;}
int Libro::getCantPaginas() {return this->CantPaginas;}

// Implementacion de las demas operaciones...
string Libro::toString(){
    return "Libro: " + this->toStringAux() + this->Autor + ", " + std::to_string(this->CantPaginas);
}