// função com numero de argumentos variável
#include <iostream>
#include <conio.h>
#include <stdarg.h>

using namespace std;

int soma( const int numArgs, ... );

int main() 
{
    cout << "Soma de numeros com numero de argumentos variavel" << endl;
    cout << soma( 3, 10, 20, 30 ) << endl; // Soma de 3 numeros

    getch();
    return 0;
}

int soma( const int numArgs, ... )
{
    int total = 0;
    va_list args;
    va_start(args, numArgs);
    
    for (int i = 0; i < numArgs; ++i)
    {
        total += va_arg(args, int);
    }
    
    va_end(args);
    // Retorna a soma dos argumentos    
    return total;

    
}