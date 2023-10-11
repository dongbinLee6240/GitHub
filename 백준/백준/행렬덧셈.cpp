#include<iostream>
using namespace std;

int main()
{
    int N = 0;
    int M = 0;
    cin >> N >> M;  // Fix: Use >> for both N and M
    int A[101][101];
    int B[101][101];
    int Res[101][101];

    // Input matrices A and B
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> B[i][j];
        }
    }

    // Matrix addition and output
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            Res[i][j] = A[i][j] + B[i][j];
            cout << Res[i][j] << " ";  // Add space for better formatting
        }
        cout << endl;  // Move to the next line for the next row
    }

    return 0;
}
