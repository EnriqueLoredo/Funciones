#include<iostream>
using namespace std;

int mayor(int, int, int);

int main()
{
    int a,b,c;
    cout<<"Ingresa tres numeros: \n";
    cin>>a>>b>>c;
    cout<<"El numero mayor es: "<<mayor(a,b,c)<<endl;
    return 0;
}

int mayor(int a,int b, int c)
{
    if(a>b) b=a;
    if(a>c) c=a;
    if(b>c) c=b;
return c;
}
