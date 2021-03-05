#include<iostream>

using namespace std;

int suma(int N1, int N2){
    return N1+N2;
}
main(){
    int N1,N2;
    cout<<"Ingresa el primer  numero :";cin>>N1;
    cout<<"Ingresa el segundo  numero :";cin>>N2;
    cout<<"El resultado de la suma es: "<<suma(N1,N2)<<endl;

}
