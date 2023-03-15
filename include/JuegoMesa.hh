#include "Utils.hh"
#include "Objeto.hh"

#ifndef JUEGO_MESA
#define JUEGO_MESA

class JuegoMesa : public Objeto
{
private:
    int EdadRecomendada;
    int CantJugadores;

public:
    // Defino los constructores...
    JuegoMesa();
    JuegoMesa(string Nombre, int AnioComprado, estado Estado, int EdadRecomendada, int CantJugadores);

    // Defino los getters y setters...
    void setEdadRecomendada(int EdadRecomendada);
    int getEdadRecomendada();
    void setCantJugadores(int cantJugadores);
    int getCantJugadores();

    // Resto de las funciones...
    string toString();

    // Defino el destructor
    ~JuegoMesa();
};

#endif