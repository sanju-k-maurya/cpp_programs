#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;

    cout<<a<<"  "<<r<<endl;

    r++;
    cout<<a<<"  "<<r<<endl;

    a=25;
    cout<<a<<"  "<<r<<endl;

    int b=36;
    r=b;
    cout<<a<<"  "<<r<<endl; 
    return 0;
}