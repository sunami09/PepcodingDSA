/*
Print Increasing Decreasing : https://nados.io/question/print-increasing-decreasing

1. You are given a positive number n.
2. You are required to print the counting from n to 1 and back to n again.
3. You are required to not use any loops. Complete the body of pdi function to achieve it. Don't change the signature of the function.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

Constraints
1 <= n <= 1000

Format
Input
A number n

Output
n
n - 1
n - 2
..
1
1
2
3
..
n

Example
Sample Input

3

Sample Output
3
2
1
1
2
3
*/

#include <iostream>
using namespace std;

void printIncDec(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << n << endl;

    printIncDec(n - 1);

    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    printIncDec(n);
}