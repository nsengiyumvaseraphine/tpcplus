#include <iostream>

using namespace std;

class Vecteur2D {
public:
    double x, y;
    Vecteur2D(double xx=0, double yy=0) : x(xx), y(yy) {}
    Vecteur2D operator+(const Vecteur2D& o) const { return Vecteur2D(x+o.x, y+o.y); }
    Vecteur2D operator-(const Vecteur2D& o) const { return Vecteur2D(x-o.x, y-o.y); }
};

ostream& operator<<(ostream& os, const Vecteur2D& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}

int main() {
    Vecteur2D a(1.0, 2.0), b(3.5, -1.0);
    cout << "a + b = " << (a + b) << "\n";
    cout << "a - b = " << (a - b) << "\n";
    return 0;
}