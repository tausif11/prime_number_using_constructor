#include<iostream>
#include<string.h>
using namespace std;
class prime
{
    int n,i,k=0;
public:
    prime(int a)    /// parameterized constructor
    {
        n=a;
       for(i=2; i<=n/2;i++)
       {
           if(n%i==0)
           {
              k=1;
              break;
           }
           else
           {
              k=0;
           }
       }

    }

    void check()
    {
        if(k==0)
        {
            cout<<"\nNumber is prime";
        }
        else
        {
            cout<<"\n Number is not prime";
        }
    }
};
int main()
{
    int a;
    cout<<"Enter The number:";
    cin>>a;
     prime X(a) ;
     X.check();
    return 0;
}
