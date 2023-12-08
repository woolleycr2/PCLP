#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char c[100];
    cin.get(c, 20);
    int k = strlen(c);
    int j = 0;
    for (int i = 0; i <= strlen(c); i++)
    {
        for (j = k; j <= strlen(c); j++)
            cout << c[j];
        k--;
        cout << endl;
    }
}