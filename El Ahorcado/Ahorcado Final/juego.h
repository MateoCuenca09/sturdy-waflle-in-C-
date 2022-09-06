using namespace std;
class juego
{
private:
    char palabra_original[30];
    char palabra_mostrar[30];
    char letrasarriesgadas[30];
    char letra;
    int len_palabra;
    int vidas;
    int cont=0;
    int cont1;
    int opletraarries;
    bool palabracompleta=false;
    bool terminar=false;
public:
    juego();
    juego(char,char,int,int,bool);
    char *getPalabra();
    char *getPalabraMostrar();
    char *getletrasarriesgadas();
    int getvidas();
    int getcont();
    int getcont1();
    int getopletrasarries();
    void setletra(char);
    void setcont1();
    void setpalabra(int,char[],char[],char[]);
    void setlen_palabra();
    void setvidas(int);
    void controlarjuego(int);
    void arriesgarletra(char);
    void arriesgarpalabra(char[]);
    bool condiciones();
    bool getterminar();
    bool getpalabracompleta();
    bool getletraarriesgada();

};
