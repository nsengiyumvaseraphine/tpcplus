#include <iostream>
#include <string>

using namespace std;
class Livre {
private:
    string titre;
    string auteur;
    double prix;
public:
    Livre() : titre(""), auteur(""), prix(0.0) { cout << "Constructeur par defaut\n"; }
    Livre(const string& t, const string& a, double p)
      : titre(t), auteur(a), prix(p) { cout << "Constructeur parametre\n"; }
    Livre(const Livre& other)
      : titre(other.titre), auteur(other.auteur), prix(other.prix) {
        cout << "Constructeur de copie\n";
    }
    ~Livre() { cout << "Destructeur pour " << titre << "\n"; }
    void afficher() const {
        cout << "Titre: " << titre << " Auteur: " << auteur << " Prix: " << prix << "\n";
    }
};

int main() {
    Livre l1; 
    Livre l2("1984", "Orwell", 12.5); 
    Livre l3 = l2; 
    l1.afficher();
    l2.afficher();
    l3.afficher();
    return 0;
}