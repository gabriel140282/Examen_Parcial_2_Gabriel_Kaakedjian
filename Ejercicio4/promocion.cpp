/* En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres
artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario
ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo
esta promoción. */

#include "promocion.h"
#include <iostream>

using namespace std;

// En este ejercicio evaluo las distintas posibilidades

void promocion() {
    float precio1,precio2,precio3,promocion;

    cout<<"Ingrese el primer precio: "<<endl; cin>>precio1;
    cout<<"Ingrese el segundo precio: "<<endl; cin>>precio2;
    cout<<"Ingrese el tercer precio: "<<endl; cin>>precio3;

    if (precio1>precio2 && precio2>precio3) {
        promocion = precio1 + precio2;
        cout<<"El precio con la promocion es: "<<promocion<<endl;
    }
    else if(precio2>precio1 && precio3>precio2) {
        promocion = precio2 + precio3;
        cout<<"El precio con la promocion es: "<<promocion<<endl;
    }
    else if(precio1>precio3) {
        promocion = precio1;
        cout<<"El precio con la promocion es: "<<promocion<<endl;
    }
    else { //En caso de que ambos precios sean iguales...
        promocion = precio1+precio2+precio3;
        cout<<"El precio con la promocion es: "<<promocion<<endl;
    }
}

    //También se podría escribir de la siguiente forma:

    /*
    else if(precio1==precio2==precio3){
        cout<<"El precio con la promocion es: "<<promocion<<endl;
}

*/
