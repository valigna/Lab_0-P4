#include"utils2.hh"
#include"Persona.hh"

#ifndef LIBRO
#define LIBRO
class Libro {
    private:
        string Titulo;
        int FechaPublicacion;
        Persona *Prestado;
    public:
        // Opepraciones Auxiliares Para Manipular El Link...
        Persona* get_Owner();
        void set_Owner(Persona *owner);
        void del_Owner();
        // Defino los constructores...
        Libro();
        Libro(string Titulo,int Fecha);
        // Defino el destructor...
        ~Libro();

        // Defino los getters y setters...
        void set_Titulo(string Titulo);
        string get_Titulo();
        void set_FechaPublicacion(int fecha);
        int get_FechaPublicacion();
};
#endif