#include<iostream>
using namespace std;

int Factorial (int a);

int main()
{
     int N1;
    cout<<"Introduzca el valor del numero: \n";
    cin>>N1;
    int fact = Factorial (N1);
    cout<<"El factorial es: "<<fact<<endl;
    return 0;
}

int Factorial(int a){
    int i;
    int resultado = 1;
    for (i=1; i <=a; i++){
    resultado *= i;
    }

    return resultado;
}
