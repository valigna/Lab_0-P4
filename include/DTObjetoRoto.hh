#include "Utils.hh"

#ifndef DT_OBJETO_ROTO
#define DT_OBJETO_ROTO

class DTObjetoRoto
{
private:
    string NombreObjeto;
    bool Prestado;
    string NombreNinio;

public:
    // Defino los constructores...
    DTObjetoRoto();
    DTObjetoRoto(string nObj, bool p, string nNin);
    DTObjetoRoto(const DTObjetoRoto &obj);

    // Defino los getters y setters...
    void setNombreObjeto(string nombre);
    string getNombreObjeto();
    void setPrestado(bool p);
    bool getPrestado();
    void setNombreNinio(string nombre);
    string getNombreNinio();

    // Defino el destructor...
    ~DTObjetoRoto();
};

#endif