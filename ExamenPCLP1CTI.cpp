#include <iostream>
using namespace std;

int main()
{
    int n, k = 0, a[10][10];
    cin >> n;
    for (int i = 0; i <= n;i++)
    {
        for (int j = 0; j <= n;j++)
            a[i][j] = k;
        k++;
    }

    for (int i = 0; i <= n;i++)
    {
        for (int j = 0; j <= n;j++)
            cout << a[i][j]<<" ";
    }
}