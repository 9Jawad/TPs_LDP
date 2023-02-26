
// Exercise 11 (python)

// a = input('introduisez un entier a: ')
// b = input('introduisez un entier b: ')
// if b != 0:
// if a%b != 0:
// print("la division de a par b donne un reste non nul")
// else:
// print("a est divisé par b")
// else:
// print("la division de a par b tend vers plus ou moins zero")


// Exercise 12 ----------------------------------------------------------------


#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "introduisez un entier a: " << endl;
    cin >> a;
    cout << "introduisez un entier b: " << endl;
    cin >> b;

    if ((b!=0) && !(a%b)){
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