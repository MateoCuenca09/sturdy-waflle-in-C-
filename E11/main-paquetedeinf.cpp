#include<iostream>
#include "paquetedeinf.cpp" //Uso el .cpp porque no cree un proyecto
using namespace std;
int main()
{
    paquetedeinf a(1,1,1,1), b(1,1,1,1);
    if (a.iguales(b)) cout<<"Se comprueba que los paquetes de informacion son iguales"<<endl;
    else cout<<"Los paquetes de informacion son distintos"<<endl;
    int aaa;cin>>aaa;
}