// usando arrays  C++
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // array de inteiros
    int matriz[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    // alterando elemento de indice 2 
    matriz[2] = 333;

    // array de char
    char matriz2[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };

    // array de char como  string (1 byte a mais /0 fim de array)
    char matriz3[11] = "abcdefghij";

    // outra forma
    char matriz4[13] = "abcdefghij";
    matriz4[10] = 'k'; // adicionando mais um elemento
    matriz4[11] = 'l'; // adicionando mais um elemento

    // alocação dinamica
    char matriz5[] = "abcdefghij";
    



    // mostrando no console
    for( int i = 0; i < 10; i++ )
    {
        cout << matriz[i] << endl;
    }
    cout << endl;

    for ( int i = 0; i < 10; i++ )
    {
        cout << matriz2[i] << endl;
    }
    cout << endl;

    for ( int i = 0; i < 10; i++ )
    {
        cout << matriz3[i] << endl;
    }
    cout << endl;

    for ( int i = 0; i < 12; i++ )
    {
        cout << matriz4[i] << endl;
    }
    cout << endl;

    for ( int i = 0; i < sizeof( matriz5 ) - 1 ; i++ )
    {
        cout << matriz5[i] << endl;
    }

    cout << endl <<endl;
    
    // tamanho do array
    cout << "tamanho da matriz4 = " << sizeof( matriz4 ) << endl;
    cout << "tamanho da matriz5 = " << sizeof( matriz5 ) << endl;

    
    
    getch();
    return 0;
}