/* em C
#include <stdio.h>

int main(void)
{
    puts("Ola Mundo!");
    return 0;
}
*/

/* em C++
#include <iostream>

int main(void)
{
    std::cout << "Ola Mundo C++!" << std::endl;
    return 0;
}
*/

// em C++ com  namespace std
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int numero = 10; // Exemplo de variável 
    float pi = 3.1415; // Exemplo de variável float
    double numero_grande = 999999999999999999999999999999999.99999999; //Exemplo de variável double
    char letra = 'A'; // Exemplo de variável char
    
    string nome = "João"; // Exemplo de variável string

    
    cout << "O número é " << numero << endl;
    cout << "O valor de PI é " << pi << endl;
    cout << "O número grande é " << numero_grande << endl;
    cout << "A letra é " << letra << endl;

    cout << "O nome é " << nome << endl;


    return 0;
}

