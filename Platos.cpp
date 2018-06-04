#include <iostream>
#include <string>
#include "Ingrediente.h"
#include "Platos.h"
#include <vector>

using std::vector;

using namespace std;

Platos::Platos(){

}

Platos::Platos(string resena,int precio){
    this-> resena = resena;
    this-> cantidadSabor = 0;
    this-> precio = precio;
    this->vecesCocinado = 0;
    this->valoracion = 0.0;
}

vector<Ingrediente*> Platos::getIngredientes(){
    return ingredientes;
}

string Platos::getresena(){
    return resena;
}

int Platos::getcantidadSabor(){
    return cantidadSabor;
}

int Platos::getvecesCocinado(){
    return vecesCocinado;
}

int Platos::getprecio(){
    return precio;
}

double Platos::getvaloracion(){
    return valoracion;
}

void Platos::setresena(string resena){
    this-> resena = resena;
}
void Platos::setcantidadSabor(int n){
    this->cantidadSabor = n;
}
void Platos::setvecesCocinado(int n ){
    this-> vecesCocinado =n;
}
void Platos::setprecio(int n ){
    this-> precio = n;
}
void Platos::setvaloracion(double n ){
    this->valoracion = n;
}


