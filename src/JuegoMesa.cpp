#include "../include/JuegoMesa.hh"

// Implementacion de los Constructores...
JuegoMesa::JuegoMesa(string Nombre, int AnioComprado, estado Estado, int EdadRecomendada, int CantJugadores): Objeto(Nombre, AnioComprado, Estado){
    this->EdadRecomendada = EdadRecomendada;
    this->CantJugadores = CantJugadores;
}

// Implementacion del Destructor...
JuegoMesa::~JuegoMesa(){ }

// Implementacion de los Getters y Setters
int JuegoMesa::getEdadRecomendada(){return this->EdadRecomendada;}
void JuegoMesa::setEdadRecomendada(int n){this->EdadRecomendada = n;}

int JuegoMesa::getCantJugadores(){return this->CantJugadores;}
void JuegoMesa::setCantJugadores(int h){this->CantJugadores = h;}


// Implementacion de las demas operaciones...
string JuegoMesa::toString(){
    return "Juego: " + this->toStringAux() + std::to_string(this->EdadRecomendada) + ", " + std::to_string(this->CantJugadores);
}

