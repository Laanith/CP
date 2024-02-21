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
Problem Reviews
Om Khangat has come up with a problem that he thinks can be used in a CodeChef contest, and has submitted his proposal for review.

CodeChef's review panel has
�
N judges, each of whom will give Om's problem a point value between
1
1 and
10
10, denoting how good they think it is (
1
1 being the lowest, and
10
10 the highest).
A problem is considered good if and only if every judge gives it a score that's strictly greater than
4
4.

You know the point values given by each judge to Om's problem. Can you tell whether his problem is good?

Input Format
The first line of input will contain a single integer
�
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains one integer
�
N — the number of judges.
The next line contains
�
N space-separated integers
�
1
,
�
2
,
�
3
,
…
,
�
�
S
1
​
 ,S
2
​
 ,S
3
​
 ,…,S
N
​
  — where
�
�
S
i
​
  denotes the score given to Om's problem by the
�
i-th judge.
Output Format
For each test case, print the answer on a new line: YES if Om's problem is good, and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase, i.e, the strings YES, yes, YeS, and yES will all be treated as equivalent.

Constraints
1
≤
�
≤
1000
1≤T≤1000
1
≤
�
≤
1000
1≤N≤1000
1
≤
�
�
≤
10
1≤S
i
​
 ≤10
The sum of
�
N across all tests won't exceed
2000
2000.
Sample 1:
Input
Output
3
4
3 5 6 9
3
8 7 8
4
10 9 10 4
NO
YES
NO
Explanation:
Test case
1
1: We have
�
=
[
3
,
5
,
6
,
9
]
S=[3,5,6,9]. The first judge gave a score of
3
3, which isn't strictly greater than
4
4. So, Om's problem is not good.

Test case
2
2: We have
�
=
[
8
,
7
,
8
]
S=[8,7,8]. All the judges gave scores that are strictly greater than
4
4, so Om's problem is good.

Test case
3
3: We have
�
=
[
10
,
9
,
10
,
4
]
S=[10,9,10,4]. The last judge gave a score of
4
4, which isn't strictly greater than
4
4. So, Om's problem is not good.
*/



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        bool isgood = true;
        cin>>n;
        while(n--){
            int r;
            cin>>r;
            if(r<=4) {
                isgood = false;
            }
        }
        if(isgood) PYES;
        else PNO;

    }
    return 0;
}