#include "../include/DTObjetoRoto.hh"

// Implementacion de los Constructores...
DTObjetoRoto::DTObjetoRoto(Objeto *obj) {
    this->NombreObjeto = obj->getNombre();
    this->Prestado = ((obj->getPrestadoA()) != NULL );
    if (this->Prestado) {
        this->NombreNinio = obj->getPrestadoA()->getNombre();
    }
    else {
      this->NombreNinio = " ";  
    }
}

DTObjetoRoto::DTObjetoRoto(string nObj, bool p, string nNin) {
    this->NombreObjeto = nObj;
    this->Prestado = p;
    this->NombreNinio = nNin;
}

DTObjetoRoto::DTObjetoRoto(const DTObjetoRoto &obj) {
    this->NombreObjeto = obj.NombreObjeto;
    this->Prestado = obj.Prestado;
    this->NombreNinio = obj.NombreNinio;
}

// Implementacion del Destructor...
DTObjetoRoto::~DTObjetoRoto(){}

// Implementacion de los Getters y Setters...
string DTObjetoRoto::getNombreObjeto() {return this->NombreObjeto;}
void DTObjetoRoto::setNombreObjeto(string nombre) {this->NombreObjeto = nombre;}

bool DTObjetoRoto::getPrestado() {return this->Prestado;}
void DTObjetoRoto::setPrestado(bool p) {this->Prestado = p;}

string DTObjetoRoto::getNombreNinio() {return this->NombreNinio;}
void DTObjetoRoto::setNombreNinio(string nombre) {this->NombreNinio = nombre;}