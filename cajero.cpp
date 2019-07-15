/* 
Developed by: Reynald
Reference Purposes
Modifications: 07/14/2019 - > ... 
*/
#include <iostream>

using namespace std;

int main()
{   
    int opt, retiro, ingreso, balance;
    balance = 5000; // Aqui se indica la cantidad de balance en cuenta.
    cout<<"Cajero automatico";
    cout<<"Bienvenido, desea retirar o transferir dinero?";
    cout<<"\n 1.Retirar \n 2.Transferir \n 3.Ver saldo en cuenta \n";
    cin>>opt;
    if( opt ==1 ){
        cout<<"Ingrese la cantidad a retirar: \n";
        cin>>retiro;
        balance = balance - retiro;
        cout<<"Balance actual "<<balance<<"\n";
    }
    else if(opt == 2){
        cout<<"Si desea transferir (ingresar en cuenta).";
        cout<<" Por favor indique la canidad \n";
        cin>>ingreso;
        balance = ingreso + balance;
        cout<<"Total actual en cuenta: "<<balance<<".\n";
        cout<<" A ingresado su dinero correctamente.\n";
    }
    else if(opt==3){
        cout<<"Usted cuenta con un total en cuenta de: \n";
        cout<<balance<<"\n";
    }
    
    cout<<"Gracias por utilizar la red de cajeros de Cientificos Del Software :)";
    
    return 0;
}

