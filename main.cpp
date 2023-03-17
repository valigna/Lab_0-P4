#include "src/Objeto.cpp"
#include "src/JuegoMesa.cpp"
#include "src/Libro.cpp"
#include "src/Ninio.cpp"
#include "src/DTObjetoRoto.cpp"

int main(){
    //Opcion con Map... | Creacion de los conjuntos Objeto y Ninio dados por la letra...
    std::map<string,Objeto *> mapaObjetos;
    mapaObjetos.insert (std::pair<string, Objeto *>("Nacidos de la bruma: El imperio final", new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688)));

    /* mapaObjetos.emplace("Nacidos de la bruma: El imperio final", new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688)); */
    Libro *l1 = new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240);
    mapaObjetos.emplace("Las Malas", l1);
    //mapaObjetos.emplace("Las Malas", new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240));
    mapaObjetos.emplace("El cocodrilo al que no le gustaba el agua", new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32));
    
    mapaObjetos.emplace("Uno", new JuegoMesa("Uno", 2022, Roto, 7, 10));
    mapaObjetos.emplace("Mazo de Cartas", new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4));
    mapaObjetos.emplace("Dados", new JuegoMesa("Dados", 2020, Roto, 2, 6));


    std::map<std::string, Ninio *> mapaNinios;
    mapaNinios.emplace("Maria Laura", new Ninio("Maria Laura", 10, "Nueva Palmira 1521", "099298190"));
    mapaNinios.emplace("Alex", new Ninio("Alex", 5, "Humberto Primo 1501", "29094141"));

    (mapaNinios["Maria Laura"])->addPrestadoA(mapaObjetos["Mazo de Cartas"]);
    
    for(auto& x: mapaObjetos){
        cout << (x.second)->toString() << endl;
    }

    return 1;
}





























/* 
    //Libros...
    Libro *l1 = new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688);
    cout << l1->toString();
    Libro *l2 = new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240);
    cout << l2->toString();
    Libro *l3 = new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, " Gemma Merino", 32);
    cout << l3->toString();
    
    //Juegos...
    JuegoMesa *j1 = new JuegoMesa("Uno", 2022, Roto, 7, 10);
    cout << j1->toString();
    JuegoMesa *j2 = new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4);   
    cout << j2->toString();
    JuegoMesa *j3 = new JuegoMesa("Dados", 2020, Roto, 2, 6);
    cout << j3->toString();

    //Niños...
    Ninio *n1 = new Ninio("Maria Laura", 10, "Nueva Palmira 1521", "099298190");
    Ninio *n2 = new Ninio("Alex", 5, "Humberto Primo 1501", "29094141");
    
    n1->addPrestadoA(j2);
    j2->setPrestadoA(n1);
    n1->addPrestadoA(l1);
    l1->setPrestadoA(n1);
    n1->addPrestadoA(j3);
    j3->setPrestadoA(n1);
    
    n2->addPrestadoA(j1);
    j1->setPrestadoA(n2);
    n2->addPrestadoA(l3);
    l3->setPrestadoA(n2);

    n1->listarObjetosPrestados();
    n2->listarObjetosPrestados();
    
 */