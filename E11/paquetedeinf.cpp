#include"paquetedeinf.h"
paquetedeinf::paquetedeinf(){
    IPe=0;IPr=0;ID=0;dato=0;
}

paquetedeinf::paquetedeinf(long a,long b,int c,float d){
    IPe=a;IPr=b;ID=c;dato=d;
}

void paquetedeinf::setIPe (long a){
    IPe=a;
}

void paquetedeinf::setIPr(long a){
IPr=a;
}

void paquetedeinf::setID(int a){
ID=a;
}

void paquetedeinf::setdato(float a){
    dato=a;
}
    
long paquetedeinf::getIPe(){
    return IPe;
}

long paquetedeinf::getIPr(){
    return IPr;
}

int paquetedeinf::getID(){
 return ID;
}

float paquetedeinf::getdato(){
    return dato;
}
bool paquetedeinf::iguales(paquetedeinf b){
    if (IPe==b.IPe && IPr==b.IPr && ID==b.ID)
    {
        return true;
    }
    else return false;

}