#include<iostream>
using namespace std;
int main()
{
    float i=6,sum=0;
    while(i!=19)
    {
        sum=sum+(1/i);
        i++;
    }
    cout << sum;
    return 0;
}