/*Pedir una cantidad de dólares y pasarla a pesos (331.37), mostrando el resultado. 
HACER UNA FUNCION llamada int ConvertirPesos(int dolares) que devuelva e
l resultado*/
#include <iostream>

using namespace std;

float ConvertirPesos(int dolares);
int main(){
    float dolar;
    cout<<"ingrese cantidad de dolares: ";
    cin>>dolar;
    cout<<dolar<<"  dolares pasados a pesos son :"<<ConvertirPesos( dolar);
    return 0;
}
float ConvertirPesos(int dolares){
    float pesos=331.37;
    pesos=pesos*dolares;
    return pesos;
}