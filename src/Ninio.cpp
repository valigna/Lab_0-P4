#include "../include/Ninio.hh"

// Funciones auxiliares para el manejo del link...
void Ninio::addPrestadoA(Objeto* obj) {
    if(obj->PrestadoA == NULL){
        this->PrestadoA.push_back(obj);
    }
    else{
        cout << "Este objeto ya fue prestado a otro niño.";
    }
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
        PrestadoA.pop_back()
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

//Constructores
Ninio::Ninio(): PrestadoA() {
    this->Nombre = "";
    this->Edad = 0;
    this->Direccion = "";
    this->Telefono = "";
}

Ninio::Ninio(string Nombre, int Edad, string Direccion, string Telefono): PrestadoA() {
    this->Nombre = Nombre;
    this->Edad = Edad;
    this->Direccion = Direccion;
    this->Telefono = Telefono;
}
// Implementacion del destructor...
Ninio::~Ninio() {
    while(!(this->PrestadoA.empty())) {
        Objeto *aux = (this->PrestadoA).back();
        aux->setPrestadoA(NULL);
        (this->PrestadoA).pop_back();
    }
}


//Setters y Getters
void Ninio::setNombre(string nombre) {this->Nombre = nombre;}
void Ninio::setEdad(int edad) {this->Edad = edad;}
void Ninio::setDireccion(string direccion) {this->Direccion = direccion;}
void Ninio::setTelefono(string telefono) {this->Telefono = telefono;}

string Ninio::getNombre() {return this->Nombre;}
int Ninio::getEdad() {return this->Edad;}
string Ninio::getDireccion() {return this->Direccion;}
string Ninio::getTelefono() {return this->Telefono;}

//Otras Funciones
void Ninio::listarObjetosPrestados(){
    int i = 0;
    while(i < PrestadoA.size()){
        cout << *(PrestadoA[i]).toString() << endl;
        i++;
    }
}
