
#include <iostream>
#include <string>

using namespace std;
int main() {
    int a = 5;
    //Declarar una cadena
    string b;
    //Inicializar la cadena b
    b = "Esto es una cadena";
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<b[0]<<"\n";
    cout<<b[4]<<"\n";//la posicion 4 ocupa un space por ello aparece como tal

    int numeros[6]={4, 8, 9, 5, 6, 7};
    cout<<numeros[0]<<"\n";

    float numero{5.16};
    cout<<numero<<"\n";
