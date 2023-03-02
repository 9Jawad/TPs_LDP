// Exercice 24

#include <iostream>
#include <ctime>
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

int fake_m2(){
    char item;
    cout << "Entrer la première lettre d'un prénom : ";
    cin >> item;
    switch(toupper(item)){
        case 'A':
            cout << "Alice" << endl;
            break;
        case 'B':
            cout << "Bob" << endl;
            break;
        case 'C':
            cout << "Charles" << endl;
            break;
        case 'D':
            cout << "David" << endl;
            break;
        case 'E':
            cout << "Emily" << endl;
            break;
        case 'F':
            cout << "Frank" << endl;
            break;
        case 'G':
            cout << "George" << endl;
            break;
        case 'H':
            cout << "Hannah" << endl;
            break;
        case 'I':
            cout << "Isabelle" << endl;
            break;
        case 'J':
            cout << "John" << endl;
            break;
        case 'K':
            cout << "Kate" << endl;
            break;
        case 'L':
            cout << "Liam" << endl;
            break;
        case 'M':
            cout << "Mia" << endl;
            break;
        case 'N':
            cout << "Nathan" << endl;
            break;
        case 'O':
            cout << "Oliver" << endl;
            break;
        case 'P':
            cout << "Paul" << endl;
            break;
        case 'Q':
            cout << "Quentin" << endl;
            break;
        case 'R':
            cout << "Rachel" << endl;
            break;
        case 'S':
            cout << "Sarah" << endl;
            break;
        case 'T':
            cout << "Thomas" << endl;
            break;
        case 'U':
            cout << "Ursula" << endl;
            break;
        case 'V':
            cout << "Vincent" << endl;
            break;
        case 'W':
            cout << "William" << endl;
            break;
        case 'X':
            cout << "Xavier" << endl;
            break;
        case 'Y':
            cout << "Yvette" << endl;
            break;
        case 'Z':
            cout << "Zoe" << endl;
            break;
        default:
            cout << "Personne" << endl;
    }
    return 0;
}


// Exercice 26 ----------------------------------------------------------------

int fibonacci_V1(int n){
    int pre = 0;
    int result = 1;
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        for (int i = 0; i < n - 1 ; i++){
            result = result + pre;
            pre = result - pre;
        }
    }
    return result;
}


int fibonacci_V2(int n){
    int pre = 0;
    int result = 1;
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        int i = 0;
        while (i < n - 1){
            result = result + pre;
            pre = result - pre;
            i++;
        }
    }
    return result;
}


int fibonacci_V3(int n){
    int pre = 0;
    int result = 1;
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        int i = 0;
        do{
            result = result + pre;
            pre = result - pre;
            i++;
        } while (i < n - 1);
    }
    return result;
}

int fake_m3(){
    cout << fibonacci_V1(16) << endl;
    cout << fibonacci_V2(16) << endl;
    cout << fibonacci_V3(16) << endl;
    return 0;
}


// Exercice 27 ----------------------------------------------------------------

int fake_m4(){
    int n;
    int count = 0;
    cout << "entier positif : " ;
    cin >> n;

    while(n != 1){
        cout << n << " ";
        if (n%2 == 0){
            n = n / 2;
        }
        else{
            n = n*3 + 1;
        }
        count++;
        cout << n << endl;
    }
    cout << count << " itérations" << endl;

    return 0;
}


// Exercice 28 ----------------------------------------------------------------




// Exercice 29 ----------------------------------------------------------------

int fake_m6(int argc, char ** argv) {

    // nbr aléatoire
    int seed = time(0);
    srand(seed);
    int random_number = rand() % 101;

    // Jeu d'essai
    int i = 0;
    bool found = false;
    cout << "Vous devez trouver le nombre secret entre 1 et 100, vous avez 6 essais !" << endl;
    while((i<6) && (not found)){
        int choice;
        cout << "tentative: ";
        cin >> choice;
        if (choice > random_number){
            cout << "Le nombre secret est plus petit" << endl;
        }
        else if (choice < random_number){
            cout << "Le nombre secret est plus grand" << endl;
        }
        else {
            found = true;
        }
        i++;
    }

    if (found) {
        cout << "Bravo ! En " << i << " essais" << endl;
    }
    else {
        cout << "Vous avez perdu !" << endl;
    }
    return 0;
}


// MAIN

int main(){
    fake_m1(); fake_m2(); fake_m3();
    fake_m4(); fake_m5(); fake_m6();
    return 0;
}