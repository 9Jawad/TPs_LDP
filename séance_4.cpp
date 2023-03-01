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

enum alphabetic{A, B, C};

alphabetic convert(string& item){
    if (item == "A") {
        return A;
    }
    else if (item == "B"){
        return B;
    }
    else{
        return C;
    }
}

int fake_m2(){
    string item;
    cout << "Entrer la première lettre d'un prénom en maj : ";
    cin >> item;
    switch(convert(item)){
        case A:
            cout << "Angèle" << endl;
            break;
        case B:
            cout << "Benjamin" << endl;
            break;
        default:
            cout << "Cédric" << endl;
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




// MAIN

int main(){
    fake_m1(); fake_m2(); fake_m3();
    fake_m4();
    return 0;
}