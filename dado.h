/*
Kirill Makienko Tkachenko & Eric
18/05/23
Juego de serpientes y escaleras
*/

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

No encontramos el dado que se nos proporciona en el documento asi que decidimos programar el nuestro

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


#include<random> //rand() para asignar un valor random al dado
#include <cstdlib>

#pragma once 
using namespace std;

class Dado{

    int size = 6, max = size, min = 1, range = max - min + 1; //Cosa rara para obtener un numero en un rango deseado
    int num = rand() % range + min;

public:
    //contructor
    Dado(const int &range, int &min) {
        this -> range = range;
        int num = rand() % range + min;
    };
    Dado(int size) {
        int max = size, min = 1, range = max - min + 1;
        int num = rand() % range + min;
    };
    ~Dado();


    
    
    /*roll(){
        int max = size, min = 1, range = max - min + 1;
        int num = rand() % range + min;
    }*/









};

