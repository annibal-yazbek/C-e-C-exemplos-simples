// ponteiros em C / C++
#include <iostream>
#include <conio.h>

using namespace std;

/*
HEAP - mem ponteiros

STACK - FIFO valores
numero = 5
*pointer

*/

int main()
{
    int numero = 5; // variavel normal
    int *ponteiro;  // define um ponteiro para inteiro

    ponteiro = &numero; // ponteiro recebe o endereco de numero

    cout << "Valor de numero: " << numero << endl; // mostra o valor de numero
    cout << "Endereço de memória de numero: " << &numero << endl; // mostra o endereco de numero

    cout << "Ponteiro -ponteiro- mostra o endereco de numero: " << ponteiro << endl; // mostra o endereco de numero
    cout << "Ponteiro -*ponteiro- mostra o valor de numero: " << *ponteiro << endl; // mostra o valor de numero
    
    getch(); // espera o usuario pressionar uma tecla
    return 0;
}