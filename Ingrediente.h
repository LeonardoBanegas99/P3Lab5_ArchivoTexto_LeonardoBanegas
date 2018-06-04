#ifndef INGREDIENTE_H
#define INGREDIENTE_H
#include <vector>
#include <string>

using namespace std;
 
class Ingrediente{
    private:
        string nombre;
        string tipo;
        int aporte;
        int duracion;
        int cantidad;
    public:
        Ingrediente();
        Ingrediente(string,string,int,int,int);
        string getNombre();
        string getTipo();
        int getAporte();
        int getDuracion();
        int getCantidad();

        
        void setNombre(string n );
        void setTipo(string n);
        void setAporte(int n);
        void setDuracion(int n);
        void setCantidad(int n);

};
#endif