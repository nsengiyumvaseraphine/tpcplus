#include <iostream>
#include <cmath>
using namespace std;

// 1. Somme de deux entiers
int somme(int a, int b) {
    return a + b;
}

// 2. Verifier si un nombre est pair
bool estPair(int n) {
    return n % 2 == 0;
}

// 3. Calculer la factorielle d'un nombre
int factorielle(int n) {
    if (n == 0) return 1;
    int result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 4. Echanger les valeurs de deux variables
void echanger(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 5. Retourner le plus grand de trois nombres
int max3(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);
}

// 6. Calculer la moyenne de trois notes
float moyenne(float a, float b, float c) {
    return (a + b + c) / 3;
}

// 7. Verifier si un nombre est premier
bool estPremier(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 8. Compter le nombre de voyelles dans une chaîne
int compterVoyelles(string texte) {
    int count = 0;
    string voyelles = "aiuoeAIUOE";
    for (char c : texte) {
        if (voyelles.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

// 9. Convertir Celsius en Fahrenheit
float convertirEnFahrenheit(float celsius) {
    return celsius * 9 / 5 + 32;
}
int main(){
     // 1. Test somme
    cout << "Somme de 5 et 3: " << somme(5, 3) << endl;

    // 2. Test estPair
    cout << "6 est pair ? " << estPair(6) << endl;

    // 3. Test factorielle
    cout << "Factorielle de 5: " << factorielle(5) << endl;

    // 4. Test echanger
    int x = 5, y = 10;
    echanger(x, y);
    cout << "Apres echange: x = " << x << ", y = " << y << endl;

    // 5. Test max3
    cout << "Le plus grand parmi 3, 7, 5: " << max3(3, 7, 5) << endl;

    // 6. Test moyenne
    cout << "Moyenne de 15.5, 10.2, 18.3: " << moyenne(15.5, 10.2, 18.3) << endl;

    // 7. Test estPremier
    cout << "13 est premier ? " << estPremier(13) << endl;

    // 8. Test compterVoyelles
    cout << "umukama niwe mwungere wanje sinzokena': " << compterVoyelles("umukama niwe mwungere wanje sinzokena") << endl;

    // 9. Test convertirEnFahrenheit
    cout << "30°C en Fahrenheit: " << convertirEnFahrenheit(15) << endl;
    return 0;
};