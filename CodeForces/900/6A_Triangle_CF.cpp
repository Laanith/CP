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
Johnny has a younger sister Anne, who is very clever and smart. As she came home from the kindergarten, she told his brother about the task that her kindergartener asked her to solve. The task was just to construct a triangle out of four sticks of different colours. Naturally, one of the sticks is extra. It is not allowed to break the sticks or use their partial length. Anne has perfectly solved this task, now she is asking Johnny to do the same.

The boy answered that he would cope with it without any difficulty. However, after a while he found out that different tricky things can occur. It can happen that it is impossible to construct a triangle of a positive area, but it is possible to construct a degenerate triangle. It can be so, that it is impossible to construct a degenerate triangle even. As Johnny is very lazy, he does not want to consider such a big amount of cases, he asks you to help him.

Input
The first line of the input contains four space-separated positive integer numbers not exceeding 100 — lengths of the sticks.

Output
Output TRIANGLE if it is possible to construct a non-degenerate triangle. Output SEGMENT if the first case cannot take place and it is possible to construct a degenerate triangle. Output IMPOSSIBLE if it is impossible to construct any triangle. Remember that you are to use three sticks. It is not allowed to break the sticks or use their partial length.
*/

bool triangle(int a,int b,int c){
    return ((a<b+c)&&(b<c+a)&&(c<a+b));
}


bool degenerate(int a,int b,int c){
    return ((a==b+c)||(b==c+a)||(c==a+b));
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    bool tri = false;
    bool deg = false;
    tri = tri || triangle(a,b,c);
    tri = tri || triangle(d,b,c);
    tri = tri || triangle(a,b,d);
    tri = tri || triangle(a,c,d);


    deg = deg || degenerate(a,b,c);
    deg = deg || degenerate(d,b,c);
    deg = deg || degenerate(a,b,d);
    deg = deg || degenerate(a,c,d);

    if(tri) cout<<"TRIANGLE"<<endl;
    else if(deg) cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;

    return 0;
}