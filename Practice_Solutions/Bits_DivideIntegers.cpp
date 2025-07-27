#include <iostream>
#include <algorithm>

using namespace std;

int divideIntegers(int A, int B)
{
    //a>b
    long a = A;
    long b = B;
    int sign = 1;
    if(a<0)
    {
        sign = sign * -1;
    }
    
    if(b<0)
    {
        sign = sign * -1;
    }
    a = abs(a);
    b = abs(b);
    
    
    int q = 0;
    int temp = 0;
    for(int i=31; i>= 0; i--)
    {
        if(((b << i) + temp) <= a)
        {
            temp = temp + (b <<i);
            q = q + ((long)1<<i);
        }
    }
    
    if(sign <0)
    {
        q= -q;
    }
    return (int)q;
}

int main() {
    int a, b;
    cout << "Enter a and b to divide without multiplication, division and mod"<<endl;
    
    cin >> a >> b;
    cout <<divideIntegers(a,b);
    
    return 0;
    
    
}

