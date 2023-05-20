/*
Kirill Makienko Tkachenko & Eric
18/05/23
Juego de serpientes y escaleras
*/


#include<iostream>
#include<vector>

#include<string>
#include<random> //Se usa para poder tener un tablero random cada juego
#include <cstdlib>

using namespace std;

class Tablero{
private:

    vector<string> tablero;

public:
    
    //  No es la mejor manera de crear un tablero ya que la probabilidad de que las "S" y las "E"
    //  se encuentren al principio del tablero en vez de estar distribuidos de manera equitativa, 
    //  pero para este juego no importa mucho

    //Otra manera que se pudiera hacer esto
    Tablero(){ //Creamos tablero randomizado, tambien sirve como constructor por defecto
        int S = 0;
        int E = 0;
        for (int i = 0; i < 29; i++){
            int v1 = rand() % 100;
            //cout << v1 << endl;
            if(v1 > 0 && v1 < 20 && S <3){ //Dependiendo de una probabilidad del 30% agrega una S al tablero, hasta una cantidad de 3
                tablero.push_back("S");
                S++;
            }
            else if(v1 > 21 && v1 < 40 && E <3){ //Misma situacion que la S, pero con E
                tablero.push_back("E");
                E++;
            }
            else{   //si no cae ninguno de los ultimos 2, va a agregar una casilla "Normal"
                tablero.push_back("N");
            }
        }
    }

~Tablero() {}
//Definir getter

const vector<string> &getTablero() { return tablero; }
const string& getCelda(int pos) { return tablero[pos]; }

//No hay setter porque no hay valores que podamos definir

void imprimeTablero(){
    for (auto it:tablero){
        cout << it << endl;
    }
}

};