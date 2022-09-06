#include<iostream>
#include<vector>
#include<string.h>
#include<fstream>
#include<sstream>
#include<ctime>
#include<time.h>
#include<stdlib.h>
#include"diccionario.h"
using namespace std;

diccionario::diccionario(int a, char b,char c, char d)
{
    a=0;
}

diccionario::diccionario()
{}

void diccionario::setnivel(int a)
{
    nivel=a;
}
void diccionario::setnivel1 (char b[])
{
    strcpy(nivel1,b);
}
void diccionario::setnivel2 (char b[])
{
    strcpy(nivel2,b);
}
void diccionario::setnivel3 (char b[])
{
    strcpy(nivel3,b);
}
int diccionario::getnivel()
{
    return nivel;
}
char *diccionario::getnivel1(void)
{
    return &nivel1[0];
}
char *diccionario::getnivel2(void)
{
    return &nivel2[0];
}
char *diccionario::getnivel3(void)
{
    return &nivel3[0];
}

void diccionario::mostrarpalabras()
{
    cout<<nivel1<<endl<<nivel2<<endl<<nivel3<<endl;
}

void diccionario::cargarpalabras()
{
    vector<string> palabrasNivel1, palabrasNivel2, palabrasNivel3;
    string palabra;
    ifstream archivo;
    archivo.open("C:/Users/Mateo/Desktop/UCC/Programacion II/El Ahorcado/Nuestro/palabras.txt");
    if (!archivo.is_open())
    {
        cout<<"Error en la carga de palabras!"<<endl;
        cout<<"PORFAVOR REINICIE EL PROGRAMA"<<endl;
    }
    while (getline(archivo, palabra))
    {
        if (palabra.length()<=7)
            {palabrasNivel1.push_back(palabra);}
        else
        {
            if (palabra.length()<=11)
            {
                palabrasNivel2.push_back(palabra);
            }
            else
            {
                palabrasNivel3.push_back(palabra);
            }
        }
    }
    archivo.close();
    srand(time(NULL));
    int i1 = rand() % palabrasNivel1.size();
    int i2 = rand() % palabrasNivel2.size();
    int i3 = rand() % palabrasNivel3.size();
    istringstream(palabrasNivel1[i1])>>nivel1;
    istringstream(palabrasNivel2[i2])>>nivel2;
    istringstream(palabrasNivel3[i3])>>nivel3;
}
