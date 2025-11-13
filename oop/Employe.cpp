#include <iostream>
#include <vector>
#include <memory>
#include <string>

using namespace std;
class Employe {
protected:
    string nom;
    double salaireBase;
public:
    Employe(const string& n="", double s=0.0) : nom(n), salaireBase(s) {}
    virtual double calculerSalaire() const = 0;
    virtual ~Employe() = default;
    virtual void afficher() const {
        cout << "Nom: " << nom << " Salaire: " << calculerSalaire() << "\n";
    }
};

class Ingenieur : public Employe {
private:
    double prime;
public:
    Ingenieur(const string& n, double s, double p) : Employe(n,s), prime(p) {}
    double calculerSalaire() const override { return salaireBase + prime; }
};

class Commercial : public Employe {
private:
    double commission;
public:
    Commercial(const string& n, double s, double c) : Employe(n,s), commission(c) {}
    double calculerSalaire() const override { return salaireBase + commission; }
};

int main() {
    vector<unique_ptr<Employe>> tab;
    tab.emplace_back(make_unique<Ingenieur>("Ing A", 2000, 500));
    tab.emplace_back(make_unique<Commercial>("Comm B", 1500, 800));
    for (const auto& e : tab) e->afficher();
    return 0;
}