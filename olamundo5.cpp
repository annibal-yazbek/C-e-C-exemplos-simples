// operadores lógicos if - C++
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

/* 
== igual
!= ou <> diferente
< menor que
<= menor ou igual
> maior que
>= maior ou igual
*/



    if( numero == 10 )
        cout << "O número é igual a 10" ;
    else 
        if( numero < 10 )
            cout << "O número é menor que 10";
        else
            cout << "O número é maior que 10";

    getch();


    return 0;
}