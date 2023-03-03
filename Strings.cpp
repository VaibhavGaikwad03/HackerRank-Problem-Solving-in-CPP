#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string a = "";
    string b = "";
    char c = '\0';
    
    cin>>a;
    cin>>b;
    
    cout<<a.size();
    cout<<" ";
    cout<<b.size();
    cout<<endl;
    cout<<a + b;
    cout<<endl;
    
    c = a[0];
    a[0] = b[0];
    b[0] = c;
    
    cout<<a<<" "<<b;
    
    return 0;
}