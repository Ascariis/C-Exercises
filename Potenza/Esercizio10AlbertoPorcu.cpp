/* Presi in input due valori, che rappresentano rispettivamente base ed esponente di una
potenza, calcolare la potenza utilizzando un ciclo (provare a realizzare due versioni,
una con il ciclo for ed una con il ciclo while). */

#include <iostream>
using namespace std;

int main(){
    
    float base, pot;
    int exp;

    cout<<"Inserire la base: ";
    cin>>base;
    cout<<"Inserire l'esponente: ";
    cin>>exp;
    
    pot=base;
    if(exp==0 && base==0)
        cout<<0<<endl;
    else if(exp==0)
        cout<<1<<endl;
    else{
    for(int i=1; i<exp; i++)
        pot*=base;

    cout<<"Il risultato è "<<pot;
    }
}