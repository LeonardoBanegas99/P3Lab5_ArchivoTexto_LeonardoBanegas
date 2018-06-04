#include <iostream>
#include <string>
#include "Ingrediente.h"
#include <vector>

using std::vector;

using namespace std;

Ingrediente::Ingrediente(){

}

Ingrediente::Ingrediente(string nombre,string tipo, int aporte,int duracion,int cantidad){
    this-> nombre = nombre;
    this-> tipo = tipo;
    this-> aporte = aporte;
    this-> duracion = duracion;
    this-> cantidad = cantidad;
}


string Ingrediente::getNombre(){
    return nombre;
}

string Ingrediente::getTipo(){
    return tipo;
}

int Ingrediente::getAporte(){
    return aporte;
}

int Ingrediente::getDuracion(){
    return duracion;
}

int Ingrediente::getCantidad(){
    return cantidad;
}



void Ingrediente::setNombre(string n){
    this-> nombre = n;
}
void Ingrediente::setTipo(string n){
    this->tipo = n;
}
void Ingrediente::setAporte(int n ){
    this-> aporte =n;
}
void Ingrediente::setDuracion(int n){
    this->duracion = n;
}
void Ingrediente::setCantidad(int n ){
    this-> cantidad =n;
}

