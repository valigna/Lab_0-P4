#include "Utils.hh"

#ifndef JUEGO_MESA
#define JUEGO_MESA

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

    // Defino Getters y Setters
    void setEdadRecomendada(int EdadRecomendada);
    int getEdadRecomendada();
    void setCantJugadores(int cantJugadores);
    int getCantJugadores();

    // Otras Operaciones
    string toString();

};

#endif