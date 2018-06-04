#ifndef BODEGA_H
#define BODEGA_H
#include "Ingrediente.h"
#include "Platos.h"
#include <vector>

using namespace std;
 
class Bodega{
    private:
        vector <Ingrediente*> ingredientes;
        vector <Platos*> menu;
        vector <Platos*> historial;
    public:
        Bodega();
        vector<Ingrediente*> getIngredientes();
        vector<Platos*> getMenu();
        vector<Platos*> getHistorial();

        void setIngredientes(vector<Ingrediente*>);
        void setMenu(vector<Platos*>);
        void setHistorial(vector<Platos*>);
};
#endif