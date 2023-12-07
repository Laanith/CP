#include<bits/stdc++.h>
#define ll long long
#include<algorithm>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define PYES cout<<"YES"<<endl
#define PNO cout<<"NO"<<endl
#define vs vector<string>
#define qi queue<int>
#define si stack<int>
#define pi pair<int,int>
#define ima INT_MAX
#define imi INT_MIN
#define siz size()
#define pb push_back()
using namespace std;
void pv(vi A){cout << endl;for(auto x : A) cout << x <<' ';cout << endl;}
void pint(int A){cout<<endl<<A<<endl;}
void pp(pair<int,int> p){cout<<p.first<<' '<<p.second<<endl;}

/*!SECTION : Problem Description ::
The rook is a piece in the game of chess. During its turn, it may move any non-zero number of squares horizontally or vertically. Your task is to find all possible moves for a rook on an empty chessboard.

Input
The first line of input contains single integer t
 (1≤t≤64
) — the number of test cases. The descriptions of test cases follow.

Each test case contains one string of two characters, description of the square where rook is positioned. The first character is a letter from a to h, the label of column, and the second character is a digit from 1 to 8, the label of row.

The same position may occur in more than one test case.

Output
For each test case, output descriptions of all squares where the rook can move, in the same format as in the input.

You can output squares in any order per test case.

Example ::
input :

1
d5

output :
d1
d2
b5
g5
h5
d3
e5
f5
d8
a5
d6
d7
c5
d4


*/

class Solution{
public :

};
 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
auto S = new Solution();

int t;
cin >> t;
while(t--){
    string pos;
    cin >> pos;
    char letter = pos[0];
    int num = pos[1]-'0';
    cout << letter << " " << num << endl;
    vi NUM_ARR = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<char> LETTER_ARR = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    for(auto x : LETTER_ARR){
        if(x==letter){
            continue;
        }
        cout << x << num << endl;
    }
    for(auto x : NUM_ARR){
        if(x==num){
            continue;
        }
        cout << letter << x << endl;
    }
}
return 0 ; 
}

