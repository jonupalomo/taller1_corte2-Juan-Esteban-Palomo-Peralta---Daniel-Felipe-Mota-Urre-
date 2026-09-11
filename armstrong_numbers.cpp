#include <iostream>
using namespace std;
int main(){
    int number;    
    cout << "Dame el número que quieres validar: ";
    cin >> number;
    int longitud = 0;
    int num_digitos = number;
    while (num_digitos > 0) {
        num_digitos /= 10; 
        longitud++; 
    }
    int total = 0;
    for (int i = number; i > 0; i /= 10){
        int digito = i % 10;
        int cuadrado = 1;
        for (int j = 0; j < longitud; j++){
            cuadrado *= digito;
        }
    total += cuadrado;
    }
    if (total == number){ 
        cout << "Es un número amrstrong" << endl;
    }
    else {
        cout << "No es un número Armstrong" << endl;
        }
    return 0;
}