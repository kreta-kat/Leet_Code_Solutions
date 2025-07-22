#include <iostream>
using namespace std;


int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    int temp = gcd(b%a,a);
    
    return temp;
}
int main() {
    int a,b;
    cout <<"Enter a and b to calculate gcd" << endl;
    cin >>a >>b;
    
    cout <<gcd(a,b);

    return 0;
}