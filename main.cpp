#include <iostream>
using namespace std;

int main()
{
    int uang;
    cout << "Masukkan total uang kembalian: ";
    cin >> uang;

    if (uang % 100 == 0)
    {
        const int PECAHAN[8] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 100};
        int lembaran[8] = {};

        while (uang > 0)
        {
            for (int i = 0; i < 8; i++)
            {
                if (uang >= PECAHAN[i])
                {
                    lembaran[i]++;
                    uang -= PECAHAN[i];
                    break;
                }
            }
        }

        for (int i = 0; i < 8; i++)
        {
            if (!lembaran[i])
                continue;
            cout << lembaran[i] << " lembar pecahan " << PECAHAN[i] << endl;
        }
    }
    else
    {
        cout << "Nominal uang kembalian tidak valid" << endl;
    }

    return 0;
}
