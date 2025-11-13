#include <iostream>
using namespace std;

int main() {
    float longueur, largeur, perimetre;
    cout << "Entrez la longueur : ";
    cin >> longueur;
    cout << "Entrez la largeur : ";
    cin >> largeur;

    perimetre = 2 * (longueur + largeur);
    cout << "Le perimetre du rectangle est : " << perimetre << endl;
    return 0;
}
