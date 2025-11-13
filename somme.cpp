#include <iostream>
using namespace std;

int main() {
    int n, somme = 0;
    cout << "Entrez un entier N : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        somme += i;
    }

    cout << "La somme des entiers de 1 a " << n << " est : " << somme << endl;
    return 0;
}
