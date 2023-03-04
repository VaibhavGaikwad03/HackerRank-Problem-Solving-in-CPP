

/* Define the exception here */
class BadLengthException
{
    private:
        int l = 0;
    public:
        BadLengthException(int);
        int what();
};

BadLengthException::BadLengthException(int n)
{
    this->l = n;
}

int BadLengthException::what()
{
    return this->l;
}

