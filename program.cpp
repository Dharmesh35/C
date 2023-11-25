#include<stdio.h>
#include<iostream>
using namespace std ;
class rect
{
public:
    int length;
    int breath;

    void intialise(int l,int b)
    {   
        length=l;
        breath=b;
    }

    int area()
    {
        return length*breath;
    }

    int perimeter()
    {
        return 2*(length+breath);
    }
};

int main()
{
    rect r;
    /* Declaring two variables l and b. */
    int l,b;
    printf("Enter l & b");
    /* Taking input from the user. */
    cin>>l>>b;
    r.intialise(l,b);
    int a = r.area();
    /* Calling the function perimeter() and storing the value returned by the function in the variable
    p. */
    /* Calling the function perimeter() and storing the value returned by the function in the variable
    p. */
    int p = r.perimeter();
    printf("%d\n,%d\n",a,p);
    return 0;
}