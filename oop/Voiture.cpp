#include <iostream>
#include <string>

using namespace std;
class Voiture {
private:
    string marque;
    string modele;
    static int compteur;
public:
    Voiture(const string& m, const string& mo) : marque(m), modele(mo) { ++compteur; }
    static void afficherCompteur() {
        cout << "Voitures creees: " << compteur << "\n";
    }
};

int Voiture::compteur = 0;

int main() {
    Voiture v1("Toyota", "Yaris");
    Voiture v2("Ford", "Focus");
    Voiture::afficherCompteur();
    return 0;
}