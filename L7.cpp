#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    if (N >= 10)
    {
        cout << "Nr. de linii si coloane depaseste cerinta";
        return 0;
    }
    int A[N][N];
    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= N; j++)
            cin>>A[i][j];
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
}
