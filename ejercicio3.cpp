#include <iostream>
using namespace std;
int main() {
    int n, j, max=0;
    cout <<"n: ";
    cin>> n;
    for (int i=0; i<n; i++){
        cin>> j;
        if (max<j||j==max) {
            max = j;
        }
    }
    cout<<max;
    return 0;
}