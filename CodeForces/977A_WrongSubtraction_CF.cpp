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
void pvvi(vvi A){for(auto v : A){pv(v);}}



 
 
/*!SECTION : Problem Description ::
Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:

if the last digit of the number is non-zero, she decreases the number by one;
if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
You are given an integer number n
. Tanya will subtract one from it k
 times. Your task is to print the result after all k
 subtractions.

It is guaranteed that the result will be positive integer number.

Input
The first line of the input contains two integer numbers n
 and k
 (2≤n≤109
, 1≤k≤50
) — the number from which Tanya will subtract and the number of subtractions correspondingly.

Output
Print one integer number — the result of the decreasing n
 by one k
 times.

It is guaranteed that the result will be positive integer number.
*/
 
 

 
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,k;
cin>>n>>k;
while(k--){
    if(n%10) n--;
    else n/=10;
}
pint(n);
 
 
return 0 ;
}