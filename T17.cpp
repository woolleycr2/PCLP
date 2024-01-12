#include <iostream>
using namespace std;

int main()
{
    int n, s_pare = 0, s_impare = 0;
    cin >> n;
    int v[n];
    for (int i = 0; i <= n; i++)
        cin >> v[i];
    for (int i = 0; i <= n; i++)
        if (i % 2 == 0)
            s_pare = s_pare + v[i];
        else
            s_impare = s_impare + v[i];
    cout << "Suma elementelor de pe pozitii pare=" << s_pare;
    cout << endl;
    cout << "Suma elementelor de pe pozitii impare=" << s_impare;
}