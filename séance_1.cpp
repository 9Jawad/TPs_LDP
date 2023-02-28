// INTRODUCTION AU TP DE LDP

#include <iostream>

void hello(){
    //int x = 0;
    std::cout << "Hello,world." << std::endl;
}


// Exercice 7 --------------------------------------------------------------

// #include <iostream>
using namespace std;

void sum(){
    int a, b;
    cout << "Entrer la valeur de a: ";
    cin >> a;
    cout << "Entrer la valeur de b: ";
    cin >> b;
    cout << "Sortie " << a + b << endl;
}


// Exercice 8  --------------------------------------------------------------

// #include<iostream>
using namespace std;

void div_calculator(){
    cout << " Division calculator " << endl;
    int a, b;
    cout << "Enter a value 1: " << endl;
    cin >> a;
    cout << "Enter a value 2: " << endl;
    cin >> b;
    cout << "The result: " << a / b << endl;
}


// MAIN

int main(){
    div_calculator(); sum(); hello();
    return 0;
}