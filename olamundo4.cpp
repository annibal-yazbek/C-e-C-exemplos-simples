// operadores aritiméticos  C++
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    float af, bf;

    int adicao, subtracao, multiplicacao;
    float divisao, divisaof, resto;

    a = 5;
    b = 2;
    af = 5;
    bf = 2;

    adicao = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    divisaof = af / bf;
    resto = a % b;

    cout << "Adição: " << adicao << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    cout << "Divisão (inteiro): " << divisao << endl;
    cout << "Divisao (com float): " << divisaof << endl;
    cout << "Resto (modulo): " << resto << endl;

    return 0;

}