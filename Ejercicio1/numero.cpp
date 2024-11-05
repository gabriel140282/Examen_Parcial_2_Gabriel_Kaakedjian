/* Escribe un programa en C++ que solicite al usuario ingresar un número entero.
El programa deberá analizar el número ingresado e imprimir en pantalla si el número
es "positivo", "negativo" o "cero". */

#include "numero.h"
#include <iostream>

using namespace std; //Simplifico el codigo para no estar escribiendo std::

void numero_entero() {
    int numero;
    cout<<"Ingrese un numero entero: "; cin>>numero; //Pedimos un numero por pantalla al usuario

    if (numero > 0) { //Comprueba las distintas posibilidades
        cout<<"El numero es positivo";
    } else if (numero == 0) {
        cout<<"El numero es cero";
    } else {
        cout<<"El numero es negativo";
    }
}