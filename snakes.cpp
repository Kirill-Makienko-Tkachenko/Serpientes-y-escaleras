/*
Kirill Makienko Tkachenko & Eric
18/05/23
Juego de serpientes y escaleras
*/


#include<iostream>
#include <unistd.h>
#include <conio.h> //Libreria usada para realizar acciones con el teclado

#include "jugador.h"
#include "tablero.h"
#include "dado.h"
#include "turno.h"
using namespace std;

/*
Por hacer:
- Hacer bien el sistema de letra incorrecta
- no se porque se rompe arriba de 30 -- Poner excepcion para casilla arriba de 30, porque el tablero es de 30 de longitud
- Reordenar un poco las opciones para que sea un poco mas facil de leer
*/

bool teclaPresionada(string tecla) {
    if (tecla == "C" || tecla == "c") {
        return true;
    }
    else if (tecla == "E" || tecla == "e") {
        return false;
    }
    else {
        //cout << "Invalid option, please press C to continue next turn or E to end game" << endl;
        return false; // Return false indicating an invalid key
    }
}


class MyGame{

public:
    void start(){
        int val_dado, posicion, posicion_n;
        Jugador J1("Jugador 1", 1, 1, 0), J2("Jugador 2", 2,1,0); //Definimos 2 jugadores
        Dado dado(6);
        Tablero T1;
        string option;
        bool value;


        cout << R"(_________ .__            __    __                                      .___  .____                .___  .___                   )" << endl;
        sleep(1);
        cout << R"(\_   ___ \|  |__  __ ___/  |__/  |_  ____   ______  _____    ____    __| _/  |    |   _____     __| _/__| _/___________  ______)" << endl;
        sleep(1);
        cout << R"(/    \  \/|  |  \|  |  \   __\   __\/ __ \ /  ___/  \__  \  /    \  / __ |   |    |   \__  \   / __ |/ __ |/ __ \_  __ \/  ___/)" << endl;
        sleep(1);
        cout << R"(\     \___|   Y  \  |  /|  |  |  | \  ___/ \___ \    / __ \|   |  \/ /_/ |   |    |___ / __ \_/ /_/ / /_/ \  ___/|  | \/\___ \ )" << endl;
        sleep(1);
        cout << R"( \______  /___|  /____/ |__|  |__|  \___  >____  >  (____  /___|  /\____ |   |_______ (____  /\____ \____ |\___  >__|  /____  >)" << endl;
        sleep(1);
        cout << R"(         \/     \/                       \/     \/        \/     \/      \/           \/    \/      \/    \/    \/           \/ )" << endl;
        cout << "Welcome to the game, please wait for the game to start.\n";
        sleep(5);


        for(int i = 1; i<30; i++){
            int turno = i;
            if (i%2 == 0){
                
                    cout << "Press C to continue next turn, or E to end the game:" << "\n";
                    cin >> option;
                    if (option == "E" || option == "e") {
                        cout << "Ok, exiting game" << endl;
                        return;
                    }   
                    value = teclaPresionada(option);

                    if (value){
                        posicion_n = 0;
                        cout << "Options for player 1: \n";
                        cout << "Turn " << "Player " << "Position " << "Dice Value " << "Target cell " << "Final position " << "\n";
                        val_dado = dado.roll();
                        posicion = J1.getPosicion() + val_dado;
                        if(T1.getCelda(posicion) == "S") { posicion_n = posicion - 3; }
                        else if(T1.getCelda(posicion) == "E") { posicion_n = posicion + 3; }
                        else {posicion_n = posicion;}
                        cout << turno << " " << J1.getJugador() << " " << J1.getPosicion() << " " << val_dado << " " << T1.getCelda(posicion) << " " << posicion_n << "\n";
                        J1.setPosicion(posicion_n);
                        turno++;
                    }
                    
                    else {
                        cout << "Invalid option, please press C to continue next turn or E to end the game" << "\n";
                        while (!value)
                        {
                            cout << "Press C to continue next turn, or E to end the game:" << "\n";
                            cin >> option;
                            if (option == "E" || option == "e") {
                            cout << "Ok, exiting game" << endl;
                            return;
                            }   
                            value = teclaPresionada(option);
                        }
                        
                    }
                
            }
            if (i%2 != 0){
                
                    cout << "Press C to continue next turn, or E to end the game:" << "\n";
                    cin >> option;
                    if (option == "E" || option == "e") {
                        cout << "Ok, exiting game" << endl;
                        return;
                    }   
                    value = teclaPresionada(option);

                    if (value){
                        posicion_n = 0;
                        cout << "Options for player 2: \n";
                        cout << "Turn " << "Player " << "Position " << "Dice Value " << "Target cell " << "Final position " << "\n";
                        val_dado = dado.roll();
                        posicion = J2.getPosicion() + val_dado;
                        if(T1.getCelda(posicion) == "S") { posicion_n = posicion - 3; }
                        else if(T1.getCelda(posicion) == "E") { posicion_n = posicion + 3; }
                        else {posicion_n = posicion;}
                        cout << turno << " " << J2.getJugador() << " " << J2.getPosicion() << " " << val_dado << " " << T1.getCelda(posicion) << " " << posicion_n << "\n";
                        J2.setPosicion(posicion_n);
                        turno++;
                    }
                    
                    else {
                        cout << "Invalid option, please press C to continue next turn or E to end the game" << "\n";
                        while (!value)
                        {
                            cout << "Press C to continue next turn, or E to end the game:" << "\n";
                            cin >> option;
                            if (option == "E" || option == "e") {
                            cout << "Ok, exiting game" << endl;
                            return;
                            }   
                            value = teclaPresionada(option);
                        }
                        
                    }
                
            }
        }
    }   
};



int main(){

    MyGame g;

    g.start();


    return 0;
}