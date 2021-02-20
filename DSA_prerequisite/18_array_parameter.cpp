#include<iostream>
using namespace std;

void fun(int *a, int n)  //OR void fun(int a[], int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}

int * fun2(int size) //int [] fun2(int size)
{
    int *p;
    p=new int[size];

    for(int i=0;i<size;i++)
    {
        p[i]=i+1;
    }
    return p;

}

int main()
{
    int a[] = {2,4,6,8,10};
    int n=5;
    for(int x : a)
        cout<<x<<" ";
    cout<<endl;
    fun(a,n);

    int *ptr;
    int sz=7;
    ptr = fun2(sz);

    for(int i=0;i<sz;i++)
        cout<<ptr[i]<<endl;
    return 0;
}