#ifndef PLATOS_H
#define PLATOS_H
#include "Ingrediente.h"

#include <vector>
#include <string>

using namespace std;
 
class Platos{
    private:
        vector <Ingrediente*> ingredientes;
        string resena;
        int cantidadSabor;
        int vecesCocinado;
        int precio;
        double valoracion;
    public:
        Platos();
        Platos(string,int);
        string getresena();
        int getcantidadSabor();
        int getvecesCocinado();
        int getprecio();
        double getvaloracion();
        vector<Ingrediente*> getIngredientes();
        
        void setresena(string);
        void setcantidadSabor(int);
        void setvecesCocinado(int);
        void setprecio(int);
        void setvaloracion(double);

};
#endif