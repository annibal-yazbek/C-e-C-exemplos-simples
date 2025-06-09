// estrutura (struct) em C / C++

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct pessoas
{
    int pessoa_id;
    string nome;
    int idade;

};

int main() 
{

    pessoas pe1, pe2, pe3;

    pe1 = {1, "João", 25};
    pe2 = {2, "Maria", 20},
    pe3 = {3, "José", 30};

//   for( int i = 1; i <= 3; i++)

    cout << "Id Pessoa 1 : " << pe1.pessoa_id << endl;
    cout << "Nome Pessoa 1 : " << pe1.nome << endl;
    cout << "Idade Pessoa 1 : " << pe1.idade << endl;

    getch();



    return 0;

}