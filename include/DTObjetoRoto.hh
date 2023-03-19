#ifndef DT_OBJETO_ROTO
#define DT_OBJETO_ROTO

#include "Utils.hh"
#include "Objeto.hh"

class DTObjetoRoto
{
private:
    string NombreObjeto;
    bool Prestado;
    string NombreNinio;
public:
    // Defino Constructores
    DTObjetoRoto(Objeto *obj);
    DTObjetoRoto(string nObj, bool p, string nNin);
    DTObjetoRoto(const DTObjetoRoto &obj);

    // Defino el Destructor
    ~DTObjetoRoto();

    // Defino Getters y Setters...
    void setNombreObjeto(string nombre);
    string getNombreObjeto();
    void setPrestado(bool p);
    bool getPrestado();
    void setNombreNinio(string nombre);
    string getNombreNinio();
};

#endif