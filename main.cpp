#include <iostream>
using namespace std;
int main() 
{
    int n, i;
    float numero, max;
    do 
    {
        cout<<"quanti numeri vuoi generare?" << endl;
        cin >> n;
    }
    while (n<1);
    for(i=1; i<=n; i++)
    {
     cout << "inserisci numero" << endl;
     cin >> numero;
     if (i==1)
     {
        max = numero;
     }
     else
     {
        if (numero>max)
        {
            max= numero;
        }
        
     }
     
    }
   cout << "il numero maggiore è " << max << endl; 

}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
