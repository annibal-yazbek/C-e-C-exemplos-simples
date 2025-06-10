// Funções  em C / C++
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// decalara função para somar dois números
int soma ( int a, int b );

// decalara função para mostrar mensagem na tela 
void mostra ( string msg );

// declara função tabuada
void tabuada ( int n );

int main()
{
    int n;
    mostra ( "Exemplo de Função: ");
    cout << soma ( 6, 5 ) << endl << endl;;
    cout << "Digite um número para ver a tabuada: ";
    cin >> n;
    cout << endl;
    tabuada ( n );
    mostra ( "Fim do programa." );



    getch();
    return 0;
}

// define função soma
int soma ( int a, int b )
{
    return ( a + b );
}

// define função mostra
void mostra ( string msg )
{
    cout << endl;
    cout << msg  << endl;
    cout << endl;
}

// define função tabuada
void tabuada ( int n )
{
    for ( int i = 0; i <=10; i++ )
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}