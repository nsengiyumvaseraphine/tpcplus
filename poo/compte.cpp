#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class CompteBancaire {
private:
    string numero;
    string titulaire;
    double solde;
public:
    CompteBancaire(const string& num, const string& tit, double s=0.0)
    : numero(num), titulaire(tit), solde(s) {}

    void deposer(double montant) {
        if (montant>0) solde += montant;
    }
    bool retirer(double montant) {
        if (montant>0 && montant<=solde) { solde -= montant; return true; }
        return false;
    }
    void afficher() const {
        cout << "Compte: " << numero << " Titulaire: " << titulaire
                  << " Solde: " << fixed << setprecision(2) << solde << "\n";
    }
};

int main() {
    CompteBancaire c("BE123", "Alice", 100.0);
    c.afficher();
    c.deposer(50.5);
    c.afficher();
    if (!c.retirer(200)) cout << "Retrait echoue (fonds insuffisants)\n";
    c.retirer(30.25);
    c.afficher();
    return 0;
}