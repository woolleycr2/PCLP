#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100);
    bool numar = false;
    for (int i = 0; i <= strlen(s) - 1; i++)
    {
        if (isdigit(s[i]))
            numar = true;
        else
            numar = false;
    }
    if (numar)
        cout << "Sirul este un numar";
}