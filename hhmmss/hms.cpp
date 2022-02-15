/* Dati tre numeri interi, considerarli come hh:mm:ss di un orario determinato. Calcolare i
secondi trascorsi dalla mezzanotte del giorno prima. */

#include <iostream>
using namespace std; 

int main(){
    int h, m, s;
    system("clear");

    cout<<"Inserire il primo valore: ";
    cin>>h;
    cout<<"Inserire il secondo valore: ";
    cin>>m;
    cout<<"Inserire il terzo valore: ";
    cin>>s;
    
    s= h*3600+m*60+s;
    cout<<"Sono trascorsi "<<s<<" secondi dall'ultima mezzanotte.";

}