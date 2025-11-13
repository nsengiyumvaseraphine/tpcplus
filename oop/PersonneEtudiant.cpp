#include <iostream>
#include <string>

using namespace std;
class Personne {
protected:
    string nom;
    int age;
public:
    Personne(const string& n="", int a=0) : nom(n), age(a) {}
    virtual void afficher() const {
        cout << "Nom: " << nom << " Age: " << age;
    }
    virtual ~Personne() = default;
};

class Etudiant : public Personne {
private:
    string niveau;
public:
    Etudiant(const string& n, int a, const string& niv)
    : Personne(n,a), niveau(niv) {}

    void afficher() const override {
        Personne::afficher();
        cout << " Niveau: " << niveau << "\n";
    }
};

int main() {
    Personne p("Paul", 45);
    Etudiant e("Sophie", 21, "Licence 2");
    p.afficher(); cout << "\n";
    e.afficher();
    return 0;
}