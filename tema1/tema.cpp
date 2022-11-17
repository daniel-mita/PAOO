#include <iostream>

using namespace std;

/* Base class */
class Uncopyable
{
protected:
    Uncopyable() {}
    ~Uncopyable() {}

private:
    Uncopyable(const Uncopyable &); // prevent copying
    Uncopyable &operator=(const Uncopyable &);
};

/* Custom class Proiect which inherits the base class */
class Proiect : private Uncopyable
{
public:
    /* Default Constructor (generated)*/
    Proiect() : Nume("abc"), durataZile(0) {}

    /* Custom Copy Constructor*/
    Proiect(const Proiect &)
    {
    }

    /* Assign operator. (generated)*/
    Proiect &operator=(const Proiect &proj)
    {
        if (this != &proj)
        {
            this->Nume = proj.Nume;
            this->durataZile = proj.durataZile;
        }
        return *this;
    }

    /* Custom Constructors */
    Proiect(const string &Nume, const int &durataZile) : Nume(Nume), durataZile(durataZile) {}

    /* Destructor (generated)*/
    ~Proiect()
    {
        cout << "Obiectul proiect a fost sters!\n";
    }

    void afisareProiect()
    {
        cout << "Nume: " << this->Nume << "\ndurataZile: " << this->durataZile << "\n";
    };

private:
    string Nume;
    int durataZile;
};

int main()
{
    Proiect proiect1("Aplicatie", 20);
    proiect1.afisareProiect();
    Proiect proiect2(proiect1);
    proiect2.afisareProiect();
    Proiect proiect3;
    proiect3.afisareProiect();
    return 0;
}