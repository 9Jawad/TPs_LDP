// Exercice 18  (debugger gdb)

#include <iostream>
using namespace std;

int myDiv(int x, int y) {
    return x / y;
}

int myMod(int x, int y) {
    return x % y;
}

void diviseur() {
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

/// variables l, j, k ont un retard d'une assignation

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


// Exercice 21  (Shadowing) ---------------------------------------------------

// #include <iostream>
using namespace std;

void var(){
    int x = 2; // x1
    {
        cout << x + 3 << endl;
        {
            x = 1;  // x2
            cout << x + 3 << endl;
        }
    }
}


// Exercice 22 ----------------------------------------------------------------

/// utilisation d'une variable static
/// donc 'c' ne sera pas remis à 0

int func3() {
    static int c = 0;
    c++;
    return c; }

/// en supprimant le 'extern' du file2.cpp --> erreur
/// car il a une duplication de symbole


// Exercice 23 ----------------------------------------------------------------

// #include <iostream>
using namespace std;

int f1(int& x1){
    x1--;
    return x1;
}

int f2(){
    static int x1 = 0;
    x1++;
    return x1;
}

int fake_main(){
    int x1 = 3;
    f1(x1);
    int tmp = f2();
    int x2 = f1(tmp);
    cout << x2 << endl;
    return 0;
}



// MAIN

int main(){
    func3(); var(); retard(); diviseur(); fake_main();
    return 0;
}