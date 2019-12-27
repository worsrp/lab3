#include<iostream>
using namespace std;
int main()
{
    float i=2,sum=0;
    while(i!=69)
    {
        sum=sum+(1/i);
        i++;
    }
    cout << sum;
    return 0;
}