#include"candado.h"
candado::candado(){
    actual[0]=0;
    actual[1]=0;
    actual[2]=0;
    correcto[0]=0;
    correcto[1]=0;
    correcto[2]=0;
}
candado::candado(int aa,int bb,int cc){
    actual[0]=aa;actual[1]=bb;actual[2]=cc;
    correcto[0]=aa;
    correcto[1]=bb;
    correcto[2]=cc;
}


void candado::setca(int aa){
    correcto[0]=aa;
}

void candado::setcb(int aa){
    correcto[1]=aa;
}

void candado::setcc(int aa){
    correcto[2]=aa;
}
    
void candado::seta(int aa){
actual[0]=aa;
}

void candado::setb(int bb){
    actual[1]=bb;
}
    
void candado::setc(int cc){
    actual[2]=cc;
}

int candado::geta(){
    return actual[0];
}

int candado::getb(){
    return actual[1];
}

int candado::getc(){
    return actual[2];
}

bool candado::puedeAbrir(){
    if (correcto[0]==actual[0] && correcto[1]==actual[1] && correcto[2]==actual[2])
    {
        return true;
    }
    else return false;
}

void candado::alterar(int a,int b,int c){
actual[0]=a;actual[1]=b;actual[2]=c;
}