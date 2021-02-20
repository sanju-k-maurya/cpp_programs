#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{                               //pointer to variable
    /*int a=10;
    int *p;
    p=&a;

    cout<<*p<<endl;

    cout<<p<<"   "<<&a<<endl;

    cout<<a<<endl;


*/
 
    int A[5]={2,4,6,8,10};   
    int *p1;                                     //pointer to an array
    p1=A;   // or p1=&A[0];
    

    for(int i=0;i<5;i++)
        cout<<A[i]<<endl;

    for(int i=0;i<5;i++)
        cout<<p1[i]<<endl;


/*    int *p3;                      //array inside heap or dynamically allocation
    p3 = new int[5];
    p3[0]=10;
    p3[1]=15;
    p3[2]=20;
    p3[3]=25;
    p3[4]=30;
    
    for(int i=0;i<5;i++)
        cout<<p3[i]<<endl;
    
    delete [] p3;
*/    

/*    int *p1;                               //interesting thing about pointers
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
*/
    return 0;
}