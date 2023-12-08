#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100);
    for (int i = 0; i <= strlen(s);i++)
    if(isalnum(s[i])==0)
        break;
        else
            cout << "Sirul introdus reprezinta un numar";
}