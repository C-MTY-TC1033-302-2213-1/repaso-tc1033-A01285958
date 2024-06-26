#include "Punto.hpp"

//Metodos Constructores
Punto::Punto(){
    x = 0;
    y = 0;
}
//Constructor con parametros
Punto::Punto(double _x, double _y){
    x = _x;
    y = _y;
}

//Metodos de acceso: Retornar el valor del atributo
double Punto::getX(){
    return x;
}

double Punto::getY(){
    return y;
}

//Modificadores: Cambiar el valor del atributo
void Punto::setX(double _x){
    x = _x;
}

void Punto::setY(double _y){
    y = _y;
}

//Otros metodos
double Punto::calculaDistancia(Punto p2){
    return sqrt( (p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y) );
}

std::string Punto::str( ){
    return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
}