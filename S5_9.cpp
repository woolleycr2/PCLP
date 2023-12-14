#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    char b[100];
    char rim_a[3], rim_b[3];
    cin.getline(a, 100);
    cin.getline(b, 100);
    rim_a[0] = a[strlen(a) - 1];
    rim_a[1] = a[strlen(a) - 2];
    rim_a[2] = '\0';
    rim_b[0] = b[strlen(b) - 1];
    rim_b[1] = b[strlen(b) - 2];
    rim_b[2] = '\0';
    if (strcmp(rim_a, rim_b) == 0)
        cout << "Cuvintele rimeaza";
}