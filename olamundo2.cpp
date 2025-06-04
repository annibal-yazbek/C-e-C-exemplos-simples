/* entrada de dados em C*
#include <stdio.h>
#include <conio.h>

int main( void )
{
    char nome[30];

    printf("Qual o seu nome? ");
    gets( nome );

    printf( "O nome digitado foi %s", nome );

    return 0;
}
*/

// Entrada de dados em C++
#include <iostream>

using namespace std;

int main()
{
    int valor;

    cout << "Digite um valor: ";
    cin >> valor;
    cout << "O valor digitado foi: " << valor << endl;

    return 0;

}
