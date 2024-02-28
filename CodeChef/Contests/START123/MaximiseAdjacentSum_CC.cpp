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
You are given an array
�
A of size
�
N
(
�
≥
2
)
(N≥2).

We define
�
(
�
)
=
∑
�
=
1
�
−
1
(
�
�
+
�
�
+
1
)
f(A)=∑
i=1
N−1
​
 (A
i
​
 +A
i+1
​
 ).

Find the maximum value of
�
(
�
)
f(A) you can obtain by rearranging the elements of
�
A in any arbitrary order.

Input Format
The first line of input will contain a single integer
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains one integer,
�
N, the size of the array.
The next line contains
�
N space-separated integers,
�
1
,
�
2
,
…
,
�
�
A
1
​
 ,A
2
​
 ,…,A
N
​
 .
Output Format
For each test case, output on a new line, the maximum value of
�
(
�
)
f(A) you can obtain by rearranging the elements of
�
A in any arbitrary order.

Constraints
1
≤
�
≤
2
⋅
1
0
4
1≤T≤2⋅10
4

2
≤
�
≤
1
0
5
2≤N≤10
5

1
≤
�
�
≤
1
0
4
1≤A
i
​
 ≤10
4

The sum of
�
N over all test cases does not exceed
1
0
5
10
5
 .
*/



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi A;
        int sum=0;
        while(n--){
            int r;
            cin>>r;
            sum+=2*r;
            A.pb(r);
        }

        if(A.size()<=2){
            cout<<sum/2<<endl;
        }

        else {
            sort(A.begin(),A.end());
            cout<<sum-A[0]-A[1]<<endl;
        }
    }
    return 0;
}