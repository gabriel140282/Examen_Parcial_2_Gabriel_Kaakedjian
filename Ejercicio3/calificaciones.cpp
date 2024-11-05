/* Un estudiante ha completado un curso de programación avanzada en C++.
Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una
nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones
obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar
el promedio de las calificaciones.
*/

#include "calificaciones.h"
#include <iostream>

using namespace std;

void calificaciones_estudiante() {
    float nota1,nota2,nota3,nota4,nota5,nota6,nota7,nota8,media,media_final;

    cout<<"Dime tu primera nota: "<<endl; cin>>nota1;
    cout<<"Dime tu segunda nota: "<<endl; cin>>nota2;
    cout<<"Dime tu tercera nota:"<<endl; cin>>nota3;
    cout<<"Dime tu cuarta nota: "<<endl; cin>>nota4;
    cout<<"Dime tu quinta nota: "<<endl; cin>>nota5;
    cout<<"Dime tu sexta nota: "<<endl;  cin>>nota6;
    cout<<"Dime tu septima nota: "<<endl; cin>>nota7;
    cout<<"Dime tu octava nota: "<<endl; cin>>nota8;

    media = nota1+nota2+nota3+nota4+nota5+nota6+nota7+nota8;
    media_final = media/8;

    cout<<"El promedio de las notas es: "<<media_final;
}

/*

void calificaciones_estudiante2() {
    /* int array[8]={};
    int promedio;
    int calificacion;

    for(int i=1;i<=8;i++) {
        cout << "Ingrese la calificacion "<<i<<": ";
        cin>>array[i];
    }
    cout<<array[1]<<endl;
}


void calificaiones_estudiante3() {
    float nota;

    cout<<"Dime tu primera nota: "<<endl; cin>>nota1;
    cout<<"Dime tu segunda nota: "<<endl; cin>>nota2;
    cout<<"Dime tu tercera nota:"<<endl; cin>>nota3;
    cout<<"Dime tu cuarta nota: "<<endl; cin>>nota4;
    cout<<"Dime tu quinta nota: "<<endl; cin>>nota5;
    cout<<"Dime tu sexta nota: "<<endl;  cin>>nota6;
    cout<<"Dime tu septima nota: "<<endl; cin>>nota7;
    cout<<"Dime tu octava nota: "<<endl; cin>>nota8;

    media = nota1+nota2+nota3+nota4+nota5+nota6+nota7+nota8;
    media_final = media/8;

    cout<<"El promedio de las notas es: "<<media_final;

    for(int i=1;i<=8;i++) {
        cout<<"Ingrese la "<<i<<" calificacion"; cin>>nota[i];
    }
}
*/

/* Lo ideal en este ejercicio sería hacerlo con un bucle for, pero he tenido problemas a la hora de querer
añadir los valores al array. Dejo comentado las 3 posibilidades trabajadas en el ejercicio */