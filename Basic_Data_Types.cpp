#include <iostream>
#include <cstdio>
using namespace std;

int main(void) 
{
    
    int iNo = 0;
    long int lNo = 0;
    char ch = '\0';
    float f = 0.0;
    double d = 0.0;
    
    scanf("%d %ld %c %f %lf", &iNo, &lNo, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%f\n%lf",  iNo, lNo, ch, f, d);
    
    return 0;
}
