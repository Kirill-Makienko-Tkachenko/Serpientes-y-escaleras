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

    int n_turno;

public:

    //Construtor por defecto
    Turno() = default;

    Turno(const string &jug, const int &nJug,
            const int &n_turno, 
            const int &pos) : Jugador(jug, nJug, ,pos , n_turno) {} //Creo que esto esta mal

    







};