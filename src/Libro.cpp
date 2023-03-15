#include "../include/Libro.hh"

// Implementacion de los constructores...
Libro::Libro() : Objeto(){
    this->Autor = " ";
    this->CantPaginas = 0;
}

Libro::Libro(string Nombre, int AnioComprado, estado Estado, string autor, int CantPaginas) : Objeto(Nombre, AnioComprado, Estado){
    this->Autor = autor;
    this->CantPaginas = CantPaginas;
}

// Implementacion de los geters y seters...
string Libro::getAutor() {
    return this->Autor;
}

void Libro::setAutor(string autor) {
    this->Autor = autor;
}

int Libro::getCantPaginas() {
    return this->CantPaginas;
}

void Libro::setCantPaginas(int CantPaginas) {
    this->CantPaginas = CantPaginas;
}


// Libro: Nombre, AñoComprado, Estado, Autor, CantPaginas
string Libro::toString(){
    return "Libro: " + this->toStringAux() + this->Autor + ", " + std::to_string(this->CantPaginas);
}


// Implementacion del destructor...
Libro::~Libro(){

}