#include <bits/stdc++.h>
#define ll long long
#include <algorithm>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define vs vector<string>
#define qi queue<int>
#define si stack<int>
#define pi pair<int, int>
#define ima INT_MAX
#define imi INT_MIN
#define siz size()
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;
void pv(vi A)
{
    cout << endl;
    for (auto x : A)
        cout << x << ' ';
    cout << endl;
}
void pint(int A) { cout << endl
                        << A << endl; }
void pp(pair<int, int> p) { cout << p.first << ' ' << p.second << endl; }
void pvvi(vvi A)
{
    for (auto v : A)
    {
        pv(v);
    }
}

/*!SECTION : Problem Description ::
Work out the first ten digits of the sum of N 50 dight  numbers.

Input Format

First line contains , next  lines contain a 50 digit number each.

Constraints

Output Format

Print only first 10 digit of the final sum


*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<string> numbers(N);
    for (int i = 0; i < N; ++i)
        cin >> numbers[i];

    string sum(50, '0');
    int carry = 0;

    for (int col = numbers[0].length(); col >= 0; --col)
    {
        for (int i = 0; i < N; ++i)
            carry += numbers[i][col] - '0';
        sum[col] = (carry % 10) + '0';
        carry /= 10;
    }

    if (carry > 0)
        sum = to_string(carry) + sum;

    cout << sum.substr(0, 10);

    return 0;
}