// loop for em C++
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    for( int i = 0; i < 10; i++ )
        {
            for( int j = 0; j < 10; j++ )
                {
                    cout << "( " << i  << "," << j << " ) ";
                }
            cout << endl;
        }

    getch();    

    return 0;
}