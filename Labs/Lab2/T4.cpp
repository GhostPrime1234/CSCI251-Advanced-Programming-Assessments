#include <iostream>
#include <iomanip>
using namespace std;

void multiplyMatrices(float M1[][10], float M2[][10], int M1_rows, int M1_cols, int M2_rows, int M2_cols)
{
    if (M1_cols != M2_rows)
    {
        cerr << "Invalid Matrix Dimensions" << endl;
        return;
    }

    // Resultant matrix M3 will have dimensions M1_rows x M2_cols
    float M3[10][10] = {0};

    // Perform matrix multiplication
    for (int i = 0; i < M1_rows; i++)
        for (int j = 0; j < M2_cols; j++)
        {
            for (int k = 0; k < M1_cols; k++)
            {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }

    // Print the resultant matrix M3
    for (int i = 0; i < M1_rows; ++i)
    {
        for (int j = 0; j < M2_cols; ++j)
        {
            cout << fixed << setprecision(2) << M3[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    float M1[10][10] = {{0.1067, 0.7749}, {0.9619, 0.8173}, {0.0046, 0.8687}};
    float M2[10][10] = {{0.0844, 0.2599}, {0.3998, 0.8001}};

    // Displaying the multiplication of two matrix.
    multiplyMatrices(M1, M2, 3, 2, 2, 2);

    return 0;
}