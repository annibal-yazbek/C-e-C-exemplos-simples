// manipulando variaveis C++ - entre 2 valores e troca variavel
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Entre com o valor de A: " ;
    cin >> a;
    
    cout << "Entre com o valor de B: " ;
    cin >> b;

    c = a;
    a = b;
    b = c;
    
    cout << "O valor de A é: " << a << endl;
    cout << "O valor de B é: " << b << endl;

//  espera uma entrada de teclado para fechar a janela
    getch();


    return 0;

}