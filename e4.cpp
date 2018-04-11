#include <iostream>

using namespace std;
void multipla_matrices(int a[4][4], int b[4][4], int c[4][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k]*b[k][j];
        }
    }
}
int main()
{
    int N = 4;
    int a[4][4] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    int b[4][4] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    int c[4][4];
    multipla_matrices(a, b, c ,N);
    for (int i = 0; i < N; i++) {
	    for(int j = 0; j < N; j++) {
		    cout<<c[i][j];
	    }
	    cout<<endl;
    }
    return 0;
}
