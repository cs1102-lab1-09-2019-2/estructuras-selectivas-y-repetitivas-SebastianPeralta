#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese 4 o 8: ";
    cin>>n;
    for (int k=1; k<=n; k++){
        for (int l=1; l<=n; l++){
            if (k==1||k==n||l==k||l==n||l==1){
                cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}