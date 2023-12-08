#include <iostream>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100);
    char sep[] = " ";
    char *p = strtok(s, sep);
    while (p != NULL)
    {
        cout << p << endl;
        p = strtok(NULL, sep);
    }
}