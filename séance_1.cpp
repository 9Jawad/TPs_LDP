// INTRODUCTION AU TP DE LDP

#include <iostream>

int main(){
    //int x = 0;
    std::cout << "Hello,world." << std::endl;
    return 0;
}


// Exercice 7 --------------------------------------------------------------

// #include <iostream>
using namespace std;

int sum(){
    int a, b;
    cout << "Entrer la valeur de a: ";
    cin >> a;
    cout << "Entrer la valeur de b: ";
    cin >> b;
    cout << "Sortie " << a + b << endl;
    return 0;
}


// Exercice 8  --------------------------------------------------------------

// #include<iostream>
using namespace std;

int div(){
    cout << " Division calculator " << endl;
    int a, b;
    cout << "Enter a value 1: " << endl;
    cin >> a;
    cout << "Enter a value 2: " << endl;
    cin >> b;
    cout << "The result: " << a / b << endl;
    return 0;
}