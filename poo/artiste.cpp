#include <iostream>
#include <string>

using namespace std;

class Musicien {
protected:
    string nom;
    string instrument;
public:
    Musicien(const string& n="", const string& instr="") : nom(n), instrument(instr) {}
    virtual void afficher() const {
        cout << "Musicien: " << nom << " Instrument: " << instrument << "\n";
    }
    virtual ~Musicien() = default;
};

class Chanteur {
protected:
    string nomCh;
    string tessiture;
public:
    Chanteur(const string& n="", const string& t="") : nomCh(n), tessiture(t) {}
    virtual void afficherCh() const {
        cout << "Chanteur: " << nomCh << " Tessiture: " << tessiture << "\n";
    }
    virtual ~Chanteur() = default;
};

class Artiste : public Musicien, public Chanteur {
public:
    Artiste(const string& n, const string& instr, const string& tess)
      : Musicien(n, instr), Chanteur(n, tess) {}

    void afficher() const {
        cout << "Artiste: " << Musicien::nom
                  << " Instrument: " << instrument
                  << " Tessiture: " << Chanteur::tessiture << "\n";
    }
};

int main() {
    Artiste a("Fulgence nahimana ,", "Guitare ,", "Baryton");
    a.afficher();
    return 0;
}