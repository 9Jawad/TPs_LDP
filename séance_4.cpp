// Exercice 24

#include <iostream>
using namespace std;

void trie(int x1, int x2, int x3){
    int A, B, C;

    if (x3 > x1 && x3 > x2){
        C = x3;
        if (x1 > x2){
            A = x2;
            B = x1;
        }
        else{
            A = x1;
            B = x2;
        }
    }
    else if (x2 > x1 && x2 > x3){
        C = x2;
        if (x1 > x3){
            A = x3;
            B = x1;
        }
        else{
            A = x1;
            B = x3;
        }
    }
    else{
        C = x1;
        if (x2 > x3){
            A = x3;
            B = x2;
        }
        else{
            A = x2;
            B = x3;
        }
    }

    cout << "les nombres trié : " << A << " " << B << " " << C << endl;
}

int fake_m1(){
    int x1, x2, x3;
    cout << "Veuillez entrer 3 chiffres.." << endl;
    cout << "A : ";
    cin >> x1;
    cout << "B : ";
    cin >> x2;
    cout << "C : ";
    cin >> x3;
    trie(x1, x2, x3);

    return 0;
}


// Exercice 25 ----------------------------------------------------------------




// Exercice 26 ----------------------------------------------------------------




// Exercice 27 ----------------------------------------------------------------




// Exercice 28 ----------------------------------------------------------------




// Exercice 29 ----------------------------------------------------------------




// MAIN

int main(){
    fake_m1();
    return 0;
}