#include <iostream>
using namespace std;
float numero;
int main(){

    cout<<"Ingresa un numero: ";
    cin>>numero;

    if(numero<0){
        cout<<"El numero es negativo";
    }
    else if(numero==0){
        cout<<"El numero es 0";
    }
    else{
        cout<<"El numero es positivo";
    }
}