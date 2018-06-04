#ifndef CLIENTE_H
#define CLIENTE_H
#include "Platos.h"
#include <vector>
#include <string>

using namespace std;
 
class Cliente{
    private:
        string nombre;
        //Platos p = new Platos();
        vector <Platos*> PlatosConsumidos;
        int valoracion;
        int dinerogastado;
    public:
        Cliente();
        Cliente(string);
        string getNombre();
        int getValoracion();
        int getDineroGastado();
        vector<Platos*> getPlatos();

        void setNombre(string);
        void setValoracion(int);
        void setDineroGastado(int);

};
#endif