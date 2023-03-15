#include "../include/DTObjetoRoto.hh"


//Constructores
DTObjetoRoto::DTObjetoRoto(){
    this->NombreObjeto = " ";
    this->Prestado = false;
    this->NombreNinio = " ";
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

// getters y setters
void DTObjetoRoto::setNombreObjeto(string nombre) {
    this->NombreObjeto = nombre;
}

string DTObjetoRoto::getNombreObjeto() {
    return this->NombreObjeto;
}

void DTObjetoRoto::setPrestado(bool p) {
    this->Prestado = p;
}
bool DTObjetoRoto::getPrestado() {
    return this->Prestado;
}

void DTObjetoRoto::setNombreNinio(string nombre) {
    this->NombreNinio = nombre;
}
string DTObjetoRoto::getNombreNinio() {
    return this->NombreNinio;
}


//Destructor
DTObjetoRoto::~DTObjetoRoto(){}