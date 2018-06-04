#include <iostream>
#include <string>
#include "Bodega.h"
#include "Ingrediente.h"
#include "Platos.h"
#include <vector>

using std::vector;

using namespace std;

Bodega::Bodega(){

}

vector<Ingrediente*> Bodega::getIngredientes(){
    return ingredientes;
}

vector<Platos*> Bodega::getMenu(){
    return menu;
}

vector<Platos*> Bodega::getHistorial(){
    return historial;
}


void Bodega::setIngredientes(vector<Ingrediente*> v){
    this->ingredientes = v;
}
void Bodega::setMenu(vector<Platos*> v){
    this->menu = v;
}

void Bodega::setHistorial(vector<Platos*> v){
    this-> historial = v;
}