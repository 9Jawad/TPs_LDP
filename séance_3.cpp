// Exercice 18  (debugger gdb)

#include <iostream>
using namespace std;

int myDiv(int x, int y) {
    return x / y;
}

int myMod(int x, int y) {
    return x % y;
}

void div() {
    int a, b, c;
    cout << "Entrez une valeur pour le dividende 'a':" << endl;
    cin >> a;
    cout << "Entrez une valeur pour le dividende 'b':" << endl;
    cin >> b;
    cout << "Entrez une valeur pour le diviseur 'c':" << endl;
    cin >> c;
    cout << "Le résultat est: " << myDiv(a, myMod(b, c)) << endl;
}


// Exercice 19 ----------------------------------------------------------------
// variables l, j, k ont un retard d'une incrémentation

//#include <iostream>
using namespace std;
void retard() {
    int i = 41; int j = i;
    int k = 666; int l = 0;
    for (i = 40; i < 60; i += 2) {
        k = i; l = i; i += 2; j = i; i = j;
        cout << i << " " << j << endl;
    }
    i++;
    cout << "apres la boucle for, i vaut : " << i << endl;
    cout << "apres la boucle for, j vaut : " << j << endl;
    cout << "apres la boucle for, k vaut : " << k << endl;
    cout << "apres la boucle for, l vaut : " << l << endl;
    if (i != j) {
        i = 666 ; j = 666 ;
    }
    cout << "apres la condition if, i vaut : " << i << endl;
    cout << "apres la condition if, j vaut : " << j << endl;
}

/// ----- REPONSE :
/// 5 incrémentations
/// i vaut : 61, j vaut : 58
/// k vaut : 56, l vaut : 56
/// apres if : i, j = 666


// Exercice 20 ----------------------------------------------------------------

/// en python, nous ne retrouvons pas ce retard là


// Exercice 21 ----------------------------------------------------------------

