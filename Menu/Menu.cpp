// Programma che visualizza un menu di scelta.

#include <iostream>
using namespace std;

int main(){
	float a,b;
	int opr;
	char reply;
do
{
	system("clear") && system("cls"); 

	cout<<"\t Calcolatrice multifunzione";
	cout<<""<<endl;
	cout<<"1. Somma \n";
	cout<<"2. Differenza \n";
	cout<<"3. Prodotto \n";
	cout<<"4. Quoziente \n";

	cout<<"Scegliere il tipo di operazione: ";
	cin>>opr;
	
	cout<<"Inserire il primo valore \t";
	cin>>a;
	cout<<"Inserire il secondo valore \t";
	cin>>b;
	
	switch(opr){
		case 1: cout<<"il risultato e': "<<a+b<<endl;
			break;
		case 2: cout<<"il risultato e': "<<a-b<<endl;
			break;
		case 3: cout<<"il risultato e': "<<a*b<<endl;
			break;
		case 4: cout<<"il risultato e': "<<a/b<<endl;
			break;
		default:
			break;
	}

	cout<<"Vuoi eseguire qualche altra operazione? [s/n]";
	cin>>reply;
	
	if (reply == 'n'){    
        system("cls") && system("clear");
        return 0;
		}

} while (reply == 's' || reply == 'S');

	system("pause");
}