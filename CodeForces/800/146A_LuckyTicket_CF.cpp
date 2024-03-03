#include <iostream>
#include<string>
using namespace std;
void solve(string s)
{
    int n=s.length();
    bool check=true;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            continue;
        }
        else
        {
            check=false;
        }
    }
    if(!check)
    {
        cout<<"NO";
        return;
    }
    int first=0;
    int second=0;
    for(int i=0;i<n/2;i++)
    {
        first+=(int)s[i];
    }
    for(int i=n/2;i<n;i++)
    {
        second+=(int)s[i];
    }
    if(first==second)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int n;
    cin>>n;
    string s;
    cin>>s;
    solve(s);
    return 0;
}