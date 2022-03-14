/* Create a function which takes an argument of humanYears and returns [humanYears, catYears, dogYears] */


#include <iostream>
using namespace std;

int main()
{
    int humanYears, catYears, dogYears;
    
    do
    {
        cout<<"Inserire l'eta: ";
        cin>>humanYears;
    } while (humanYears<=0);
    
    switch (humanYears)
    {
    case 1:
        catYears=15;
        dogYears=15;
        break;
    case 2:
        catYears=24;
        dogYears=24;
        break; 
    
    default:
        catYears=4*(humanYears-2)+24;
        dogYears=5*(humanYears-2)+24;
        break; 
    } 
        cout<<humanYears<<endl;
        cout<<catYears<<endl;
        cout<<dogYears<<endl;
}
