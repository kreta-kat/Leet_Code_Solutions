#include <iostream>
using namespace std;

int pow(int a, int n)
{
    if(n ==1) return a;
    
    int temp = pow(a,n-1);
    return a * temp;
        
}
int main() {
    int a,n;
    cout << "Enter a and n to calculate a^n"<<endl;
    cin >> a >> n;
    int ans = pow(a,n);
    cout << ans;
    return 0;
}