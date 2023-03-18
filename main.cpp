#include "src/Objeto.cpp"
#include "src/JuegoMesa.cpp"
#include "src/Libro.cpp"
#include "src/Ninio.cpp"
#include "src/DTObjetoRoto.cpp"

// Funciones auxiliares
void setLink(Objeto *obj, Ninio *ninio) {
    obj->setPrestadoA(ninio);
    ninio->addPrestadoA(obj);
}

int main() {
    //Opcion con Map... | Creacion de los conjuntos Objeto y Ninio dados por la letra...
    // Partes a) y b))
    std::map<string,Objeto *> mapaObjetos;
    //--INSERT--
    //Libros...
    // mapaObjetos.insert (std::pair<string, Objeto *>("Nacidos de la bruma: El imperio final", new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688)));
    // mapaObjetos.insert (std::pair<string, Objeto *>("Las Malas", new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240)));
    // mapaObjetos.insert (std::pair<string, Objeto *>("El cocodrilo al que no le gustaba el agua", new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32)));
    
    // //Juegos...
    // mapaObjetos.insert (std::pair<string, Objeto *>("Uno", new JuegoMesa("Uno", 2022, Roto, 7, 10)));
    // mapaObjetos.insert (std::pair<string, Objeto *>("Mazo de Cartas", new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4)));
    // mapaObjetos.insert (std::pair<string, Objeto *>("Dados", new JuegoMesa("Dados", 2020, Roto, 2, 6)));
    //--INSERT--
     
    
    // --EMPLACE--
    // Libros...
    mapaObjetos.emplace("Nacidos de la bruma: El imperio final", new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688));
    mapaObjetos.emplace("Las Malas", new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240));
    mapaObjetos.emplace("El cocodrilo al que no le gustaba el agua", new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32));
    
    // Juegos...
    mapaObjetos.emplace("Uno", new JuegoMesa("Uno", 2022, Roto, 7, 10));
    mapaObjetos.emplace("Mazo de Cartas", new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4));
    mapaObjetos.emplace("Dados", new JuegoMesa("Dados", 2020, Roto, 2, 6));
    // --EMPLACE--

    // Parte c)
    // std::map<std::string, Objeto *>::iterator it = mapaObjetos.begin();
    // while (it != mapaObjetos.end()) {
    //     cout << (it->second)->toString() << endl;
    // }

    for(auto& x: mapaObjetos){
        cout << (x.second)->toString() << endl;
    }
    
    // Parte d)
    std::map<std::string, Ninio *> mapaNinios;
    //--EMPLACE--
    mapaNinios.emplace("Maria Laura", new Ninio("Maria Laura", 10, "Nueva Palmira 1521", "099298190"));
    mapaNinios.emplace("Alex", new Ninio("Alex", 5, "Humberto Primo 1501", "29094141")); 


    // Parte e)
    setLink(mapaObjetos["Mazo de Cartas"],mapaNinios["Maria Laura"]);
    setLink(mapaObjetos["Nacidos de la bruma: El imperio final"],mapaNinios["Maria Laura"]);
    setLink(mapaObjetos["Dados"],mapaNinios["Maria Laura"]);
    setLink(mapaObjetos["Uno"],mapaNinios["Alex"]);
    setLink(mapaObjetos["El cocodrilo al que no le gustaba el agua"],mapaNinios["Alex"]);
    
    // Parte f)
    for(auto& x: mapaNinios){
        forward_list<string> aux = (x.second)->listarObjetosPrestados();
        while ((!aux.empty())) {
            cout << aux.front() << endl;
            aux.pop_front();
        }
    }
    
     // Parte g)
     std::map<string, DTObjetoRoto *> mapaObjetosRotos;
     for(auto& x: mapaObjetos){
         if((x.second)->getEstado() == Roto){
             mapaObjetosRotos.emplace((x.second)->getNombre(), new DTObjetoRoto(x.second));
         }
     }
     
    // Parte h)

    return 1;
    
}