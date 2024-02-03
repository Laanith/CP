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
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;
void pv(vi A){cout << endl;for(auto x : A) cout << x <<' ';cout << endl;}
void pint(int A){cout<<endl<<A<<endl;}
void pp(pair<int,int> p){cout<<p.first<<' '<<p.second<<endl;}

/*!SECTION : Problem Description ::
 B. Fair Division
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Alice and Bob received n
 candies from their parents. Each candy weighs either 1 gram or 2 grams. Now they want to divide all candies among themselves fairly so that the total weight of Alice's candies is equal to the total weight of Bob's candies.

Check if they can do that.

Note that candies are not allowed to be cut in half.

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases. Then t
 test cases follow.

The first line of each test case contains an integer n
 (1≤n≤100
) — the number of candies that Alice and Bob received.

The next line contains n
 integers a1,a2,…,an
 — the weights of the candies. The weight of each candy is either 1
 or 2
.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, output on a separate line:

"YES", if all candies can be divided into two sets with the same weight;
"NO" otherwise.
You can output "YES" and "NO" in any case (for example, the strings yEs, yes, Yes and YES will be recognized as positive).
*/


 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    int twoCount = 0, oneCount = 0;
    while (n--)
    {
        int c;
        cin >> c;
        if(c==2)
            twoCount++;
        else oneCount++;
    }
    int sum = 2 * twoCount + oneCount;
    int div = sum / 2;
    if(sum%2)
        PNO;
    else {
        if(div%2==0)
            PYES;
        else {
            if(oneCount>0)
                PYES;
            else
                PNO;
        }
    }
}

return 0 ;
}