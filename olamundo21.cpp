// Orentação a objetos em C++ - Basic samples
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// declando a classe Pessoa
class Pessoa 
{
    public:
        // atributos da classe Pessoa
        int id;
        string nome;
        int idade;

};

int main()
{
    // criando um objeto da classe Pessoa
    Pessoa cliente;
    // atribuind atributos do objeto
    cliente.id = 1;
    cliente.nome = "Maria";
    cliente.idade = 25;
    // exibindo os valores dos atributos do objeto
    cout << "Id: " << cliente.id << endl;
    cout << "Nome: " << cliente.nome << endl;
    cout << "Idade: " << cliente.idade << endl;

    
    getch();
    return 0;

}
