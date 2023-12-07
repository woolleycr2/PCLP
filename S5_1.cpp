#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char c[100], d[100];
    int i = 0;
    cout << "Introduceti numele colegului:";
    cin.get(c, 20);
    cout << "Sirul introdus este:" << c << endl;
    cin.get();
    cout << "Incearca sa ghicesti numele colegului:";
    cin.get(d, 20);
    cin.get();
    i++;
    while (strcmp(c, d) != 0)
    {
        cout << "Ai gresit, mai incearca:";
        cin.get(d, 20);
        cin.get();
        i++;
    }
    cout << "Bravo, ai ghicit din " << i << " incercari - numele colegului era: " << c;
    return 0;
}