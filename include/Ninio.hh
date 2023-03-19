#ifndef NINIO
#define NINIO

#include "Utils.hh"

// Declaracion en avanzada de la clase Objeto
class Objeto;

class Ninio
{
private:
    string Nombre;
    int Edad;
    string Direccion;
    string Telefono;
    vector<Objeto *> PrestadoA;
public:
    // Defino operaciones auxiliares para manipular los links...
    void addPrestadoA(Objeto *obj);
    void removePrestadoA(Objeto *obj);

    //Defino Constructores...
    Ninio(string Nombre, int Edad, string Direccion, string Telefono);

    //Defino el Destructor...
    ~Ninio();

    //Defino Getters...
    string getNombre();
    int getEdad();
    string getDireccion();
    string getTelefono();

    // Otras operaciones...
    forward_list<string> listarObjetosPrestados();
};

#include "../include/Objeto.hh"

#endif