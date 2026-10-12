#include <iostream>
using namespace std;
// Programa que imprime los numeros desde el numero ingresado hasta 0
int main(){
int numero;
 
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    for(int i=numero; i>=0; i--){
        cout << i << endl;
    }
    return 0;

}