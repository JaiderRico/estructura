<<<<<<< HEAD
#ifndef CARRO
#define CARRO

=======
>>>>>>> cd55ec07127d4449fc83273e9adf7e55c5864876
#include <iostream>

using namespace std;


class Carro{
    
    private:
        float kilometraje;
        float nivelGasolina;
        float autonomia= 38.5; // kilometros por litro
        float capacidad = 50;
        char estado;   // 0: buen estado, 1: necesita revision, 2: dañado
    
    public:
        Carro();
        void Recorrer(float distancia);
        void Informacion();
<<<<<<< HEAD
        float Tanquear(float gasolina);
    
};


#endif 
=======
        float Tanquear(float gasolina); //hola
    
};
>>>>>>> cd55ec07127d4449fc83273e9adf7e55c5864876
