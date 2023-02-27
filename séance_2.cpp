// Exercice 11 (python)

// a = input('introduisez un entier a: ')
// b = input('introduisez un entier b: ')
// if b != 0:
// if a%b != 0:
// print("la division de a par b donne un reste non nul")
// else:
// print("a est divisé par b")
// else:
// print("la division de a par b tend vers plus ou moins zero")


// Exercice 12 ----------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "introduisez un entier a: ";
    cin >> a;
    cout << "introduisez un entier b: ";
    cin >> b;

    if ((b!=0) && !(a%b)){  // exercice 13 inversé le AND → une verif paresseuse.
        cout << a << " est divisible par " << b << " et cela vaut " << a / b << endl;
    }
    else{
        if(b!=0) {
            cout << a << " n'est pas un multiple de " << b << endl;
        }
        else {cout << "la division de " <<  a << " par "<<  b << " n'est pas un réel !" << endl;
        }}
    return 0;
}


// Exercice 14 ----------------------------------------------------------------

// #include <iostream>
using namespace std;

int bo() {
    bool a = true, b = false, c = true;

    bool result = a or b and c; // Résultat attendu : true
    cout << "a or b and c = " << result << endl;

    // préciser l'ordre de priorité
    result = (a or b) and c;
    cout << "(a or b) and c = " << result << endl;
    return 0;
}


// Exercice 15 ----------------------------------------------------------------

/// Le compilateur peut se permettre de modifier le code pour le rendre plus efficace
/// si et seulement si il n'y a pas de conséquence sur le résultat
/// Ici, la vérification ce fait de gauche à droite et changer l'ordre pourrait avoir
/// des repercussions sur le code ! REPONSE : Non


// Exercice 16 ----------------------------------------------------------------

/// 1. Le code en python tiens sur 4 lignes contre 19 en C++
/// 2. Avec -Wall une erreur apparait car utilisation d'une assignation dans une condition
/// 3. Cela n'est pas accepter en python
/// 4. c'est une mauvaise pratique car elle pourrait engendrer des erreurs


// Exercice 17 ----------------------------------------------------------------

/// C++ compilateur , Python interpréteur
/// La difference de temps d'execution entre les deux est considérable
/// exemple : 1,5 s pour C++ et 7900 s pour python
