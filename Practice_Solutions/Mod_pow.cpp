#include <iostream>
using namespace std;

int main() {
    int n,a;
    cout << "Enter Number and its power a raised to the power n"<<endl;
    cin >> a >> n;
    
    long long ans = 1;
    int m = 1000000007;
    
    for(int i=1; i<=n; i++)
    {
        ans = ((ans%m) * (a%m)) %m;
    }
    cout << "Power of a^n is "<<endl;
    cout << ans;
    return 0;
}