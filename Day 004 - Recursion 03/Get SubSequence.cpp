/*
Get Subsequence: https://nados.io/question/get-subsequence

1. You are given a string str. 2. Complete the body of getSS function - without changing signature - to calculate all subsequences of str. Use sample input and output to take idea about subsequences. Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.


Constraints
0 <= str.length <= 20


Format
Input
A string str


Output
Contents of the arraylist containing subsequences as shown in sample output


Example
Sample Input

abc

Sample Output
[, c, b, bc, a, ac, ab, abc]
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<string> gss(string s)
{

    if (s.length() == 0)
    {
        return {""};
    }

    string sub = s.substr(1);
    vector<string> rem = gss(sub);
    vector<string> ans;
    for (string str : rem)
    {
        ans.push_back("" + str);
    }
    for (string str : rem)
    {
        ans.push_back(s[0] + str);
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}