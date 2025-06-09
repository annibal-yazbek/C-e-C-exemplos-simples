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

//  definindo struct como array
    pessoas p[10];



    cout << "Id Pessoa 1 : " << pe1.pessoa_id << endl;
    cout << "Nome Pessoa 1 : " << pe1.nome << endl;
    cout << "Idade Pessoa 1 : " << pe1.idade << endl;

    cout << endl << endl;


//  loop para entrar struct em array com 3 elementos

    for( int i = 0; i < 3; i++)
    {
        cout << "Entre com o id da pessoa " << i + 1 << ": " ;
        cin >> ( p[i].pessoa_id );
        cout << "Entre com o nome da pessoa " << i + 1 << ": " ;
        cin >> ( p[i].nome );
        cout << "Entre com a idade da pessoa " << i + 1 << ": " ;
        cin >> ( p[i].idade );
        cout << endl;

    }

    //mostrando o array de structs

    for( int i = 0; i < 3; i++)
    {
        cout << "Id da pessoa " << i + 1 << ": " << p[i].pessoa_id << endl;
        cout << "Nome da pessoa " << i + 1 << ": " << p[i].nome << endl;
        cout << "Idade da pessoa " << i + 1 << ": " << p[i].idade << endl;
        cout << endl;

    }

    getch();



    return 0;

}