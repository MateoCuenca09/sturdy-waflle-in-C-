#include<iostream>
#include<string.h>
#include"jugador.h"
using namespace std;

jugador::jugador()
{

}
void jugador::setnombre(char a[])
{
    strcpy(nombre,a);       
}

void jugador::setedad(int a)
{
    edad=a;
}
    
char* jugador::getnombre()
{
    return &nombre[0];
}
    
int jugador::getedad()
{
    return edad;
}