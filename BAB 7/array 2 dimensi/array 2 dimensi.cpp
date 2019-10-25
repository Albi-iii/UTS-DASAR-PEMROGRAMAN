#include <iostream>
using namespace std;

int main()
{
    typedef int matriks [3] [2];
    matriks A, B, C;
    int j, k;

    //nilai apada elemen A
    cout << "matriks A :" << endl;
    for (j=0; j<3; j++)
    {
        for (k=0; k<2; k++)
    {
      cout << "A ["<< j <<"] ["<< k <<"] = ";// menghasilkan hasil inputan matriks
                cin >> A [j] [k]; // inputan dari matriks A
    }
    }
    cout << endl;
    //nilai pada elemen B
    cout << "matriks B :" << endl;
    for (j=0; j<3; j++)
    {
        for (k=0; k<2; k++)
        {
            cout << "B ["<< j << "] ["<< k << "] = ";
                cin >> B [j] [k];
        }
    }
    cout << endl;
    cout << endl;

    //proses penjumlaham A dan B
    for (j=0; j<3; j++)
    {
        for (k=0; k<3; j++)
        {
            C [j] [k] = A[j] [k] + B[j] [k];
        }
    }

    //menampilakan hasil penjumlahan
    cout << "Hasil Penjumalahan Matriks :" << endl;
    for (j=0; j<3; j++)
    {
        for (k=0; k<2; k++)
        {
            cout << " C ["<< j <<"] ["<< k <<"] = "<< C [j] [k] << endl;
        }
    }

    cout << endl;
    return 0;
}
