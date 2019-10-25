#include <iostream>
using namespace std;

int main()
{
    char NAMAKU [5] = { 'A', 'L', 'B', 'I', '\0'};
    char NAMAMU [5] = "ALBI";

    for (int C=0; C<4; C++)
    {
        cout << NAMAKU [C];
    }

    cout << endl;
    cout << NAMAMU;
    cout << endl << endl;
    cout << "Jumalh Elemen NAMAKU :" << sizeof (NAMAKU) << endl;
    cout << "Jumlah Elemen NAMAMU :" << sizeof (NAMAMU) << endl << endl;

    return 0;
}
