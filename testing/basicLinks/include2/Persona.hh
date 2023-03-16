#include"utils2.hh"
// Forward Declaration
class Libro;

#ifndef PERSONA
#define PERSONA
class Persona {
    private:
        string Nombre;
        string Cedula;
        int Edad;
        int Telefono;
        vector<Libro *> Prestados;
    public:
        // Operaciones Auxiliares Para Manipular el Link...
        void add_Book(Libro *book);
        void del_Book(Libro *book);

        // Defino los constructores...
        Persona();
        Persona(string Nombre, string Cedula, int edad, int Telefono);
        // Defino el destructor...
        ~Persona();

        // Defino los getters y setters...
        void set_Nombre(string nombre);
        string get_Nombre();
        void set_Cedula(string cedula);
        string get_Cedula();
        void set_Edad(int edad);
        int get_Edad();
        void set_Telefono(int telefono);
        int get_Telefono();

        // Defino las demas operaciones...
        void listarLibrosPedidos();
};
#endif