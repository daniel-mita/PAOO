#include <iostream>
#include <string>
#include <memory>

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

/* Custom class Car which inherits the base class */
class Proiect 
{
    public:
        /* Default Constructor */
        Proiect() : theName("inexisting_car"), theColor("inexisting_color"), numberOfSeats(0), isCarLocked(false) {}

        /* Custom Constructor */
        Proiect(const std::string& name, const std::string& color, const int seats);

        /* Custom Copy Constructor, commented due to Item 6 */
        Proiect(const Proiect& givenCar) :theName(givenCar.theName), theColor(givenCar.theColor), numberOfSeats(givenCar.numberOfSeats), isCarLocked(givenCar.isCarLocked)
        {}

        /* Custom assignment operator */
        Proiect& operator=(const Proiect& rhs)
        {
            if(this == &rhs)
            {
                std::cout<<"Objects are identical!\n";
                return *this;
            }
            this->theColor = rhs.theColor;
            this->theName = rhs.theName;
            this->numberOfSeats = rhs.numberOfSeats;
            this->isCarLocked = rhs.isCarLocked;
            return *this;
        }

        /* Custom Destructor */
        ~Proiect()
        {
            std::cout<<"Object has been completely removed from memory!\n";
        }

        void printCar()
        {
            std::cout<<"Car: " << this->theName << "\nColor: " << this->theColor << "\n" << this->numberOfSeats << " seats\n";
        }


    private:
        std::string theName;
        std::string theColor;
        int numberOfSeats;
        bool isCarLocked;
};

/* Constructor */
Proiect::Proiect(const std::string& name, const std::string& color, const int seats) :theName(name), theColor(color), numberOfSeats(seats), isCarLocked(false)
{}

Proiect* createCustomProiectObject(const std::string& name, const std::string& color, const int seats)
{
    return new Proiect(name, color, seats);
}

void printNewCustomProiect(const std::string& name, const std::string& color, const int seats)
{
    std::auto_ptr<Proiect> pProj(createCustomProiectObject(name, color, seats));
    pProj -> printCar();
}

int main()
{
    //item 13 with "auto_ptr"
    printNewCustomCar("Custom Ford GT 2017", "Blue", 2);
    std::cout<<"\n";

    std::auto_ptr<Proiect> pProj1(new Proiect);
    pProj1 -> printCar();
    std::cout<<"\n";

    std::auto_ptr<Proiect> pProj2(pProj1);    // now, pProj1 becomes null because pProj2 points to the empty car
    pProj2 -> printCar();
    std::cout<<"\n";
    
    pProj1 = pProj2;                      // now, pProj2 becomes null because pProj1 points to the empty car again
    pProj1 -> printCar();
    std::cout<<"\n";

    return 0;
}