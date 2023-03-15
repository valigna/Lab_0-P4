#include "../src/Objeto.cpp"
#include "../src/JuegoMesa.cpp"
#include "../src/Libro.cpp"
#include "../src/Ninio.cpp"



int main(){
    
    // Creamos los objetos...
    Libro l1 = Libro("Nacidos de la bruma: El imperio final",2022,Roto,"Brandon Sanderson",688);
    Libro l2 = Libro("Las Malas",2022,Nuevo,"Camila Sosa Villada",240);
    Libro l3 = Libro("El cocodrilo al que no le gustaba el agua",2016,Roto,"Gemma Merino",32);

    Ninio *n1 = new Ninio("Luis", 35, "18 de Julio", "099999991");
    n1->addPrestadoA(l1);
    n1->addPrestadoA(l2);
    n1->addPrestadoA(l3);

    n1->listarObjetosPrestados();

    // Establecemos los links...

}