#include <iostream>
using namespace std;

int main()
{
    int t[24], nr_neg = 0, nr_poz = 0, s_neg = 0, s_poz = 0;
    for (int i = 0; i <= 24;i++)
        cin >> t[i];
    for (int i = 0; i <= 24;i++)
        if(t[i]<0)
        {
            s_neg = s_neg + t[i];
            nr_neg++;
        }
        else
        {
            s_poz = s_poz + t[i];
            nr_poz++;
        }
    cout << "Media temp. negative=" << s_neg / nr_neg;
    cout << endl;
    cout << "Media temp. pozitive=" << s_poz / nr_poz;
}