

// Write your Student class here
class Student
{
    private:
        int marks[5];
    
    public:
        void input();
        int calculateTotalScore();  
};

void Student::input()
{
    for(int i = 0; i < 5; i++)
    {
        cin>>this->marks[i];
    }
}

int Student::calculateTotalScore()
{
    int iSum = 0;
    
    for(int i = 0; i < 5; i++)
    {
        iSum = iSum + this->marks[i];
    }
    return iSum;
}

