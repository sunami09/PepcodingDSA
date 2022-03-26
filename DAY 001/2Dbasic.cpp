/*
https://nados.io/question/2d-arrays-demo

2D Arrays Demo

1. You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers, representing elements of 2d array a.
4. You are required to display the contents of 2d array as suggested by output format below.

Constraints
1 <= n <= 10^2
1 <= m <= 10^2
-10^9 <= e1, e2, .. n * m elements <= 10^9

Format
Input
A number n
A number m
e11
e12..
e21
e22..
.. n * m number of elements

Output
e11 e12 e13 ..
e21 e22 e23 ..

Example
Sample Input

2
4
11
12
13
14
21
22
23
24

Sample Output
11 12 13 14
21 22 23 24
*/

#include <iostream>
using namespace std;
int main()
{

    int n, m;

    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}