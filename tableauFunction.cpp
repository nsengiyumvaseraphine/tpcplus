#include <iostream>
#include <cmath>
#include <string>
using namespace std;


void saisirEtAfficherTableau() {
    int tab[10];
    cout << "Entrez 10 entiers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> tab[i];
    }
    cout << "Les entiers saisis sont:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

// 2. Somme des elements d'un tableau
int sommeTableau(int tab[], int taille) {
    int sum = 0;
    for (int i = 0; i < taille; i++) {
        sum += tab[i];
    }
    return sum;
}

// 3. Trouver la valeur maximale et minimale dans un tableau
void maxMinTableau(int tab[], int taille) {
    int maxVal = tab[0], minVal = tab[0];
    for (int i = 1; i < taille; i++) {
        if (tab[i] > maxVal) maxVal = tab[i];
        if (tab[i] < minVal) minVal = tab[i];
    }
    cout << "Max: " << maxVal << ", Min: " << minVal << endl;
}

// 4. Recherche d'une valeur dans un tableau
bool rechercher(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) return true;
    }
    return false;
}

// 5. Inverser les elements d'un tableau
void inverser(int tab[], int taille) {
    int debut = 0;
    int fin = taille - 1;
    while (debut < fin) {
        int temp = tab[debut];
        tab[debut] = tab[fin];
        tab[fin] = temp;
        debut++;
        fin--;
    }
}

// Fonction pour afficher les elements du tableau
void afficherTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

// 6. Compter les elements pairs dans un tableau
int compterPairs(int tab[], int taille) {
    int count = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

// 7. Calculer la moyenne des elements d'un tableau
float moyenne(int tab[], int taille) {
    int sum = 0;
    for (int i = 0; i < taille; i++) {
        sum += tab[i];
    }
    return static_cast<float>(sum) / taille;
}

// 8. Fusionner deux tableaux en un seul
void fusionnerTableaux(int tab1[], int taille1, int tab2[], int taille2) {
    int tabFusionne[taille1 + taille2];
    for (int i = 0; i < taille1; i++) {
        tabFusionne[i] = tab1[i];
    }
    for (int i = 0; i < taille2; i++) {
        tabFusionne[taille1 + i] = tab2[i];
    }

    cout << "Tableau fusionne: ";
    for (int i = 0; i < taille1 + taille2; i++) {
        cout << tabFusionne[i] << " ";
    }
    cout << endl;
}

// 9. Afficher les elements qui apparaissent plus d'une fois
void afficherDoublons(int tab[], int taille) {
    bool affiches[100] = {false};  // assuming numbers are in the range 0-99
    cout << "Doublons: ";
    for (int i = 0; i < taille; i++) {
        if (tab[i] >= 0 && tab[i] < 100 && !affiches[tab[i]]) {
            int count = 0;
            for (int j = 0; j < taille; j++) {
                if (tab[i] == tab[j]) count++;
            }
            if (count > 1) {
                cout << tab[i] << " ";
                affiches[tab[i]] = true;
            }
        }
    }
    cout << endl;
}

// 10. Trier un tableau en ordre croissant (tri à bulles)
void trier(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                // echange des deux elements
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}
// I am testing my functions now******
int main() {
    
    // Tableaux
    int tab[10] = {3, 7, 9, 5, 2, 8, 4, 10, 11, 1};
    int taille = sizeof(tab) / sizeof(tab[0]);
    cout << "Tableau original statique : ";
    afficherTableau(tab, taille);

    // 1. Saisie et affichage
    saisirEtAfficherTableau();

    // 2. Somme tableau
    cout << "Somme du tableau statique: " << sommeTableau(tab, 10) << endl;

    // 3. Max et Min tableau
    maxMinTableau(tab, 10);

    // 4. Recherche dans tableau
    cout << "7 trouve? " << rechercher(tab, 10, 7) << endl;

    // 5. Inverser tableau
    inverser(tab, taille);
    cout << "Tableau statique inverse : ";
    afficherTableau(tab, taille);

    // 6. Compter pairs
    cout << "Nombre d'elements pairs dans le tableau statique: " << compterPairs(tab, 10) << endl;

    // 7. Moyenne tableau
    cout << "Moyenne du tableau statique: " << moyenne(tab, 10) << endl;

    // 8. Fusionner deux tableaux
    int tab2[5] = {12, 15, 7, 3, 9};
    fusionnerTableaux(tab, 10, tab2, 5);

    // 9. Afficher doublons
    afficherDoublons(tab, 10);

    // 10. Trier tableau
    trier(tab, taille);
    cout << "Tableau trie : ";
    afficherTableau(tab, taille);

    return 0;
}