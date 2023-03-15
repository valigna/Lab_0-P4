#include "../include/JuegoMesa.hh"

//getters y setters
void JuegoMesa::setEdadRecomendada(int n){
    this->EdadRecomendada = EdadRecomendada;
}

void JuegoMesa::setCantJugadores(int h){
    this->CantJugadores = h;
}

int JuegoMesa::getEdadRecomendada(){
    return this->EdadRecomendada;
}

int JuegoMesa::getCantJugadores(){
    return this->CantJugadores;
}


//Constructores
JuegoMesa::JuegoMesa() : Objeto(){
    this->CantJugadores = 0;
    this->EdadRecomendada = 0;
}

JuegoMesa::JuegoMesa(string Nombre, int AnioComprado, estado Estado, int EdadRecomendada, int CantJugadores): Objeto(Nombre, AnioComprado, Estado){
    this->EdadRecomendada = EdadRecomendada;
    this->CantJugadores = CantJugadores;
}


//Destructor
JuegoMesa::~JuegoMesa(){

}


//Otras Funciones
string JuegoMesa::toString(){
    //string res;
    
    //string n = this->getNombre();
    //int a = this->getAnio();

    return "Juego: " + this->toStringAux() + std::to_string(this->EdadRecomendada) + ", " + std::to_string(this->CantJugadores);
}

// std::to_string(this->CantJugadores)

// JuegoMesa a;
// Objeto* b = dynamic_cast<Objeto*>(&a);
/*

Juego: Nombre, AñoComprado, Estado, EdadRecomendada, CantJugadores

juego.getNombre()

*/

