#include <iostream>

using namespace std;
class Rectangle {
private:
    double largeur, hauteur;
public:
    Rectangle(double l=0, double h=0) : largeur(l), hauteur(h) {}
    double surface() const { return largeur * hauteur; }
};

int main() {
    Rectangle r1(3.5, 2.0);
    Rectangle r2(4.0, 5.5);
    cout << "Surface r1 = " << r1.surface() << "\n";
    cout << "Surface r2 = " << r2.surface() << "\n";
    return 0;
}