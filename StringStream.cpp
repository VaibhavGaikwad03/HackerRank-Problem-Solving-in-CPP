#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

vector<int> parseInts(string str) 
{
    vector<int> vect;
    stringstream strs(str);
    string mid = "";
    
    while (getline(strs, mid, ',')) 
        vect.push_back(stoi(mid));

    return vect;
}

int main() 
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    
    for(int i = 0; i < integers.size(); i++) 
        cout << integers[i] << "\n";
    
    return 0;
}
