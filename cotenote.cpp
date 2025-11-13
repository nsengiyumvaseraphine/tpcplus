#include <iostream>
using namespace std;

int main() {
    int note;
    cout << "Entrez une note (0-20) : ";
    cin >> note;

    if (note >= 18)
        cout << "Plus Grande Distinction" << endl;
    else if (note >= 16)
        cout << "Grande Distinction" << endl;
    else if (note >= 14)
        cout << "Distinction" << endl;
    else if (note >= 12)
        cout << "Satisfaction" << endl;
    else if (note >= 10)
        cout << "Passable" << endl;
    else
        cout << "Insuffisant" << endl;

    return 0;
}
