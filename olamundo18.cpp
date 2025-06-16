// passagem de parâmetros por referencia - C / C++
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/* declaração da função mostra_numero
void mostra_numero( int numero );


int main()
{
    int numero = 10;
    mostra_numero( numero );

    cout << "O numero na main: " << numero << endl;

    getch();
    return 0;
}

// implementação da função mostra_numero
void mostra_numero( int numero )
{
    numero++;
    cout << "Número +1 = " << numero << endl;
}
*/

// passagem de parâmetros por ponteiro 
void mostra_numero( int *numero );
int main()
{
    int numero = 10;
    mostra_numero( &numero );

    cout << "O numero na main: " << numero << endl;

    getch();
    return 0;
}

void mostra_numero( int *numero )
{
    ++*numero;
    cout << "Número +1 = " << *numero << endl;
}