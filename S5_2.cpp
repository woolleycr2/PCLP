#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char c[100];
    int i = 0;
    cout << "Introduceti sirul de caractere:";
    cin.get(c, 20);
    while (c[i] != 0)
    {
        if (c[i] >= 97 && c[i] <= 122)
            c[i] = c[i] - 32;
        i++;
    }
    cout << c;
}