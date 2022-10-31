#include<iostream>
#include<math.h>
using namespace std;

void convOctal(int n)
{
    int i=0, dec=0, digit;
    while(n>0)
    {
        digit=n%10;
        dec+=digit*pow(8,i);
        i++;
        n/=10;
    }
    int j=1, rem;
    long long bin=0;
    while(dec>0)
    {
        rem=dec%2;
        dec/=2;
        bin+=rem*j;
        j*=10;
    }
    cout<<bin;
}

int main()
{
    int n=12;
    convOctal(n);
}
