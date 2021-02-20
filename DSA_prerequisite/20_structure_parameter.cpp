#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


void fun(struct Rectangle r)
{
    r.length=20;
    cout<<r.length<<" "<<r.breadth<<endl;
}

void fun2(struct Rectangle *p)
{
    p->length=25;
    cout<<p->length<<" "<<p->breadth<<endl;
}

struct Rectangle *fun3()
{
    struct Rectangle *p;
    p=new Rectangle;
    
    p->length=15;
    p->breadth=7;

    return p;

}
int main()
{   
    /*
    struct Rectangle r = {10,5};
    fun(r);
    cout<<r.length<<" "<<r.breadth<<endl;

    struct Rectangle r2 = {20,10};
    cout<<r2.length<<" "<<r2.breadth<<endl;
    fun2(&r2);
    cout<<r2.length<<" "<<r2.breadth<<endl;
    */
    struct Rectangle *ptr= fun3();
    cout<<ptr->length<<" "<<ptr->breadth<<endl;

    return 0;
}