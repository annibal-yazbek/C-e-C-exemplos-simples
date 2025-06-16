// passagem de parâmetros por referencia -  C++
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


// passagem de parâmetros por referencia 
void mostra_numero( int & );

int main()
{
    int numero = 10;
    mostra_numero( numero );

    cout << "O numero na main: " << numero << endl;

    getch();
    return 0;
}

void mostra_numero( int &numero )
{
    ++numero;
    cout << "Número +1 = " << numero << endl;
}