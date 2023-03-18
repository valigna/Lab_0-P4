#ifndef OBJETO
#define OBJETO

#include "Utils.hh"
#include "Ninio.hh"

class Objeto
{
private:
    string Nombre;
    int AnioComprado;
    estado Estado;
    string EstadoToString();
    Ninio *PrestadoA;
public:
    // Defino operaciones auxiliares para manipular los links...
    Ninio* getPrestadoA();
    void setPrestadoA(Ninio *ninio);
    void delPrestadoA(); 

    // Defino Constructores
    Objeto(string Nombre, int AnioComprado, estado Estado);

    // Defino el Destructor
    ~Objeto();

    // Defino Getters y Setters
    string getNombre();
    void setNombre(string nombre);
    int getAnio();
    void setAnio(int anio);
    estado getEstado();
    void setEstado(estado Estado);

    // Otras operaciones
    virtual string toString();
    string toStringAux();
};

#endif