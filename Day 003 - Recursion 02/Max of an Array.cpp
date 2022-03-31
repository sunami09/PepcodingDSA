/*

Max Of An Array :https://nados.io/question/max-of-an-array

1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the maximum of input.
4. For the purpose complete the body of maxOfArray function. Don't change the signature.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

Constraints
1 <= n <= 10^4
0 <= n1, n2, .. n elements <= 10 ^9

Format
Input
A number n
n1
n2
.. n number of elements

Output
A number representing max

Example
Sample Input

6
15
30
40
4
11
9

Sample Output
40
*/

#include <iostream>
using namespace std;

int max(int arr[], int idx, int n)
{
    if (idx == n - 1)
    {
        return arr[idx];
    }

    int ans = max(arr, idx + 1, n);

    if (arr[idx] > ans)
    {
        return arr[idx];
    }
    else
    {
        return ans;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}