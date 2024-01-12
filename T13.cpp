#include <iostream>
using namespace std;

int main()
{
    int n, s=0;
    cin >> n;
    if(n>999&&n<=9999)
    {
        s = (n % 10) + (n / 1000);
        cout << s;
    }
    else
        cout << "Numarul citit nu are 4 cifre.";
}