#include <iostream>
using namespace std;
float Promedio(int n_estudiante){
    float Pc1, Pc2, Pc3, Pc4, Proyecto, E1, E2;
    double P=0;
    do {
        cout<<"Practica 1: ";
        cin>>Pc1;
    } while (Pc1<0 || Pc1>20);
    do {
        cout<<"Practica 2: ";
        cin>>Pc2;
    } while (Pc2<0 || Pc2>20);
    do {
        cout<<"Practica 3: ";
        cin>>Pc3;
    } while (Pc3<0 || Pc3>20);
    do {
        cout<<"Practica 4: ";
        cin>>Pc4;
    } while (Pc4<0 || Pc4>20);
    do {
        cout<<"Proyecto: ";
        cin>>Proyecto;
    } while (Proyecto<0 || Proyecto>20);
    do {
        cout<<"Examen1: ";
        cin>>E1;
    } while (E1<0 || E1>20);
    do {
        cout<<"Examen 2: ";
        cin>>E2;
    } while (E2<0 || E2>20);
    P=0.05*Pc1+0.1*Pc2+0.1*Pc3+0.15*Pc4+0.2*Proyecto+0.2*E1+0.2*E2;
    return P;
}
int main() {
    int alumnos;
    do{
        cout<<"Numero de estudiantes: ";
        cin>>alumnos;
    } while (alumnos <= 3 ||alumnos > 30);
    int contador=0;
    do{
        contador++;
        cout<<"Alumno número "<<contador<<"\n";
        float average = Promedio(alumnos);
        if (average>=18 && average<=20){
            cout<<"Su promedio es: "<<average<< "\n"<<"Ud asistira al ACM - ICPC Interational Collegiate Programming Contest \n";
        }
        else if (average>=15 && average<=17.99){
            cout<<"Su promedio es: "<<average<< "\n"<<"Ud asistira al Imagine Cup \n";
        }
        else if (average>=12 && average<=14.99){
            cout<<"Su promedio es: "<<average<< "\n"<<"Ud asistira al Hackathon de Miraflores \n";
        }
        else if (average<12){
            cout<<"Su promedio es: "<<average<< "\n"<<"Ud necesita mejorar \n";
        }
    } while (contador<alumnos);
}