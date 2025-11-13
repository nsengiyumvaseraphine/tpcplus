#include <iostream>
#include <cmath>
using namespace std;
class Forme {
public:
    virtual double aire() const { return 0.0; }
    virtual ~Forme() = default;
};

class Cercle : public Forme {
private:
    double r;
public:
    Cercle(double rr): r(rr) {}
    double aire() const override { return M_PI * r * r; }
};

class Rectangle : public Forme {
private:
    double l, h;
public:
    Rectangle(double ll, double hh): l(ll), h(hh) {}
    double aire() const override { return l * h; }
};

int main() {
    Forme* f1 = new Cercle(2.0);
    Forme* f2 = new Rectangle(3.0, 4.0);
    cout << "Aire cercle: " << f1->aire() << "\n";
    cout << "Aire rectangle: " << f2->aire() << "\n";
    delete f1; delete f2;
    return 0;
}