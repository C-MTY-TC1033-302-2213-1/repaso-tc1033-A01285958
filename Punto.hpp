#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>

class Punto{
    private:
        double x;
        double y;

    public: 
        //Metodos Constructores
        Punto();
        //Constructor con parametros
        Punto(double _x, double _y);

        //Metodos de acceso: Retornar el valor del atributo
        double getX();
        double getY();

        //Modificadores: Cambiar el valor del atributo
        void setX(double _x);
        void setY(double _y);

        //Otros metodos
        double calculaDistancia(Punto p2);
        std::string str( );

};
#endif /* Punto_hpp */