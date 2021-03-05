#include<iostream>
using namespace std;

int Max(int a, int b);

int main()
{
    int N1,N2,N3;
    cout<<"Ingresa tres numeros: \n";
    cin>>N1>>N2>>N3;
    int max = Max (Max (N1,N2), N3);
    cout<<"El numero mayor es: "<<max<<endl;
    return 0;
}

int Max(int a,int b){
    int c;
    if(a>b){return a;}
    else {return b;}

}
