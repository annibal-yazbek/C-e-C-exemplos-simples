// usando switch case  C++
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero;

    cout << "Qual número deseja saber em inglês? (1 a 5) ";
    cin >> numero;

    switch( numero )
    {
        case 1 : cout << "One"; break;
        case 2 : cout << "Two"; break;
        case 3 : cout << "Three"; break;
        case 4 : cout << "Four"; break;
        case 5 : cout << "Five"; break;
        default :   
             cout << "Número fora do intervalo!";
             cout << endl;
        break;
    }
        
    getch();    
    return 0;

}