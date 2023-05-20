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
    int num;
public:
    //contructor
    Dado(const int &_size) : size(_size), max(_size), min(1), range(max - min + 1) {}
    
    ~Dado() {};


    
    
    int roll() {
        num = rand() % range + min;
        return num;
    }

};

