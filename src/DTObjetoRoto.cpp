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

// Implementacion de los Getters...
string DTObjetoRoto::getNombreObjeto() {return this->NombreObjeto;}
bool DTObjetoRoto::getPrestado() {return this->Prestado;}
string DTObjetoRoto::getNombreNinio() {return this->NombreNinio;}
