#include "../include2/Libro.hh"

// Implementacion de los constructores...
Persona::Persona(): Prestados() {
    this->Nombre = " ";
    this->Cedula = " ";
    this->Edad = 0;
    this->Telefono = 0;
}

Persona::Persona(string Nombre, string Cedula, int edad, int Telefono): Prestados() {
    this->Nombre = Nombre;
    this->Cedula = Cedula;
    this->Edad = edad;
    this->Telefono = Telefono;
}

// Implementacion de las operaciones auxiliares para manipular links...
void Persona::add_Book(Libro *book) {
    this->Prestados.push_back(book);
}

void Persona::del_Book(Libro *book) {

     if(!(this->Prestados.empty())) {
        int i = 0;
        int size = this->Prestados.size();
        while(i < size) {
            if(book == this->Prestados[i]) {
                this->Prestados.at(i) = this->Prestados[this->Prestados.size() - 1];
                //this->Prestados.resize(size-1);
                this->Prestados.pop_back();
            } else {
                i++;
            }
        }
    }
}

// Implementacion del destructor...
Persona::~Persona() {
    while (!(this->Prestados.empty())) {
        Libro *aux = (this->Prestados).back();
        aux->set_Owner(NULL);
        this->Prestados.pop_back();
    }
    //this->Prestados.~vector();
}

// Implementacion de los getters y setters...

void Persona::set_Nombre(string nombre) {
    this->Nombre = nombre;
}

string Persona::get_Nombre() {
    return this->Nombre;
}

void Persona::set_Cedula(string cedula) {
    this->Cedula = cedula;
}

string Persona::get_Cedula() {
    return this->Cedula;
}

void Persona::set_Edad(int edad) {
    this->Edad = edad;
}

int Persona::get_Edad() {
    return this->Edad;
}

void Persona::set_Telefono(int telefono) {
    this->Telefono = telefono;
}

int Persona::get_Telefono() {
    return this->Telefono;
}

// Implementacion de las demas funciones...
void Persona::listarLibrosPedidos() {
    int size = this->Prestados.size();
    for (int i = 0; i < size; i++) {
        cout << "o " << (this->Prestados[i])->get_Titulo() << endl;
    }
}