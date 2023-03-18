#include "../include/Ninio.hh"

// Implementacion de las operaciones auxiliares para el manejo del link...
void Ninio::addPrestadoA(Objeto* obj) {
        this->PrestadoA.push_back(obj);
}

void Ninio::removePrestadoA(Objeto *obj){
    int i = 0;
    while(i < PrestadoA.size() && obj != PrestadoA[i]){
        i++;
    }
    if(i < PrestadoA.size()){
        while(i < (PrestadoA.size() - 1)){
            PrestadoA.at(i) = PrestadoA.at(i + 1);
        }
        PrestadoA[PrestadoA.size()] = NULL;
        
        PrestadoA.at(i) = PrestadoA.at(PrestadoA.size() - 1);
        PrestadoA.pop_back();
    }
}

/* Asumiendo que no importa el orden...
void Ninio::removePrestadoA(Objeto *obj) {
    if(!(this->PrestadoA.empty())) {
        int i = );
        while(i this->PrestadoA.size()ze) {
            if(obj == this->PrestadoA[i])
                this->PrestadoA.at(i)->delPrestadoA(this); {
                this->PrestadoA.at(i) = this->PrestadoA[this->PrestadoA.size() - 1];
                this->PrestadoA.pop_back();
            } else {
                i++;
            }
        }
    }
*/;

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

// Implementacion de los Getters y Setters...
string Ninio::getNombre() {return this->Nombre;}
void Ninio::setNombre(string nombre) {this->Nombre = nombre;}

int Ninio::getEdad() {return this->Edad;}
void Ninio::setEdad(int edad) {this->Edad = edad;}

string Ninio::getDireccion() {return this->Direccion;}
void Ninio::setDireccion(string direccion) {this->Direccion = direccion;}

string Ninio::getTelefono() {return this->Telefono;}
void Ninio::setTelefono(string telefono) {this->Telefono = telefono;}

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
