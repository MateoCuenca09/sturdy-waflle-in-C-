using namespace std;
class jugador
{
private:
    char nombre[30];
    int edad;
public:
    jugador();
    void setnombre(char[]);
    void setedad(int);
    char *getnombre();
    int getedad();
};
