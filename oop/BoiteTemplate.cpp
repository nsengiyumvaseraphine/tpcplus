#include <iostream>
#include <string>


using namespace std;

template<typename T>
class Boite {
private:
    T contenu;
public:
    Boite(const T& c): contenu(c) {}
    void afficher() const {
        cout << contenu << "\n";
    }
};

int main() {
    Boite<int> b1(42);
    Boite<string> b2(string("Bonjour Fulgence"));
    Boite<double> b3(3.1415);
    b1.afficher();
    b2.afficher();
    b3.afficher();
    return 0;
}