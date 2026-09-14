#include <iostream>
#include <string>
using namespace std;
int main(){
    string cadena_1;
    string cadena_2;
    cout << "Dame la primera cadena de ADN: ";
    cin >> cadena_1;
    cout << "Dame la segunda cadena de ADN: ";
    cin >> cadena_2;
    if (cadena_1.length() == cadena_2.length()){
        int contador = 0;
        for (int i = 0; i < cadena_1.length(); i++){
            if (cadena_1[i] != cadena_2[i]){
                contador++;
            }
            else {
                continue;
            }
        }
        cout << "La distancia Hamming es: "<< contador << endl;
    }
    else {
        cout << "Las cadenas no tienen la misma longitud";
    }
    return 0;
}
