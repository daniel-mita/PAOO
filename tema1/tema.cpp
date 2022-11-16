#include<iostream>

using namespace std;

/* Base class */
class Uncopyable{
    protected:
        Uncopyable(){}
        ~Uncopyable(){}
    private:
        Uncopyable(const Uncopyable&);
        Uncopyable& operator=(const Uncopyable&);
};

/* Custom class Proiect which inherits the base class */
class Proiect:private Uncopyable{
    public:

       /* Default Constructor */
        Proiect(){}

        /* Custom Constructors */
        Proiect(const string&Nume, const int&durataZile):Nume(Nume), durataZile(durataZile){}
        // Proiect(const Proiect& proj):Nume(proj.Nume), durataZile(proj.durataZile){}
        
        /* Destructor */
        ~Proiect(){
            cout<<"Proiect a fost sters!\n";
        }

        /* Custom Copy Operator, Item 6 */
        // Proiect& operator=(const Proiect& proj){
        //     this->Nume=proj.Nume;
        //     this->durataZile=proj.durataZile;
        //     return *this;
        // }

        void afisareProiect(){
            cout<<"Nume: "<<this->Nume<<"\ndurataZile: "<<this->durataZile<<"\n";
        };
    private:
        string Nume;
        int durataZile;
};

int main(){
    Proiect proiect1("Aplicatie", 20);
    proiect1.afisareProiect();
    // Proiect proiect2(proiect1);
    // proiect2.afisareProiect();
    // Proiect proiect3("Finante", 35);
    // Proiect proiect4;
    // proiect4=proiect3;
    // proiect4.afisareProiect();
    return 0;
}