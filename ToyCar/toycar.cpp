#include <iostream>
using namespace std;

int cars(int wheels=2, int bodies=48, int figures=76)
{
    
    int i=0;
    while(wheels>=4 && bodies>=1 && figures>=2)
    {
        wheels-=4;
        bodies-=1;
        figures-=2;
        i++;
    }
    
    return i; 
}

int main(){
    cout<<cars();
}

