#include <iostream>
using namespace std;

int main()
{
    int pilihan;

    cout << "Staf Pengajar Pemerograman C++ :"<< endl;
    cout << "================================"<< endl;
    cout << "1.Nur Alamsyah     \n";
    cout << "2.Haldi Budiman    \n";
    cout << "3.Yusri Ikhwani    \n";
    cout << "4.Dessy Wundandari \n";
    cout << "5.Rais fathony     \n";
    cout << "6.Aulia Rahman     \n";
    cout << "7.Zainuddin        \n";
    cout << "8.Wagino           \n";
    cout << "9.Rasyidan         \n";
    cout << "10.Ramdhani        \n";

    cout << "Staf Pengajar Pemerograman C++ :";
    cin >> pilihan;
    cout << endl;


    switch (pilihan)
    {
    case 1:
        cout << "Pilihan anda benar   \n";
        break;
    case 2:
        cout << "Pilihan anda benar   \n";
        break;
    case 3:
        cout << "Pilihan anda salah   \n";
        break;
    case 4:
        cout << "Pilihan anda salah   \n";
        break;
    case 5:
        cout << "Pilihan anda benar   \n";
        break;
    case 6:
        cout << "Pilihan anda salah   \n";
        break;
    case 7:
        cout << "Pilihan anda benar   \n";
        break;
    case 8:
        cout << "Pilihan anda benar   \n";
        break;
    case 9:
        cout << "Pilihan anda salah   \n";
        break;
    case 10:
        cout << "Pilihan anda benar   \n";
        break;
    default:
        cout << "Pilihan anda tidak ada dalam daftar \n";


        }
    return 0;
}
