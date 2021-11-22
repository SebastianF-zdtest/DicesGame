#include <iostream>
#include <ctime> //time(NULL)
#include <cstdlib> //rand
using namespace std;

int main()
{

    int ile = 0;
    cout << "\t\t\tSYMULACJA RZUTU KOSTKA" << endl;
    cout << "\t\t\t----------------------\n\n" << endl;
    cout << "Ile razy chcesz rzucic kostka:";
    cin >> ile;
    srand( time( NULL ) );
    for( int i = 1; i < 2; ++i )
    {
        int rzut[ ile ];
        rzut[ i ] = rand() % 6 + 1;
        cout << "Rzut nr.[" << i << "] = " << rzut[ i ] << endl;
    }

    cin.get();
    cin.get();
    return 0;
}
