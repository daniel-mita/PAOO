#include <iostream>
#include <string>
#include <memory>

class Proiect 
{
    public:
        /* Default Constructor */
        Proiect() : Nume("abc"), durataZile(0) {}

        /* Custom Constructor */
        Proiect(const std::string& nume, const int durata);

        Proiect(const Proiect& givenProj) :Nume(givenProj.Nume), durataZile(givenProj.durataZile)
        {}

        /* Custom assignment operator */
        Proiect& operator=(const Proiect& proj)
        {
            if(this == &proj)
            {
                std::cout<<"Objects are identical!\n";
                return *this;
            }
            this->Nume = proj.Nume;
            this->durataZile = proj.durataZile;
            return *this;
        }

        /* Custom Destructor */
        ~Proiect()
        {
            std::cout<<"Object has been completely removed from memory!\n";
        }

        void printProj()
        {
            std::cout<<"Proiect: " << this->Nume << "\n" << this->durataZile << " zile\n";
        }


    private:
        std::string Nume;
        int durataZile;
};

/* Constructor */
Proiect::Proiect(const std::string& nume, const int durata) :Nume(nume), durataZile(durata)
{}

Proiect* createProjObject(const std::string& nume, const int durata)
{
    return new Proiect(nume, durata);
}

void printNewProj(const std::string& nume, const int durata)
{
    std::auto_ptr<Proiect> pProj(createProjObject(nume, durata));
    pProj -> printProj();
}

int main()
{
    //item 13
    printNewProj("Proiect", 5);
    std::cout<<"\n";

    std::auto_ptr<Proiect> pProj1(new Proiect);
    pProj1 -> printProj();
    std::cout<<"\n";

    std::auto_ptr<Proiect> pProj2(pProj1);    // pProj1 becomes null 
    pProj2 -> printProj();
    std::cout<<"\n";
    
    pProj1 = pProj2;                      // pProj2 becomes null 
    pProj1 -> printProj();
    std::cout<<"\n";

    return 0;
}