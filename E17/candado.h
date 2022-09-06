class candado{
    private:
    int correcto[2];
    int actual[2];

    public:
    candado();
    candado(int,int,int);
    void setca(int);
    void setcb(int);
    void setcc(int);
    void seta(int);
    void setb(int);
    void setc(int);
    int geta();
    int getb();
    int getc();
    void alterar(int,int,int);
    bool puedeAbrir();
};