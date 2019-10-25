#include <iostream>
using namespace std;

int main()
{
    int kode;

    cout << "1 = senin 2 = selasa 3 = rabu 4 = kamis" << endl;
    cout << "5 = jumat 6 = sabtu 7 = minggu" << endl;
    cout << "masukan kode hari (1-7) :";

    switch (kode)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "hari kerja" << endl;
        break;
    case 6:
    case 7:
        cout << "hari libur" << endl;
        break;
    default:
        cout << "kode hari tidak valid" << endl;

    }
    return 0;
}
