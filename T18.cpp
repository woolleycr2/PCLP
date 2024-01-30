#include <iostream>
using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    int v[n];
    for (int i = 0; i <= n;i++)
    {
        cin >> v[i];
        if (v[i] > 65 && v[i] < 99)
            k++;
    }
    cout << k;
}