#include "../include/Ninio.hh"

// Implementacion de las operaciones auxiliares para el manejo del link...
void Ninio::addPrestadoA(Objeto* obj) {
        this->PrestadoA.push_back(obj);
}

void Ninio::removePrestadoA(Objeto *obj){
    int i = 0;
    while( (i < PrestadoA.size()) && (obj != PrestadoA[i]) ){
        i++;
    }
    if(i < PrestadoA.size()){
        while(i < (PrestadoA.size() - 1)){
            PrestadoA.at(i) = PrestadoA.at(i + 1);
            i++;
        }
        PrestadoA.pop_back();
    }
}

// Implementacion de los Constructores...
Ninio::Ninio(string Nombre, int Edad, string Direccion, string Telefono): PrestadoA() {
    this->Nombre = Nombre;
    this->Edad = Edad;
    this->Direccion = Direccion;
    this->Telefono = Telefono;
}
// Implementacion del Destructor...
Ninio::~Ninio() {
    while(!(this->PrestadoA.empty())) {
        (this->PrestadoA).back()->setPrestadoA(NULL);
        (this->PrestadoA).pop_back();
    }
}

// Implementacion de los Getters...
string Ninio::getNombre() {return this->Nombre;}

int Ninio::getEdad() {return this->Edad;}

string Ninio::getDireccion() {return this->Direccion;}

string Ninio::getTelefono() {return this->Telefono;}

// Implementacion de las demas operaciones...
forward_list<string> Ninio::listarObjetosPrestados(){
    int i = 0;
    forward_list<string> res;
    while(i < PrestadoA.size()){
        res.push_front(this->PrestadoA[i]->toString());
        i++;
    }
    return res;
}
