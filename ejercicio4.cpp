#include <iostream>
using namespace std;
int main() {
    int a=272,b=170,c=136,d=59, k;
    cout<<"Tipo de entrada \n";
    cout<<"1. Super Vip: "<<a<<"\n";
    cout<<"2. Vip: "<<b<<"\n";
    cout<<"3. Preferencial: "<<c<<"\n";
    cout<<"4. General: "<<d<<"\n";
    cout<<"Seleccione el tipo de entrada: ";
    cin>>k;
    while (k>4 || k<=0){
        cin>>k;
    }
    cout<< "Es cliente de claro <S,s,N,n>:";
    return 0;
}