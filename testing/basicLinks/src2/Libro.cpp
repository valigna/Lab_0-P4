#include"../include2/Libro.hh"

Libro::Libro(){
    this->Titulo = " ";
    this->FechaPublicacion = -1;
    this->Prestado = NULL;
}

Libro::Libro(string Titulo, int Fecha){
    this->Titulo = Titulo;
    this->FechaPublicacion = Fecha;
    this->Prestado = NULL;
}
// Implementacion del destructor
Libro::~Libro() {
    this->del_Owner();
}
// Implementacion de los getters y setters...
void Libro::set_Titulo(string Titulo) {
    this->Titulo = Titulo;
}

string Libro::get_Titulo(){
    return this->Titulo;
}

void Libro::set_FechaPublicacion(int fecha) {
    this->FechaPublicacion = fecha;
}

int Libro::get_FechaPublicacion() {
    return this->FechaPublicacion;
}

// Implementacion de las operaciones para manipular Links...
Persona* Libro::get_Owner() {
    return this->Prestado;
}

void Libro::set_Owner(Persona *owner) {
    this->Prestado = owner;
}
void Libro::del_Owner() {  
        this->Prestado->del_Book(this);    
        this->Prestado = NULL;
}
