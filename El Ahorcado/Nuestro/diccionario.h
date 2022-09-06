#include<iostream>
#include<vector>
using namespace std;
class diccionario
{
private:
    int nivel;
    vector<string> Nivel1;
    vector<string> Nivel2;
    vector<string> Nivel3;
    char nivel1[30];
    char nivel2[30];
    char nivel3[30];
public:
    void setnivel(int);
    void setnivel1 (char[]);
    void setnivel2 (char[]);
    void setnivel3 (char[]);
    int getnivel();
    char *getnivel1();
    char *getnivel2();
    char *getnivel3();
    diccionario(int,char,char,char);
    diccionario();
    void cargarpalabras();
    void mostrarpalabras();
};

