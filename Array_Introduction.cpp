#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n = 0;
    cin>>n;
    
    int Arr[n];
    
    for(int i = 0; i < n; i++)
    {
        cin>>Arr[i];
    }
    
    for(int i = n-1; i >= 0; i--)
    {
        cout<<Arr[i]<<" ";
    }
    
    return 0;
}
