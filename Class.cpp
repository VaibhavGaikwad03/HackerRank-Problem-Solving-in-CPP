#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    public:
        int age, standard;
        string firstname, lastname;
        
        void set_age(int age)
        {
            this->age = age;
        }
        void set_standard(int standard)
        {
            this->standard = standard;
        }
        void set_first_name(string firstname)
        {
            this->firstname = firstname;
        }
        void set_last_name(string lastname)
        {
            this->lastname = lastname;
        }
        
        int get_age()
        {
            return age;
        }
        int get_standard()
        {
            return standard;
        }
        string get_first_name()
        {
            return firstname;
        }
        string get_last_name()
        {
            return lastname;
        }
        
        string to_string()
        {
            ostringstream agestr;
            agestr<<this->age;
            
            string age = agestr.str();
            
            ostringstream stdstr;
            
            stdstr<<this->standard;
            
            string standard = stdstr.str();
            
            return age+','+this->firstname+','+this->lastname+','+standard;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
