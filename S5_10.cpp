#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char s[70];
    int nr = 0;
    bool a = false;
    cin.getline(s, 70);
    char sep[] = " ";
    char *p = strtok(s, sep);
    while (p != NULL)
    {
        a = false;
        for (int i = 0; i <= strlen(p); i++)
            if (p[i] == 'a')
                a = true;
        if (a)
            nr++;
        p = strtok(NULL, sep);
    }
    cout << nr;
}