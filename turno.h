/*
Kirill Makienko Tkachenko & Eric
18/05/23
Juego de serpientes y escaleras
*/


#include <string>
#include <iostream>
#include"jugador.h"

#pragma once 
using namespace std;

class Turno: public Jugador {

    int n_turno = 1;

public:

    //Construtor por defecto
    Turno() = default;

    Turno(const string &jug, const int &nJug,
            const int &sc, 
            const int &pos){

            Jugador(jug, nJug, pos, sc);
            
            
                } //Creo que esto esta mal

    







};