#include <iostream>
using namespace std;

int pow_optimal(int a, int n, int m)
{
    if(n == 0)
    {
        return 1;
    }
    long long temp = pow_optimal(a, n/2, m);
    //for even n
    if(n%2 == 0)
    {
        return ((temp%m) * (temp%m))%m;
    } else {
        //for odd n
    long long x = ((temp %m) * (temp%m))%m;
    return (x*a)%m;
    }
}

int main() {
    int n,a,m;
    cout << "Enter Number and its power a raised to the power n"<<endl;
    cin >> a >> n;
    cout << "enter Mod"<<endl;
    cin >> m;
    int ans = pow_optimal(a,n,m);
    cout << "Power of a^n is "<<endl;
    cout << ans;
    return 0;
}