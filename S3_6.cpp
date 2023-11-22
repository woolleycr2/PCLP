#include <iostream>
using namespace std;

int main()
{
    int v[3], maximum=0;
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    for (int i = 0; i < 3; i++)
        if (v[i] > maximum)
            maximum = v[i];
    cout<<maximum;
}