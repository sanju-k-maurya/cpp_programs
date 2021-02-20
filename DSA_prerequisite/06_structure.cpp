#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    struct Rectangle r1={10,5};

    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    
    r1.length=15;
    r1.breadth=7;

    cout<<sizeof(r1)<<endl;
    cout<<sizeof(Rectangle)<<endl;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;


    return 0;
}