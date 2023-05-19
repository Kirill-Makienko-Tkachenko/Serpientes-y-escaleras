/*
Kirill Makienko Tkachenko & Eric
18/05/23
Juego de serpientes y escaleras
*/

#include <string>
#include <iostream>


#pragma once 
using namespace std;

class Jugador{

    string nombre = "Jugador";
    int nJugador = 0, posicionTablero = 0, score = 0;
public:

//Constructores:

//Constructor Inline
Jugador(const string &nom, 
        const int &nJug,
        const int &pos, const int &score) : nombre(nom), posicionTablero(pos), 
                                                        nJugador(nJug), score(score) {} //Constructor que acepta parametros del main para construir jugador

~Jugador() {} //Destructor por omision


Jugador(){ //Constructor generico, agarra valores por default de los valores definidos en privado
    nombre = getNombre();
    this -> nJugador = nJugador;
    this -> posicionTablero = posicionTablero;
    this -> score = score;
}//Resultado esperado: nombre = Jugador, ignora todo lo demas xd

//Definicion de Getters

const string &getNombre() { return nombre; }
const int &getJugador() { return nJugador; }
const int &getPosicion() { return posicionTablero; }
const int &getScore() { return score; }

//Definicion de Setters

void setNombre(const string &nom) { nombre = nom; }
void setNumero(const int &nJug) { nJugador = nJug; }
void setPosicion(const int &pos) { posicionTablero = pos; }
void setScore(const int &score) { this -> score = score; }

//Metodo imprimir jugador

void imprimeJugador(){
    cout << nombre << " " << nJugador << " " << posicionTablero << " " << score << "\n";
}

};