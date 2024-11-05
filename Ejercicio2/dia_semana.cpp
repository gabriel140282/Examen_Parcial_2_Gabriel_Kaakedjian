/* Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7.
El programa deberá imprimir el nombre del día de la semana correspondiente
al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo).
*/

#include "dia_semana.h"
#include <iostream>

using namespace std;

void dia_semana() {
    int numero_semana;
    cout<<"Ingrese un numero del 1 al 7: "; cin>>numero_semana;

    switch (numero_semana) { /* Para este tipo de ejercicio lo mejor es usar un bucle
                                de tipo switch, para que evalue el numero que el usuario
                                ha introducido y mostrar por pantalla el numero
                                correspondiente */
        case 1:
            cout<<"Lunes";
        break;
        case 2:
            cout<<"Martes";
        break;
        case 3:
            cout<<"Miercoles";
        break;
        case 4:
            cout<<"Jueves";
        break;
        case 5:
            cout<<"Viernes";
        break;
        case 6:
            cout<<"Sabado";
        break;
        case 7:
            cout<<"Domingo";
        break;
        default:
            cout<<"Ingrese un numero valido";
    }
}
