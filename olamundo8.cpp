// usando while  C++
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int opcao = 0;

    while( 0 == 0 )
    {
        cout << "Menu de Opções" << endl << endl;;
        cout << "1 - Opção 1 " << endl;
        cout << "2 - Opção 2 " << endl;
        cout << "3 - Opção 3 " << endl;
        cout << "4 - Encerrar " << endl;

        cin >> opcao;
        cout << endl;


        if( opcao == 4 )
          break; 
        
    }


    return 0;
}