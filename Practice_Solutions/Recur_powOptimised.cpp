#include <iostream>
using namespace std;

int pow(int a, int n)
{
    if(n == 1)
    {
        return a;
    }
    
    int temp = pow(a,n/2);
    if(n%2 == 0)
    {
        return temp * temp;
    }
    else
    {
        return temp * temp * a;
    }
}
int main() {
    int a,n;
    cout << "Enter a and n to calculate a^n optimised"<<endl;
    cin >> a >> n;
    int ans = pow(a,n);
    cout << ans;
    return 0;
}