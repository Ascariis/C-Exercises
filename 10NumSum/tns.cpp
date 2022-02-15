/* Prendere in input 10 numeri, calcolarne somma e media. */

#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int input;
    int med;

for (int i=0;i<10;i++) {

    cout<<"Inserisci un valore: ";
    cin>>input; 
    sum += input;
    med = sum/10;
} 

cout<<"La somma dei valori e': "<<sum<<endl;
cout<<"La media dei valori e': "<<med<<endl;
    
}

