#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char c[100];
    cin.get(c, 20);
    int k = strlen(c);
    cout << endl;
    for (int i = 0; i <= strlen(c); i++)
    {
        k--;
        for (int j = 0; j <= k;j++)
            cout << c[j];
        cout << endl;
    }
}