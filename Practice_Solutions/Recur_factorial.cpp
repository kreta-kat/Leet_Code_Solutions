#include <iostream>
using namespace std;

int fact(int n)
{
    if(n ==1 || n == 0) return 1;
    
    int temp = fact(n-1);
    return n * temp;
}
int main() {
    int n;
    cout << "Enter number to calculate factorial"<<endl;
    cin >> n;
    int ans = fact(n);
    cout << ans;
    return 0;
}