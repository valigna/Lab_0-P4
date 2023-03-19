#ifndef JUEGO_MESA
#define JUEGO_MESA

#include "Utils.hh"
#include "Objeto.hh"

class JuegoMesa : public Objeto
{
private:
    int EdadRecomendada;
    int CantJugadores;
public:
    // Defino Constructores
    JuegoMesa(string Nombre, int AnioComprado, estado Estado, int EdadRecomendada, int CantJugadores);

    // Defino el Destructor
    ~JuegoMesa();

    // Defino Getters
    int getEdadRecomendada();
    int getCantJugadores();

    // Otras Operaciones
    string toString();

};

#endif