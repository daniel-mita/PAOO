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

class Proiect
{
public:
  /* Default Constructor (generated)*/
  Proiect() : Nume("abc"), durataZile(0) {}

  Proiect(const string &Nume, const int durataZile);

  Proiect(const Proiect &proiect) : durataZile(new int(*proiect.durataZile)),
                                    Nume(Nume) {}

  Proiect &operator=(const Proiect &proj)
  {

    int *originalCopy = durataZile;
    durataZile = new int(*proj.durataZile);
    delete originalCopy;

    if (this != &proj)
    {
      this->Nume = proj.Nume;
      this->durataZile = proj.durataZile;
    }
    return *this;
  }

  ~Proiect()
  {
    cout << "Obiectul proiect a fost sters!\n";
  }

  void afisareProiect()
  {
    cout << "Nume: " << Nume << "\ndurataZile: " << *durataZile << "\n";
  };

private:
  string Nume;
  int *durataZile;
};

Proiect::Proiect(const string &Nume, const int durataZile) : Nume(Nume), durataZile(new int(durataZile)) {}

class ProiectFacultate : public Proiect
{
public:
  ProiectFacultate() : Proiect(), studenti(0) {}

  ProiectFacultate(const string &Nume, const int durataZile, const int studenti) : Proiect(Nume, durataZile), studenti(studenti) {}

  ProiectFacultate(const ProiectFacultate &proiect) : Proiect(proiect), studenti(proiect.studenti) {}

  ProiectFacultate &operator=(const ProiectFacultate &proj)
  {
    if (this == &proj)
    {
      cout << "Proiectul nu exista in memorie.\n";
      return *this;
    }

    Proiect::operator=(proj);
    studenti = proj.studenti;
    return *this;
  }

  int getNumberOfStudents()
  {
    return this->studenti;
  }

private:
  int studenti;
};

int main()
{
  Proiect proiect1("Aplicatie", 20);
  proiect1.afisareProiect();

  ProiectFacultate facultate("Facultate", 30, 5);
  facultate.afisareProiect();
  cout << "Studenti: " << facultate.getNumberOfStudents() << endl;
  return 0;
}