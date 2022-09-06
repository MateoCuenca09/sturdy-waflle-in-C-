#include<iostream>
#include<stdlib.h>
#include"candado.cpp"
using namespace std;
int main(){
    int a,b,c;
    do
    {
    cout<<"Ingrese la combinacion a su nuevo candado"<<endl;
    cout<<"1: "<<endl;
    cin>>a;
    } while (a<0||a>9);

    do
    {cout<<"2: "<<endl;
    cin>>b;
    } while ( b<0||b>9);

    do
    {cout<<"3: "<<endl;
    cin>>c;
    } while ( c<0||c>9);

    candado c1(a,b,c);
    cout<<"Como buen candado ahora nosotros cambiamos la combinacion actual asi nadie puede abrirlo"<<endl;
    c1.alterar((rand()%9)+1,(rand()%9)+1,(rand()%9)+1);

    cout<<"Ingrese la combinacion"<<endl;
    do
    {cout<<"1: "<<endl;
    cin>>a;
    } while ( a<0||a>9);
    do
    {cout<<"2: "<<endl;
    cin>>b;
    } while ( b<0||b>9);
    do
    {cout<<"3: "<<endl;
    cin>>c;
    } while ( c<0||c>9);
    c1.alterar(a,b,c);
    if (c1.puedeAbrir())
    {
        cout<<"Se abrio el candado";
    }
    else cout<<"Contrasenia incorrecta";
    cin>>a;

    



 
}