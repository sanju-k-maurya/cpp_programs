#include<iostream>
using namespace std;

void swap1(int x, int y)  //call by value
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void swap2(int *x, int *y) //call by address
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void swap3(int &x, int &y) //call by reference
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    a=10;
    b=20;
    cout<<a<<" "<<b<<endl;
    //swap1(a,b);
    //swap2(&a, &b);
    swap3(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}