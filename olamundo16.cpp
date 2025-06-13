// templates em C++
#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPO>
TIPO funcao( TIPO n );

int main()
{
    cout << funcao( 10 ) << endl;
    cout << funcao( 3.0 ) << endl;
    cout << funcao( 3.14159265358979323846 ) << endl;

    getch();
    return 0;
}

template <class TIPO>
TIPO funcao( TIPO n)
    {
        cout << typeid( n ).name() << endl;
        return ++n;
    }
