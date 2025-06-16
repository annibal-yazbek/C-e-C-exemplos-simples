// sobrecarga de funcoes C++
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


void mostra_numero( int numero );
void mostra_numero( string mensagem );

int main()
{
    int numero = 10;
    mostra_numero( numero );

    cout << "O numero na main: " << numero << endl;
    
    mostra_numero( "Mensagem de teste" );

    getch();
    return 0;
}

void mostra_numero( int numero )
{
    ++numero;
    cout << "Número +1 = " << numero << endl;
}

void mostra_numero( string mensagem )
{
    cout << "Mensagem: " << mensagem << endl;
}
