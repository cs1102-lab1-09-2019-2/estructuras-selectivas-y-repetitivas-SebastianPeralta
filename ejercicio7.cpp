#include <iostream>
using namespace std;
int main(){
    int C, autorizacion, CITV, SOAT;
    do{
        cout<<"Ingresar numero de identificacion valido";
        cin>>C;
    } while (C<=11111111 || C>=99999999);
    autorizacion=C%100;
    CITV=(C-autorizacion)/100%10;
    SOAT=(C-CITV)/1000%10;
    if (SOAT%2==0){
        cout<<"\nSOAT vigente\n";
    } else {
        cout<<"\nSOAT vencido\n";
    }
    if (CITV%2==0){
        cout<<"\nCITV vigente\n";
    } else {
        cout<<"\nCITV vencido\n";
    }
    if (autorizacion%3==0){
        cout<<"\nAutorizado\n";
    } else {
        cout<<"\nNo autorizado\n";
    }
}
