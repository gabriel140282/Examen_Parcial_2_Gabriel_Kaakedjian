cmake_minimum_required(VERSION 3.29)
project(Examen_Parcial_2_Gabriel_Kaakedjian)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ejercicio1)

add_executable(Examen_Parcial_2_Gabriel_Kaakedjian
    Ejercicio1/numero.cpp
    Ejercicio1/numero.h
        Ejercicio2/dia_semana.h
        Ejercicio2/dia_semana.cpp
        Ejercicio3/calificaciones.h
        Ejercicio3/calificaciones.cpp
        Ejercicio4/promocion.h
        Ejercicio4/promocion.cpp
        main.cpp)
