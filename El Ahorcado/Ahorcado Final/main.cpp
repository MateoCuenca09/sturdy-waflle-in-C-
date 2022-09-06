#include<iostream>
#include<cctype>
#include"juego.h"
#include"diccionario.h"
#include"jugador.h"
using namespace std;

int main()
{
    int a,b,e;
    char c;
    char n[30];
    do
    {
    diccionario a1; juego b1; jugador j1;
    a1.cargarpalabras();
    bool errorDeTipoIngresado;
    a=0;
    cout<<"BIENVENIDO AL AHORCADO!"<<endl;
    do
    {
        cout<<"Ingrese su nombre"<<endl;
        cin>>n;
        j1.setnombre(n);
        cout<<"Ingrese su edad"<<endl;
        cin>>e;
        j1.setedad(e);
        cout << "Seleccione su nivel:" << endl;
        cout << "1: Facil" << endl;
        cout << "2: Medio" << endl;
        cout << "3: Dificil" << endl;
        cin >> a;
        errorDeTipoIngresado = cin.fail();
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    } while (a<1 || a>3);

    b1.setpalabra(a,a1.getnivel1(), a1.getnivel2(), a1.getnivel3());
    cout<<"Ingrese la cantidad de intentos"<<endl;
    cin>>a;
    b1.setvidas(a);b1.setcont1();b1.setlen_palabra();
    while (b1.condiciones())
    {
        cout<<b1.getPalabraMostrar()<<endl;
        cout<<"Caracteres usados: ";
        cout<<b1.getletrasarriesgadas()<<endl;
        cout<<"VIDAS: "<<b1.getvidas()<<endl;
        cout<<"ARRIESGAR LETRA (1)"<<endl;
        cout<<"ARRIESGAR PALABRA (2)"<<endl;
        do
        {
            cin>>b;
        } while (b!=1 && b!=2);
        switch (b)
        {
            case 1:
                cout<<"INGRESE LETRA: "<<endl;
                cin>>c;
                c=toupper(c);
                b1.arriesgarletra(c);
                switch (b1.getopletrasarries())
                {
                case 3:
                    cout<<"LETRA YA INGRESADA"<<endl;
                break;
                case 2:
                    cout<<"BUENA JUGADA!"<<endl;
                break;
                case 1:
                    cout<<"NO HAY NINGUNA "<< c <<" EN LA PALABRA"<<endl;
                break;

                default:
                    cout<<"Se rompe arriesgarpalabra()"<<endl;
                break;
                }
            break;
            case 2:
                char p[30];
                cout<<"INGRESE PALABRA"<<endl;
                cin>>p;
                b1.arriesgarpalabra(p);
                if (b1.getterminar())
                {
                    cout<<"OOOPSS TE EQUIVOCASTE"<<endl;
                }
                if (b1.getpalabracompleta())
                {
                    cout<<"LA PALABRA ES CORRECTA"<<endl;
                }
            break;
        }
        cout<<endl<<endl<<endl;
    }

    if (b1.getterminar())
    {
        cout<<j1.getnombre()<<endl;
        cout<<"PERDISTE, TERMINO EL JUEGO"<<endl;
        cout<<"LA PALABRA CORRECTA ERA: "<<b1.getPalabra();
    }
    if (b1.getpalabracompleta())
    {
        cout<<j1.getnombre()<<endl;
        cout<<"FELICITACIONES GANASTE!"<<endl;
        cout<<"LA PALABRA CORRECTA ERA: "<<b1.getPalabra();
    }
    if (b1.getvidas()<1)
    {
        cout<<j1.getnombre()<<endl;
        cout<<"OOPS TE QUEDASTE SIN VIDAS, PERDISTE!"<<endl;
        cout<<"LA PALABRA CORRECTA ERA: "<<b1.getPalabra();
    }
    cout<<endl<<"Quieres juegar de nuevo?"<<endl<<"(0: No)"<<endl<<"(1: Si)"<<endl;
    cin>>a;
    } while (a);
    return 0;
}
