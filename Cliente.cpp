#include <iostream>
#include <string>
#include "Platos.h"
#include "Cliente.h"
#include <vector>

using std::vector;

using namespace std;

Cliente::Cliente(){

}

Cliente::Cliente(string nombre){
    this-> nombre = nombre;
}

vector<Platos*> Cliente::getPlatos(){
    return PlatosConsumidos;
}

int Cliente::getValoracion(){
    return valoracion;
}

string Cliente::getNombre(){
    return nombre;
}

int Cliente::getDineroGastado(){
    return dinerogastado;
}



void Cliente::setNombre(string n){
    this-> nombre = n;
}
void Cliente::setValoracion(int n){
    this->valoracion = n;
}
void Cliente::setDineroGastado(int n ){
    this-> dinerogastado =n;
}

