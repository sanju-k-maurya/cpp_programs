#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *p, int l, int b)
{
    p->length=l;
    p->breadth=b;
}

int area(struct Rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r)
{
    int p;
    p=2*(r.length+r.breadth);
    return p;
}

int main()
{
    Rectangle r = {0,0};

    int l, b;
    cout<<"Enter length and breadth : "<<endl;
    cin>>l>>b;
    initialize(&r,l,b);

    int a = area(r);
    int peri = perimeter(r);

     cout<<"Area is : "<<a<<" Perimeter is : "<<peri<<endl;
}