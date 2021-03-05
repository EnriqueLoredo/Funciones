#include<iostream>
using namespace std;

int menor(int, int);
int mayor(int, int);

int main()
{
    int a,b;
    cout<<"Ingresa dos numeros: \n";
    cin>>a>>b;
    cout<<"El numero menor es: "<<menor(a,b)<<endl;
    cout<<"El numero mayor es: "<<mayor(a,b)<<endl;
    return 0;
}
int menor(int a,int b)
{
    if(a<b) b=a;

return b;
}
int mayor(int a,int b)
{
    if(a>b) b=a;

return b;
}
