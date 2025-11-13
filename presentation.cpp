#include <iostream>
#include <string>
using namespace std;

int main() {
    string nom, adresse;
    int age;

    cout << "Entrez votre nom : ";
    getline(cin, nom);   // lecture avec espaces
    cout << "Entrez votre age : ";
    cin >> age;
    cin.ignore();  // vider le buffer
    cout << "Entrez votre adresse : ";
    getline(cin, adresse);

    cout << nom << ", vous avez " << age << " ans et vous habitez a " << adresse << endl;
    return 0;
}
