#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char c[100];
    int j, k = 0;
    cin.get(c, 20);
    for (int i = 0; i <= strlen(c); i++)
    {
        if (k == strlen(c))
            break;
        for (j = 0; j <= k; j++)
            cout << c[j];
        k++;
        cout << endl;
    }
}