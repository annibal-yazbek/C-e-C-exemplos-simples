// usando while  C++
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int numero = 0;
    cout << "numeros pares de 0 a 20" << endl;

    while( numero <= 20 )
    {
        
        cout << numero << endl;
        numero += 2;
         
        
    }

    getch();
    return 0;
}