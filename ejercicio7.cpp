#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    string n;
    cout<<"Ingrese un número entero de 8 dígitos para su identificación: ";
    cin>>n;
    char quinto=n[4], sexto=n[5], ultimos=n[6,7];
    if (atoi(const char quinto)%2==0){
        cout<<"El SOAT está vigente.";
    } else{
        cout<<"EL SOAT está vencido.";
    }
    if (atoi(const char sexto)%2==0){
        cout<<"El CITV está vigente.";
    } else{
        cout<<"EL CITV está vencido.";
    }
    if (atoi(const char ultimos)%2==0){
        cout<<"AUTORIZADO.";
    } else{
        cout<<"NO AUTORIZADO.";
    }
}