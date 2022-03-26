/*
https://nados.io/question/matrix-multiplication

Matrix Multiplication


1. You are given a number n1, representing the number of rows of 1st matrix.

2. You are given a number m1, representing the number of columns of 1st matrix.

3. You are given n1*m1 numbers, representing elements of 2d array a1.

4. You are given a number n2, representing the number of rows of 2nd matrix.

5. You are given a number m2, representing the number of columns of 2nd matrix.

6. You are given n2*m2 numbers, representing elements of 2d array a2.

7. If the two arrays representing two matrices of dimensions n1 * m1 and n2 * m2 can be multiplied, display the contents of product array as specified in output format.

8. If the two arrays can't be multiplied, print "Invalid input".


Constraints
1 <= n1 <= 10^2

1 <= m1 <= 10^2

-10^9 <= e11, e12, .. n1 * m1 elements <= 10^9

1 <= n2 <= 10^2

1 <= m2 <= 10^2

-10^9 <= e11', e12', .. n2 * m2 elements <= 10^9


Format
Input
A number n1

A number m1

e11 e12.. e21 e22.. .. n1 * m1 number of elements of array a1

A number n2

A number m2

e11' e12'.. e21' e22'.. .. n2 * m2 number of elements of array a2


Output
e11'' e12'' e13'' .. e21'' e22'' e23'' .. .. elements of prd array


Example
Sample Input

2
3
10
0
0
0
20
0
3
4
1
0
1
0
0
1
1
2
1
1
0
0

Sample Output
10 0 10 0
0 20 20 40
*/

#include <iostream>
#include <vector>

using namespace std;

void matrixMult(vector<vector<int>> A, vector<vector<int>> B)
{
    int n1 = A.size();
    int m1 = A[0].size();

    int n2 = B.size();
    int m2 = B[0].size();

    if (m1 != n2)
    {
        cout << "Invalid input" << endl;
    }
    else
    {
        int i = 0;
        int value = 0;
        while (i < n1)
        {
            for (int k = 0; k < m2; k++)
            {
                for (int j = 0; j < m1; j++)
                {
                    value += A[i][j] * B[j][k];
                }
                cout << value << " ";
                value = 0;
            }
            cout << endl;
            i++;
        }
    }
}

int main()
{
    int r1;
    int c1;
    cin >> r1;
    cin >> c1;

    vector<vector<int>> mat1;
    for (int i = 0; i < r1; i++)
    {
        vector<int> arr;
        for (int j = 0; j < c1; j++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        mat1.push_back(arr);
    }

    int r2;
    int c2;
    cin >> r2;
    cin >> c2;

    vector<vector<int>> mat2;
    for (int i = 0; i < r2; i++)
    {
        vector<int> arr;
        for (int j = 0; j < c2; j++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        mat2.push_back(arr);
    }

    matrixMult(mat1, mat2);
}