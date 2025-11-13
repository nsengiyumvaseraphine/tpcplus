#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez un entier : ";
    cin >> n;

    if (n > 0)
        cout << n << " est positif." << endl;
    else if (n < 0)
        cout << n << " est negatif." << endl;
    else
        cout << "Le nombre est nul." << endl;

    return 0;
}
