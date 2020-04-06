//Program to generate all prime number upto n using Sieve of Eratosthenes Algo.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a range to get prime number\n";
    cin>>n;
    bool isprime[n+1];
    for(int i=0;i<=n;i++)
    {
        isprime[i]=true;
    }
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(isprime[i]==true)
        {
            for(int j=2;i*j<=n;j++)
                isprime[i*j]=false;
        }
    }
    cout<<"List of prime numbers upto "<<n<<" : \n";
    for(int i=0;i<=n;i++)
    {
        if(isprime[i])
            cout<<i<<"  ";
            
    }
    cout<<endl;
    return 0;

}