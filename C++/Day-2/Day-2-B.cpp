#include <bits/stdc++.h>
using namespace std;


int main() {
   int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<4)
        {
            cout<<(n-1)<<endl;
        }
        else
        {
            cout<<((n%2==0)?2:3)<<endl;
        }
        
        
    }
    return 0;
}
