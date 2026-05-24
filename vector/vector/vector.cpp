#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int satir, sutun;
    vector<vector<int>> vektor;
    vector<int> sutunVektoru;

    cout << "Lutfen Satir ve Stunlari Giriniz:";
    cin >> satir >> sutun;
    for (int i = 0; i < satir; i++)
    {
        sutunVektoru.clear();
        for (int j = 0; j < sutun; j++)
        {
            sutunVektoru.push_back((i + 1) * j);
        }
        vektor.push_back(sutunVektoru);
    }

    for (int i = 0; i < (int)vektor.size(); i++)
    {
        for (int j = 0; j < (int)vektor[i].size(); j++)
        {
            cout << setw(3) << vektor[i][j];
        }
        cout << endl;
    }
    return 0;
}