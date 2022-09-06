class paquetedeinf{
    private:
    long IPe;
    long IPr;
    int ID;
    float dato;

    public:
    paquetedeinf();
    paquetedeinf(long,long,int,float);
    void setIPe(long);
    void setIPr(long);
    void setID(int);
    void setdato(float);
    long getIPe();
    long getIPr();
    int getID();
    float getdato();
    bool iguales(paquetedeinf);
};