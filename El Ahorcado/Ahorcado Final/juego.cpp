#include"juego.h"
#include<iostream>
#include<cstring>
#include<cctype>
#include<ctype.h>
#include<stdio.h>
using namespace std;

juego::juego(char a,char b,int c,int d,bool e)
{
    palabra_original[30]=a;
    palabra_mostrar[30]=b;
    len_palabra= c;
    vidas=d;
    palabracompleta=e;
}
juego::juego()
{
    palabra_original[30]=0;
    palabra_mostrar[30]=0;
    len_palabra= 0;
    vidas=0;
    palabracompleta=0;

}
void juego::setcont1()
{
    cont1=0;
}
void juego::setvidas(int a)
{
    vidas=a;
}
void juego::setpalabra(int aa,char a[],char b[], char c[])
{
    switch (aa)
    {
    case 1:
    strcpy(palabra_original,a);       
        break;
    case 2:
    strcpy(palabra_original,b);
    break;
    case 3:
    strcpy(palabra_original,c);
    break;
    default:
    cout<<"Error al definir palabra"<<endl;
        break;
    }
    
    int bb=strlen(palabra_original);  //Llevamos la palabra del diccionario a mayusculas
    for (int i = 0; i < bb; i++)
    {
       palabra_original[i]=toupper(palabra_original[i]);
    }
}    
void juego::setlen_palabra()
{
    len_palabra=strlen(palabra_original);
    for (int i = 0; i < len_palabra; i++)
    {
        palabra_mostrar[i]='*';
    }
    palabra_mostrar[len_palabra]='\0';
}
char* juego::getPalabra()
{
    return &palabra_original[0];
}

char* juego::getPalabraMostrar()
{
    return &palabra_mostrar[0];
}

char* juego::getletrasarriesgadas()
{
    return &letrasarriesgadas[0];
}

void juego::arriesgarletra(char letra)
{
    cont=0;
    letra=toupper(letra);
    bool repe=false;
    for (int i = 0; i < cont1; i++)
    {
        if (letra==letrasarriesgadas[i])
        {
            opletraarries=3; 
            repe=true;
        }
    }
    if (repe==false)
    {
        for (int i = 0; i < strlen(palabra_original); i++)
        {
            if (palabra_original[i]==letra)
            {
                palabra_mostrar[i]=letra;
                cont++;
                opletraarries=2; 
            }
        }
        if (cont<1)
        {
            opletraarries=1;
            vidas--;
        }
        else
        {
            if (!strcmp(palabra_mostrar,palabra_original))
            {
                palabracompleta=true;
            }
        }
        letrasarriesgadas[cont1]=letra;
        cont1++;
        letrasarriesgadas[cont1]=' ';
        letrasarriesgadas[cont1+1]='\0';       
        cont1++;
    }
}

void juego::arriesgarpalabra(char a[])
{
    
    int b=strlen(a);
    for (int i = 0; i < b; i++)
    {
       a[i]=toupper(a[i]);
    }
    if (!strcmp(a,palabra_original))
    {
        palabracompleta=true;
    }
    else
    {
        terminar=true;

    }
}

bool juego::condiciones()
{
    if ((vidas>0) && (!palabracompleta) && (!terminar))
    {
        return true;
    }
    else return false;
    
}

int juego::getvidas()
{
    return vidas;
}

bool juego::getterminar()
{
    return terminar;
}

bool juego::getpalabracompleta()
{
    return palabracompleta;
}

int juego::getcont1()
{
    return cont1;
}


void juego::setletra(char a)
{
    letra=a;
}

int juego::getopletrasarries()
{
    return opletraarries;
}