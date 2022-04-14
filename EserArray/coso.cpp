#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int numElementi = 10;
int ar[numElementi];

void menuScelta()
{
    cout<<"1) Visualizzarlo in ordine crescente;"<<endl;
    cout<<"2) Visualizzarlo in ordine decrescente;"<<endl;
    cout<<"3) Visualizzare il numero maggiore;"<<endl;
    cout<<"4) Visualizzare il numero minore;"<<endl;
    cout<<"5) Visualizzare il numero più presente all’interno dell’array;"<<endl;
    cout<<"6) Visualizzare la somma di tutti gli elementi;"<<endl;
    cout<<"7) Visualizzare l’elenco di tutti gli elementi pari;"<<endl;
    cout<<"8) Visualizzare tutti i valori dell’Array maggiori del numero inserito;"<<endl;
    cout<<"9) Dire se nell’array sono presenti almeno 7 valori distinti;"<<endl;
    cout<<"10) Sostituire i valori negativi dell'array con la scritta 'NEG';"<<endl;
    cout<<"11) Creare un secondo array la cui grandezza è pari alla quantità di numeri positivi presente nell’array originale,"<<endl; 
    cout<<"12) Numero di elementi positivi, negativi o nulli nell'array;"<<endl;
    cout<<"13) Sostituire tutti gli elementi dell’array."<<endl;
}

void riempiArray()
{
    srand(time(0));
    for (int x = 0; x < numElementi; x++)
        ar[x] = rand() % 21 - 10;
}

void printArray()
{
    for (int x = 0; x < numElementi; x++)
        cout << ar[x] << " ";
    cout << "\n";
}

void arrCrescente()
{
    int swap;
    for (int x = 0; x < numElementi - 1; x++)
    {
        for (int y = 0; y < numElementi - 1; y++)
            if (ar[y] > ar[y + 1])
            {
                swap = ar[y];
                ar[y] = ar[y + 1];
                ar[y + 1] = swap;
            }
    }
    printArray();
}

void arrDecrescente()
{
    int swap;
    for (int x = 0; x < numElementi - 1; x++)
    {
        for (int y = 0; y < numElementi - 1; y++)
            if (ar[y] < ar[y + 1])
            {
                swap = ar[y];
                ar[y] = ar[y + 1];
                ar[y + 1] = swap;
            }
    }
    printArray();
}

void numMaggiore()
{
    int max = ar[0];
    for (int x = 1; x < numElementi; x++)
        if (ar[x] > max)
        {
            max = ar[x];
        }
    printArray();
    cout << "Il numero maggiore è " << max;
}

void numMinore()
{
    int min = ar[0];
    for (int x = 1; x < numElementi; x++)
        if (ar[x] < min)
        {
            min = ar[x];
        }
    printArray();
    cout << "Il numero maggiore è " << min;
}

void piuPresente() // !!!!WIP!!!!
{
    int qtArray[numElementi];
    
    for (int i = 0; i < numElementi - 1; i++)
        qtArray[i]=0;
    
    arrCrescente();
    printArray();
    for (int x = 0; x < numElementi - 1; x++)
        for (int i = x+1; i < numElementi; i++)
        {
            if (ar[x] == ar[i])
                qtArray[x]+=1;
        }
    int max;
    for (int x = 0; x < numElementi; x++)
        for (int i = x+1; i < numElementi; i++);
            if (qtArray[y]>qtArray[x])
                
    cout << "\n";
}

void arrSomma()
{
    int sum = ar[0];
    for (int i = 1; i < numElementi; i++)
        sum += ar[i];

    printArray();
    cout << "La somma dei valori dell'array equivale a: " << sum << endl;
}

void numPari()
{
    for (int i = 0; i < numElementi; i++)
        if (ar[i] % 2 == 0)
            cout << ar[i] << " ";
    cout << "\n";
}

void maggInserito()
{
    int valore;
    cout << "Inserire un valore: ";
    cin >> valore;

    for (int i = 0; i < numElementi; i++)
        if (ar[i] > valore)
            cout << ar[i] << " ";
    cout << "\n";
}

void printNeg() 
{
    for (int i = 0; i < numElementi; i++)
    {
        if (ar[i]<0)
            cout<<"NEG ";
        else
            cout<<ar[i]<<" ";
    }
    cout<<"\n";
}

void setteValori()
{
    int count;
    for (int x = 0; x < numElementi - 1; x++)
    {
        for (int y = 0; y < numElementi - 1; y++)
            if (ar[y] != ar[y + 1])
                count++;
    }
    printArray();
    if (count>=7)
        cout<<"Sono presenti 7 valori distinti."<<endl;
    else
        cout<<"Non sono presenti 7 valori distinti."<<endl;
}

void numPosNegNull()
{
    int null=0, pos=0, neg=0;

    for (int i = 0; i < numElementi; i++)
        if (ar[i] == 0)
            null++;
        else if (ar[i] > 0)
            pos++;
        else
            neg++;

    printArray();    
    cout<<"Ci sono "<<pos<<" numeri positivi, "<<neg<<" numeri negativi e "<<null<<" nulli. \n";
}

int main()
{   
    char risposta;
    
    do
    {
        system("clear");
        int scelta;
        
        riempiArray();
        
        cout<<"### Programma multiuso sugli array ###"<<endl;
        menuScelta();
        
        do
        {
            cout<<"Inserire la propria scelta [1-13]: ";
            cin>>scelta;
        } while (scelta < 1 || scelta > 13);
        
        switch (scelta)
        {
        case 1:
            arrCrescente();
            break;
        case 2:
            arrDecrescente();
            break;
        case 3:
            numMaggiore();
            break;
        case 4:
            numMinore();
            break;
        case 5:
            piuPresente();
            break;
        case 6:
            arrSomma();
            break;
        case 7:
            numPari();
            break;
        case 8:
            maggInserito();
            break;
        case 9:
            setteValori();
            break;
        case 10:
            printNeg();
            break;
        case 11:
            arrCrescente();
            break;
        case 12:
            numPosNegNull();
            break;
        case 13:
            arrCrescente();
            break;

        default:
            break;
        }

        cout<<"Vuoi continuare con un'altra operazione? [Y/n] ";
        cin>>risposta;

    } while (risposta=='y');
}
