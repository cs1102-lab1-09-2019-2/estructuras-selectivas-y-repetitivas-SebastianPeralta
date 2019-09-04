#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese 4 o 8: ";
    cin>>n;
    for (int k=1; k<=n; k++){
        for (int l=1; l<=2*n; l+=2){
            if (k%2!=0){
                cout<<"#"<<"@";
            } else {
                cout<<"@"<<"#";
            }
        }
        cout<<"\n";
    }
}