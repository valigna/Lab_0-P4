#include<iostream>
// Archivo : [Objeto.hh]
#include "../include/utils.hh"


class Objeto
{
private:
    string Nombre;
    int AnioComprado;
    estado Estado;
    string EstadoToString();
public:
    //Defino getters y setters
    string getNombre();
    void setNombre(string nombre);
    int getAnio();
    void setAnio(int anio);
    estado getEstado();
    void setEstado(enum estado);

    //Defino constructores
    Objeto();
    Objeto(string Nombre, int AnioComprado, estado Estado);

    //Defino otras funciones
    //virtual string toString();
    string toStringAux();

    //Defino destructores
    ~Objeto();
};


// Archivo : [Objeto.cpp]

// Setters y Getters...
string Objeto::getNombre()  
{
    return Nombre;
}

int Objeto::getAnio()
{
    return AnioComprado;
}

estado Objeto::getEstado() 
{
    return Estado;
}

void Objeto::setNombre(string nombre){
    this->Nombre = nombre;
}

void Objeto::setAnio(int anio){
    this->AnioComprado = anio;
}

void Objeto::setEstado(estado Estado){
    this->Estado = Estado;
}


// Constructores...
Objeto::Objeto(){
    this->Nombre = "";
    this->AnioComprado = 0;
    this->Estado = Nuevo;
}

Objeto::Objeto(string Nombre, int AnioComprado, estado Estado){
    this->Nombre = Nombre;
    this->AnioComprado = AnioComprado;
    this->Estado = Estado;
}


// Funciones Auxiliares...
string Objeto::EstadoToString(){
    switch (this->Estado)
    {
    case Nuevo:
        return "Nuevo";
        break;
    case BienConservado:
        return "Bien Conservado";
        break;
    case Roto:
        return "Roto";
        break;
    }
    //default:
    return " ";
    //break;

}

string Objeto::toStringAux() {
    return this->Nombre + ", " + std::to_string(this->AnioComprado) + ", " + this->EstadoToString() + ", ";
}

int main() {
    Objeto *obj1 = new Objeto("Nacidos de la bruma: El imperio infernal",2022,Roto);
    string res = obj1->toStringAux();
    cout << res;

    return 1;
}