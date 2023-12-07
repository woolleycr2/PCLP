#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char c[100];
    int i = 0;
    cin.get(c, 20);
    while (c[i] != 0)
    {
        if (c[i] >= 68 && c[i] <= 79)
            c[i] = c[i] + 32;
        else if (c[i] >= 102 && c[i] <= 116)
            c[i] = c[i] - 32;
        i++;
    }
    cout << c;
}