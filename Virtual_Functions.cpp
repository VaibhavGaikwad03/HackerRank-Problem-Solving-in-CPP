#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
        name.clear();
        age = 0;
    }
    virtual void getdata(){}
    virtual void putdata(){}
};

class Professor : public Person
{
private:
    int publication;
    static int cur_id;
    
public:
    Professor()
    {
        publication = 0;
    }
    
    void getdata()
    {
        cin>>name;
        cin>>age;
        cin>>publication;
    }
    
    void putdata()
    {
        cur_id++;
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<publication<<" ";
        cout<<cur_id<<endl;
    }
};

int Professor::cur_id = 0;

class Student : public Person
{
private:
    int *marks;
    static int cur_id;
    
public:
    Student()
    {
        marks = new int[6];
    }
    
    void getdata()
    {
        cin>>name;
        cin>>age;
        for(int i = 0; i < 6; i++)
            cin>>marks[i];
         
    }
    
    void putdata()
    {
        int iSum = 0;
        cur_id++;
        for(int i = 0; i < 6; i++)
            iSum += marks[i];
            
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<iSum<<" ";
        cout<<cur_id<<endl;
    }
};

int Student::cur_id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
