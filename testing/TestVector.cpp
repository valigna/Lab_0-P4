/* #include "../src/Ninio.cpp"
#include "../src/Objeto.cpp"
#include "../src/Juegomesa.cpp"
#include "../src/Libro.cpp" */
#include "../include/Utils.hh"

// Test.hh
#ifndef TEST
#define TEST
class Numero {
    private:
        int valor;
        vector<int> link;
    public:
        Numero();
        void esVacio();
        //void setVector()
};

#endif

// Test.cpp
Numero::Numero() : link() {
    this->valor = 42;
    //this->link = std::vector<int>(); forma alternativa de iniciar vector
}

void Numero::esVacio() {
    if (this->link.empty()) {
        cout << "Se creo un vector vacio...";
    } else {
        cout << "Esta haciendo cualquier cosa...";
    }
}



//void setVector(){
    
//}

int main() {
    Numero dummy;
    dummy.esVacio();
    return 1;
}